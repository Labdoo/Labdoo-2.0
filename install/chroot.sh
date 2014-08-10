#!/bin/bash
### Install a new chrooted server from scratch, with debootstrap.

function usage {
    echo "
Usage: $0 [OPTIONS] <settings> [options]
Install Labdoo inside a chroot in the target directory.

    <settings>    file of installation/configuration settings
    --target=D    target dir where the system will be installed
    --arch=A      set the architecture to install (default i386)
    --suite=S     system to be installed (default precise)
    --mirror=M    source of the apt packages
                  (default http://archive.ubuntu.com/ubuntu)
    --opt_name=V  override any settings in the config file
"
    exit 0
}

### get the options
for opt in "$@"
do
    case $opt in
	--target=*)    target=${opt#*=} ;;
	--arch=*)      arch=${opt#*=} ;;
	--suite=*)     suite=${opt#*=} ;;
	--mirror=*)    apt_mirror=${opt#*=} ;;
	-h|--help)     usage ;;
        --*=*)
	    optvalue=${opt#*=}
	    optname=${opt%%=*}
	    optname=${optname:2}
	    eval export $optname="$optvalue"
	    ;;
	*)
	    if [ ${opt:0:1} = '-' ]; then usage; fi

	    settings=$opt
	    if ! test -f "$settings"
            then
		echo "File '$settings' does not exist."
		exit 1
	    fi
	    set -a;  source $settings;  set +a
	    ;;
    esac
done

### check that there was at least one settings file
if [ "$settings" = '' ]
then
    echo
    echo "Error: No settings file was given."
    usage
fi

### check that the code of labdoo does exist
if ! test -d labdoo
then
    echo "Fatal error: 'labdoo' does not exist."
    exit 1
fi

### make sure that we are using the right version of install scripts
cd labdoo/
git checkout $lbd_git_branch && git pull origin $lbd_git_branch
cd ..

### install debootstrap dchroot
apt-get install -y debootstrap dchroot

### install a minimal system
export DEBIAN_FRONTEND=noninteractive
debootstrap --variant=minbase --arch=$arch $suite $target $apt_mirror

cat <<EOF > $target/etc/apt/sources.list
deb $apt_mirror $suite main restricted universe multiverse
deb $apt_mirror $suite-updates main restricted universe multiverse
deb http://security.ubuntu.com/ubuntu $suite-security main restricted universe multiverse
EOF

cp /etc/resolv.conf $target/etc/resolv.conf
mount -o bind /proc $target/proc
chroot $target apt-get update
chroot $target apt-get -y install ubuntu-minimal

### display the name of the chroot on the prompt
echo $target > $target/etc/debian_chroot

### copy the local git repository to the target dir
export code_dir=/var/www/code
chroot $target mkdir -p $code_dir
cp -a labdoo $target/$code_dir

### stop any services that may get into the way
### of installing services inside the chroot
for service in apache2 nginx mysql
do
    if test -f /etc/init.d/$service
    then
        /etc/init.d/$service stop
    fi
done

### run install/config scripts
chroot $target $code_dir/labdoo/install/install-and-config.sh

### create an init script
template_init=labdoo/install/init.sh
init_script="/etc/init.d/chroot-$target"
chroot_dir="$(pwd)/$target"
sed -e "/^CHROOT=/c CHROOT='$chroot_dir'" $template_init > $init_script
chmod +x $init_script

### start the chroot system on boot
service="chroot-$target"
update-rc.d $service defaults
if [ "$start_on_boot" = 'true' ]
then
    update-rc.d $service enable
else
    update-rc.d $service disable
fi

### stop the services inside chroot
$init_script stop

### reboot
test "$reboot" = 'true' && reboot

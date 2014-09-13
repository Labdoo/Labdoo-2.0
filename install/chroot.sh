#!/bin/bash -x
### Install a new chrooted server from scratch, with debootstrap.

source_dir=$(dirname $(dirname $0))

function usage {
    echo "
Usage: $0 <settings> [options]
Install $source_dir inside a chroot in another directory.

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

### make sure that we are using the right version of install scripts
current_dir=$(pwd)
cd $source_dir/
git checkout $git_branch && git pull origin $git_branch
cd $current_dir

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

### copy the local git repository to the target dir
project=$(basename $(ls $source_dir/*.info | sed -e 's/\.info$//'))
mkdir -p $target/usr/local/src/
cp -a $source_dir $target/usr/local/src/
mv $target/usr/local/src/{$(basename $source_dir),$project}
export code_dir=/usr/local/src/$project

### run install/config scripts
chroot $target $code_dir/install/install-and-config.sh

### create an init script
template_init=$source_dir/install/init.sh
init_script="/etc/init.d/chroot-$target"
chroot_dir="$current_dir/$target"
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

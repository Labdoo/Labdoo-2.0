#!/bin/bash
### Install a new chrooted Labdoo server
### from scratch, with debootstrap.

function usage {
    echo "
Usage: $0 [OPTIONS] <target>
Install Labdoo inside a chroot in the target directory.

    --arch=A      set the architecture to install (default i386)
    --suite=S     system to be installed (default precise)
    --mirror=M    source of the apt packages
                  (default http://archive.ubuntu.com/ubuntu)
"
    exit 0
}

### get the options
for opt in "$@"
do
    case $opt in
	--arch=*)    arch=${opt#*=} ;;
	--suite=*)   suite=${opt#*=} ;;
	--mirror=*)  apt_mirror=${opt#*=} ;;
	-h|--help)   usage ;;
	*)
	    if [ ${opt:0:1} = '-' ]; then usage; fi
	    target_dir=$opt
	    ;;
    esac
done

### set default values for the missing options
target_dir=${target_dir:-lbd}
arch=${arch:-i386}
suite=${suite:-precise}
apt_mirror=${apt_mirror:-http://archive.ubuntu.com/ubuntu}

### install debootstrap dchroot
apt-get install -y debootstrap dchroot

### install a minimal system
export DEBIAN_FRONTEND=noninteractive
debootstrap --variant=minbase --arch=$arch $suite $target_dir $apt_mirror

cat <<EOF > $target_dir/etc/apt/sources.list
deb $apt_mirror precise main restricted universe multiverse
deb $apt_mirror precise-updates main restricted universe multiverse
deb http://security.ubuntu.com/ubuntu precise-security main restricted universe multiverse
EOF

cp /etc/resolv.conf $target_dir/etc/resolv.conf
mount -o bind /proc $target_dir/proc
chroot $target_dir apt-get update
chroot $target_dir apt-get -y install ubuntu-minimal

### stop any services that may get into the way
### of installing services inside the chroot
for SRV in apache2 nginx mysql
do service $SRV stop; done

### apply to chroot the scripts and the overlay
install_dir=$(dirname $0)
chroot $target_dir mkdir -p /tmp/install
cp -a $install_dir/* $target_dir/tmp/install/
cp $install_dir/../build-labdoo.make /tmp/
labdoo_branch=`cd $install_dir/../; git branch | sed -n '/\* /s///p'`
labdoo_revision=`cd $install_dir/../; git rev-parse HEAD`
chroot $target_dir /tmp/install/install-scripts/00-config.sh $labdoo_branch $labdoo_revision

### create an init script and make it start at boot
current_dir=$(pwd)
cd $target_dir
chroot_dir=$(pwd)
cd $current_dir
init_script="/etc/init.d/chroot-$(basename $chroot_dir)"
sed -e "/^CHROOT=/c CHROOT='$chroot_dir'" $install_dir/init.sh > $init_script
chmod +x $init_script
script_name=$(basename $init_script)
update-rc.d $script_name defaults
update-rc.d $script_name disable  # it will not start automatically on reboot

### display the name of the chroot on the prompt
echo $(basename $chroot_dir) > $target_dir/etc/debian_chroot

### customize the configuration of the chroot system
#chroot $target_dir /tmp/install/config.sh
#chroot $target_dir rm -rf /tmp/install

### stop the services inside chroot
#$init_script stop

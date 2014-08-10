#!/bin/bash
### When running a chroot with Ubuntu Trusty (14.04) inside a Debian
### Wheezy (7) there is still an issue with upstart. This issue is
### described here:
###  - http://ubuntuforums.org/showthread.php?t=1997229
###  - https://bugs.launchpad.net/ubuntu/+source/upstart/+bug/430224
### I have tried the workaround in this comment and it works:
###  - https://bugs.launchpad.net/ubuntu/+source/upstart/+bug/430224/comments/58
### This script is just to remember these commands.
###
### It is used like this:
###     dev/upstart-workaround.sh start
###     aptitude update
###     aptitude upgrade
###     aptitude install ...
###     dev/upstart-workaround.sh stop

case $1 in
    start)
	dpkg-divert --local --rename --add /sbin/initctl
	ln -s /bin/true /sbin/initctl
        ;;
    stop)
	rm /sbin/initctl
	dpkg-divert --local --rename --remove /sbin/initctl
        ;;
    *)
        echo "Usage: $0 [start|stop]"
        ;;
esac
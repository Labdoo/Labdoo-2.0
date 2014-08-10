#!/bin/bash

CHROOT=/var/chroot/lbd

HOST_SERVICES="mysql apache2"
#CHROOT_SERVICES="php5-fpm memcached mysql nginx"
CHROOT_SERVICES="mysql apache2"
MOUNT_POINTS="proc dev sys dev/pts"

### reverse a list of words given as parameter
function reverse {
    list_of_words=$1
    reversed_list=''
    for word in $list_of_words
    do
	reversed_list="$word $reversed_list"
    done
    echo $reversed_list
}

case "$1" in
    start)
	# stop the services on the host
	for service in $(reverse "$HOST_SERVICES")
	do
	    if test -f /etc/init.d/$service
	    then
	        /etc/init.d/$service stop
            fi
	done

	# mount /proc etc. to the CHROOT
	for DIR in $MOUNT_POINTS
	do
	    mount -o bind /$DIR $CHROOT/$DIR
	done
	chroot $CHROOT/ mount -a   # php5-fpm will not start without this

	# start the services inside the CHROOT
	for service in $CHROOT_SERVICES
	do
	    chroot $CHROOT/ /etc/init.d/$service start
	done

	# start cron
	chroot $CHROOT/ cron
	;;

    stop)
	# stop cron
	chroot $CHROOT/ killall cron

	# stop the services inside the CHROOT
	for service in $(reverse "$CHROOT_SERVICES")
	do
	    chroot $CHROOT/ /etc/init.d/$service stop
	done

        # kill any remaining processes that are still running on CHROOT
        chroot_pids=$(for p in /proc/*/root; do ls -l $p; done | grep $CHROOT | cut -d'/' -f3)
	test -z "$chroot_pids" || (kill -9 $chroot_pids; sleep 2)

	chroot $CHROOT/ umount -a

	# umount /proc etc. from the CHROOT
	for DIR in $(reverse "$MOUNT_POINTS")
	do
	    umount $CHROOT/$DIR
	done

	# start the services on the host
	for service in $HOST_SERVICES
	do
	    if test -f /etc/init.d/$service
	    then
	        /etc/init.d/$service start
            fi
	done
	;;
    *)
	echo " * Usage: $0 {start|stop}"
esac

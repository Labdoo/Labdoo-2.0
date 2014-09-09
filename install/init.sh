#!/bin/bash

CHROOT=/var/chroot/lbd

case "$1" in
    start)
        # mount /proc etc. to the CHROOT
        for dir in proc dev sys dev/pts
        do
            mount -o bind /$dir $CHROOT/$dir
        done
        chroot $CHROOT/ mount -a

        # start the services inside the CHROOT
        chroot $CHROOT/ /usr/bin/supervisord -c /etc/supervisord.conf
        ;;

    stop)
        # stop the services inside the CHROOT
        chroot $CHROOT/ killall supervisord
        sleep 2

        # kill any remaining processes that are still running on CHROOT
        chroot_pids=$(for p in /proc/*/root; do ls -l $p; done | grep $CHROOT | cut -d'/' -f3)
        test -z "$chroot_pids" || (kill -9 $chroot_pids; sleep 2)

        # umount /proc etc. from the CHROOT
        chroot $CHROOT/ umount -a
        for dir in dev/pts sys dev proc
        do
            umount $CHROOT/$dir
        done
        ;;
    *)
        echo " * Usage: $0 {start|stop}"
esac

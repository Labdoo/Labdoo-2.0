#!/bin/bash

# This script implements the Labdoo watchdog. Currently it is very simple. The script
# only checks if the HTTP server is responsive, and if not, it restarts the supervisor
# and sends a debugging message to the Labdoo support address.
# This script currently does not check for system wide failures, so it is limited
# in scope. However, it supports the most common case of failures. A future enhancement 
# is to include a wider set of failures.

PATH=/bin:/usr/bin:/usr/sbin
TEMPDIR=/tmp/labdoo-watchdog
EMAIL=contact@labdoo.org

#
# This function restarts the Labdoo server checking that there is
# no nother thread attempting to do the same,.
#
# $1 : A string containing the initial part of the email subject header
#
do_restart ()
{
    # If already in the process of being recovered, don't proceed.
    if [ ! -f ~/.lbd-being-restarted ]
    then
        mkdir -p $TEMPDIR
        touch ~/.lbd-being-restarted
        # Write an informative e-mail
        echo -n $1" " > $TEMPDIR/mail
        date >> $TEMPDIR/mail
        echo >> $TEMPDIR/mail
        echo >> $TEMPDIR/mail
        echo "Access log:" >> $TEMPDIR/mail
        tail -n 60 /var/log/apache2/access.log >> $TEMPDIR/mail
        echo >> $TEMPDIR/mail
        echo "Error log:" >> $TEMPDIR/mail
        tail -n 60 /var/log/apache2/error.log >> $TEMPDIR/mail
        echo >> $TEMPDIR/mail
        # Restart labdoo
        echo "Now restarting Labdoo..." >> $TEMPDIR/mail
        # Do not run the supervisor with two separate commands
        # 'stop' and 'start' because the stop is non-blocking
        # and can collide with start. Instead, run it as 'restart'.
        /etc/init.d/supervisor restart >> $TEMPDIR/mail 2>&1
        echo "Done." >> $TEMPDIR/mail
        # Send the mail
        echo >> $TEMPDIR/mail
        cat $TEMPDIR/mail
        cat $TEMPDIR/mail | sendmail $EMAIL
        rm ~/.lbd-being-restarted
        rm -rf $TEMPDIR
    fi
}


if [ $# -eq 1 ] && [ $1 = "--restart-now" ]
then
    logger -s "Restarting the Labdoo engine now..."
    do_restart "Subject: Labdoo is being restarted | "
    logger -s "Done."
else
    # Check if server is alive
    if ( ! wget --no-check-certificate --timeout=15 -q -P $TEMPDIR http://localhost/robots.txt )
    then
        logger -s "Labdoo engine is down. Restarting the engine now..."
        do_restart "Subject: Labdoo server down | "
        logger -s "Done."
    fi
fi

exit


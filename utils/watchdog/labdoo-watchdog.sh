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

if ( ! wget --no-check-certificate --timeout=30 -q -P $TEMPDIR http://localhost/robots.txt )
then
    # Server is down.
    # If already in the process of being recovered, don't proceed.
    if [ ! -f ~/.lbd-being-recovered ]
    then
        mkdir -p $TEMPDIR
        touch ~/.lbd-being-recovered
        # Write an informative e-mail
        echo -n "Subject: Labdoo server down | " > $TEMPDIR/mail
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
        /etc/init.d/supervisor stop >> $TEMPDIR/mail 2>&1
        /etc/init.d/supervisor start >> $TEMPDIR/mail 2>&1
        echo "Done." >> $TEMPDIR/mail
        # Send the mail
        echo >> $TEMPDIR/mail
        cat $TEMPDIR/mail
        cat $TEMPDIR/mail | sendmail $EMAIL
        rm ~/.lbd-being-recovered
        rm -rf $TEMPDIR
    fi
fi


#!/bin/bash
#
# This script is a wrapper to labdoo-watchdog.sh and it is meant to be run
# from outside the jail as a cron job. See labdoo-watchdog.sh for more info.
#
# 
# Run this script as a cron job, example:
#     * * * * *  /var/www/lbd/profiles/labdoo/utils/watchdog/labdoo-watchdog.sh 
# 

TEMPDIR=/tmp/labdoo-watchdog

logger -s "Checking Labdoo site..."
if ( ! wget --no-check-certificate --timeout=15 -q -P $TEMPDIR http://localhost/robots.txt )
then
    logger -s "Labdoo engine is down. Restarting the engine now [unjailed]..."
    chroot /var/chroot/lbd/ /var/www/lbd/profiles/labdoo/utils/watchdog/labdoo-watchdog.sh --restart-now
    logger -s "Done."
fi
logger -s "Labdoo is alive."

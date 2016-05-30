#!/bin/bash
#
# This script is a wrapper to labdoo-watchdog.sh and it is meant to be run
# as a daemon with nohup.
#
# Run this script as follows from the terminal:
#     nohup /var/www/lbd/profiles/labdoo/utils/watchdog/labdoo-watchdog-daemon.sh >/dev/null 2>&1 &
# 

while true
do 
    logger -s "Checking Labdoo site..."
    /var/www/lbd/profiles/labdoo/utils/watchdog/labdoo-watchdog.sh
    logger -s "Labdoo is alive."
    sleep 30
done    

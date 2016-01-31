#!/bin/bash

# This script creates a backup copy of the Labdoo SQL database that can be imported
# to a new Labdoo instance.
# 
# To import the resulting SQL database dump, use the following command on a newly
# installed Labdoo instance:
#
# > drush sql-drop  # this is a dangerous command as it will delete all SQL tables. Be 
#                   # careful not to run this command in a production Labdoo instance.
# > drush sql-cli < lbd-snap-sql-xxxxxxxx.sql
# 
# Run this script as a cron job:
#   30 2 * * * /var/www/lbd/profiles/labdoo/utils/backups/labdoo-snap-sql.sh 
#
# Use rsync to pull the snapshots onto another machine, e.g.:
#   rsync -avzh -e "ssh -i $YOURPEMPRIVATEKEY" ubuntu@www.labdoo.org:/var/chroot/lbd/lbd-snap-sql/ $DESTINATIONPATH/lbd-snap-sql/
#

set -x

sqldumpname='lbd-snap-sql-'$(date +"%Y%m%d").sql
/usr/bin/drush @lbd cc all
# Ensure the folder /lbd-snap-sql exists with the right permissions
/usr/bin/drush @lbd sql-dump > /lbd-snap-sql/$sqldumpname
/usr/bin/drush @lbd cron


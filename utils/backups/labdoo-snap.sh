#!/bin/bash

# To create a backup service for Labdoo's AWS instance, do as follows:
#
# (1) On a AWS instance (could be the production instance itself, or
#     the development instance), install the ec2 API tools:
#
#     > apt-add-repository multiverse && apt-get update
#     > apt-get install ec2-api-tools
#
# (2) Store this script (labdoo-snap.sh) under /home/ubuntu or similar
#
# (3) Edit this script and set the right values for AWS_ACCESS_KEY and AWS_SECRET_KEY
#
# (4) Enable a cron entry to invoke this script once a day:
#
#     > crontab -e # type the following line:
#     > 0 5 * * * /home/ubuntu/labdoo-snap.sh # this runs the script at 5am everyday
#
# (5) To see cron logs, edit /etc/rsyslog.d/50-default.conf and comment out
#     the following line:
#
#     # cron.* /var/log/cron.log
#
#     Then run:
#
#     > sudo service rsyslog restart 
#     > sudo service cron restart
#
#     You can now tail the cron log:
#
#     > tail -f /var/log/cron.log 
#

set -x

export AWS_ACCESS_KEY=
export AWS_SECRET_KEY=

volume='vol-961db578'
description='Labdoo backup-'$(date +"%Y%m%d")
tagname='lbd-snap-'$(date +"%Y%m%d")
ec2addsnap $volume -d "$description"
snapshot_id=$(ec2dsnap | grep "$description" | awk '{print $2}')
ec2addtag $snapshot_id --tag Name=$tagname 


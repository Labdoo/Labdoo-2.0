#!/bin/bash

cwd=$(dirname $0)

### Configure the Labdoo modules

# Parameter must be either "en" or "dis"
enOrDis=$1

$(dirname $0)/mysqld.sh start
drush @lbd $enOrDis -y labdoo_lib lbd_content_types labdoo_objects lbd_communicate\
                       lbd_visualize lbd_dootrip lbd_actions lbd_blocks 

# FIXME: Somehow labdoo_lib needs a reinstall (so that the nodes created by labdoo_lib.install are correct) 
# Remember to enable back labdoo_lib and all the libraries that depend on it
drush @lbd dis -y labdoo_lib
drush @lbd en -y labdoo_lib lbd_communicate lbd_actions lbd_blocks lbd_dootrip

# install smtp
$cwd/gmailsmtp.sh

# Some sample nodes for development (disable this for production)
# Note: these modules need to be installed after smtp is installed
#       since they need to send out notification emails
drush @lbd $enOrDis -y lbd_sample_doojects lbd_sample_edoovillages lbd_sample_hub 

# FIXME: for some reason module labdoo actions needs to be reinstalled to be properly activated
drush @lbd dis -y lbd_actions
drush @lbd en -y lbd_actions lbd_blocks lbd_layout


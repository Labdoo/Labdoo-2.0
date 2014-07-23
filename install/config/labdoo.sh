#!/bin/bash

cwd=$(dirname $0)

### Configure the Labdoo modules

# Parameter must be either "en" or "dis"
enOrDis=$1

$(dirname $0)/mysqld.sh start
drush @lbd $enOrDis -y labdoo_lib lbd_content_types labdoo_objects lbd_communicate\
                       lbd_visualize lbd_dootrip lbd_actions 

# FIXME: Somehow labdoo_lib needs a reinstall (so that the nodes created by labdoo_lib.install are correct) 
# Remember to enable back labdoo_lib and all the libraries installed so far that depend on it
drush @lbd dis -y labdoo_lib
drush @lbd en -y labdoo_lib lbd_communicate lbd_actions lbd_dootrip

# install smtp
$cwd/gmailsmtp.sh

# Some sample nodes for development (disable this for production)
# Note: these modules need to be installed after smtp is installed
#       since they need to send out notification emails
drush @lbd $enOrDis -y lbd_sample_doojects lbd_sample_edoovillages lbd_sample_hub lbd_sample_dootrips 

drush @lbd $enOrDis -y lbd_gmap
echo "
===> Enabled gmap module. If markers don't show up, please refresh their cache by going to admin/config/services/gmap and clicking on \"Regenerate\"
"


drush @lbd $enOrDis -y lbd_blocks_views

# Somehow after installing blocks and views a refresh of the cache is needed
# so that the various views and blocks are correctly enabled
drush @lbd cc all

drush @lbd $enOrDis -y lbd_menus 

drush @lbd $enOrDis -y lbd_roles

# Finally, clear the cache to get things to a proper initial state
drush @lbd cc all


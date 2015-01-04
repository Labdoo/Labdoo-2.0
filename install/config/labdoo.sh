#!/bin/bash -x

cwd=$(dirname $0)

### Configure the Labdoo modules

# Parameter must be either "en" or "dis"
enOrDis=$1

$(dirname $0)/mysqld.sh start

drush @lbd $enOrDis -y lbd_roles

drush @lbd $enOrDis -y labdoo_lib lbd_content_types labdoo_objects lbd_communicate\
                       lbd_dootrip lbd_actions 

# FIXME: Somehow labdoo_lib needs a reinstall (so that the nodes created by labdoo_lib.install are correct) 
# Remember to enable back labdoo_lib and all the libraries installed so far that depend on it
drush @lbd dis -y labdoo_lib
drush @lbd en -y labdoo_lib lbd_communicate lbd_actions lbd_dootrip

# # install smtp
# $cwd/gmailsmtp.sh

# Some sample nodes for development (disable this for production)
# Note: these modules need to be installed after smtp is installed
#       since they need to send out notification emails
# [Disabled]
#drush @lbd $enOrDis -y lbd_sample_doojects lbd_sample_edoovillages lbd_sample_hubs lbd_sample_dootrips 

drush @lbd $enOrDis -y lbd_gmap
echo "
===> Enabled gmap module. If markers don't show up, please refresh their cache by going to admin/config/services/gmap and clicking on \"Regenerate\"
"

drush @lbd $enOrDis -y lbd_blocks_views
drush @lbd $enOrDis -y lbd_users

# After installing blocks and views a refresh of the cache is needed
# so that the various views and blocks are correctly enabled
drush @lbd cc all

drush @lbd $enOrDis -y lbd_menus 
drush @lbd $enOrDis -y lbd_visualize
drush @lbd $enOrDis -y lbd_gics

# Enable Labdoo teams features
drush @lbd $enOrDis -y lbd_teams_features
drush @lbd $enOrDis -y lbd_teams

# Enable Wiki 
drush @lbd $enOrDis -y lbd_wiki

# Finally, clear once again the cache to get things to a proper initial state
drush @lbd cc all

# Remove for security reasons the examples folder in the plupload library
rm /var/www/lbd/profiles/labdoo/libraries/plupload/examples -rf 

# Install imagemagick (needed as a substitute to GD2 which has a bug on the image rotating feature)
apt-get -y install imagemagick

# Tunings for mysql and php
sed -i "s|^max_allowed_packet.*=.*|max_allowed_packet = 64M|g" /etc/mysql/my.cnf
sed -i "s|^memory_limit.*=.*|memory_limit = 400M|g" /etc/php5/apache2/php.ini


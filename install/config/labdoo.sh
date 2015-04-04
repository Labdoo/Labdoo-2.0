#!/bin/bash -x

# This file enables Labdoo specific modules. All other modules should be
# installed via the labdoo.make file.

cwd=$(dirname $0)
rootpath=$(drush @lbd php-eval 'print DRUPAL_ROOT')

### Configure the Labdoo modules

# Parameter must be either "en" or "dis"
enOrDis=$1

$(dirname $0)/mysqld.sh start

# Install clone module. This is a contribued module, and so it should be installed
# using the drush makefile. However, the installation of this module via the makefile
# is broken because the module namespace is "node_clone" but the module is named "clone".
# See https://www.drupal.org/node/1325940
drush @lbd dl node_clone
drush @lbd $enOrDis -y clone
drush @lbd dl node_clone_tab
drush @lbd $enOrDis -y node_clone_tab

# Module nodeaccess_userreference breaks when built using
# Drush make, so enable it from here. (It's required by
# the other modules, so enable it first.)
drush @lbd $enOrDis -y nodeaccess_userreference
# Rebuild permissions after installing nodeaccess_userreference
drush @lbd php-eval 'node_access_rebuild();'

drush @lbd $enOrDis -y lbd_roles

drush @lbd $enOrDis -y labdoo_lib lbd_content_types labdoo_objects lbd_communicate\
                       lbd_dootrip lbd_actions 

# FIXME: Somehow labdoo_lib needs a reinstall (so that the nodes created by labdoo_lib.install are correct) 
# Remember to enable back labdoo_lib and all the libraries installed so far that depend on it
drush @lbd dis -y labdoo_lib
drush @lbd en -y labdoo_lib lbd_communicate lbd_actions lbd_dootrip

# # install smtp
# $cwd/gmailsmtp.sh

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

# Enable Labdoo teams features (needed by lbd_roles)
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

# Add sample nodes (disabled this when building for production)
drush @lbd $enOrDis -y lbd_sample_nodes

# Rebuild permissions again after all labdoo content types have been created
#drush @lbd php-eval 'node_access_rebuild();'

# Tunings for mysql and php
sed -i "s|^max_allowed_packet.*=.*|max_allowed_packet = 64M|g" /etc/mysql/my.cnf
sed -i "s|^memory_limit.*=.*|memory_limit = 400M|g" /etc/php5/apache2/php.ini

# Copy files over to /var/www/lbd/sites/default/files and run lec to generate wiki content
cp -r $rootpath/profiles/labdoo/content/files/* $rootpath/sites/default/files/
chown -R www-data:www-data $rootpath/sites/default/files/ 
drush @lbd php-script $rootpath/profiles/labdoo/lec/lec-import-books.php

# Apply Drupal wall patch, copy themed icons, and enable the module 
# Note: the patch was generated using 'diff -crB ./drupal_wall.orig ./drupal_wall > drupal_wall_lbd.patch'
cd $rootpath/profiles/labdoo/modules/contrib/drupal_wall && patch -p2 < $rootpath/profiles/labdoo/install/patches/drupal_wall_lbd.patch
cp $rootpath/profiles/labdoo/files/pictures/likes-icon.png $rootpath/profiles/labdoo/modules/contrib/drupal_wall/images/ 
cp $rootpath/profiles/labdoo/files/pictures/picture-default.png $rootpath/profiles/labdoo/modules/contrib/drupal_wall/images/
drush @lbd $enOrDis -y flag drupal_wall
drush @lbd $enOrDis -y lbd_wall

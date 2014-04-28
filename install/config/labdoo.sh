#!/bin/bash
### Configure the Labdoo modules

# Parameter must be either "en" or "dis"
enOrDis=$1

$(dirname $0)/mysqld.sh start
drush @lbd $enOrDis -y labdoo_lib lbd_content_types labdoo_objects lbd_communicate\
                       lbd_visualize lbd_blocks 

# Some sample nodes for development
#drush @lbd $enOrDis -y lbd_sample_doojects lbd_sample_edoovillages lbd_sample_hub 

# FIXME: somehow this lib needs a reinstall (so that the nodes created by labdoo_lib.install are correct) 
drush @lbd dis -y labdoo_lib
drush @lbd en -y labdoo_lib

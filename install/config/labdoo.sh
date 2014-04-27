#!/bin/bash
### Configure the Labdoo modules

# Parameter must be either "en" or "dis"
enOrDis=$1

$(dirname $0)/mysqld.sh start
drush @lbd $enOrDis -y labdoo_lib lbd_content_types labdoo_objects lbd_communicate\
                       lbd_visualize # lbd_sample_doojects lbd_sample_edoovillages lbd_sample_hubs 

# FIXME: somehow this lib needs a reinstall (so that the nodes created by .install are correct) 
drush @lbd dis labdoo_lib
drush @lbd en labdoo_lib

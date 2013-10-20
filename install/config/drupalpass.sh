#!/bin/bash
### Set the admin password of Drupal.

echo "
===> Please enter new password for the Drupal 'admin' account.
"
stty -echo
read -p "Enter the password: " passwd
stty echo
echo

$(dirname $0)/mysqld.sh start
drush user-password admin --password="$passwd"

### drush may create css/js files with wrong(root) permissions
rm -rf /var/www/labdoo/sites/default/files/css/
rm -rf /var/www/labdoo/sites/default/files/js/

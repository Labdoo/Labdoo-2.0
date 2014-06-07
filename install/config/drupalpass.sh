#!/bin/bash
### Set the admin password and email address of Drupal.

echo "
===> Please enter the email address of the 'admin' user account in Drupal"

MAIL='contact@labdoo.org'
read -p "Enter the email address [$MAIL]: " input
MAIL=${input:-$MAIL}

echo "
===> Please enter new password for the 'admin' user account in Drupal.
"
stty -echo
read -p "Enter the password: " passwd
stty echo
echo

$(dirname $0)/mysqld.sh start
drush @lbd user-password admin --password="$passwd"
drush sqlq "update users set mail='$MAIL' where uid=1"

### drush may create css/js files with wrong(root) permissions
rm -rf /var/www/lbd/sites/default/files/css/
rm -rf /var/www/lbd/sites/default/files/js/

#!/bin/bash
### Set the admin password of Drupal.

### get a password for the Drupal user 'admin'
if [ -z "${lbd_admin_passwd+xxx}" -o "$lbd_admin_passwd" = '' ]
then
    base_url=$(drush @lbd eval 'print $GLOBALS["base_url"]')
    echo
    echo "===> Password for Drupal 'admin' on $base_url."
    echo
    stty -echo
    read -p "Enter the password: " lbd_admin_passwd
    stty echo
    echo
fi

### set the password
$(dirname $0)/mysqld.sh start
drush @lbd user-password admin --password="$lbd_admin_passwd"

### drush may create css/js files with wrong(root) permissions
chown www-data: -R /var/www/lbd*/sites/default/files/{css,js}

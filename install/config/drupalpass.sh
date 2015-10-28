#!/bin/bash
### Set the admin password of Drupal.

### get a password for the Drupal user 'admin'
if [ -z "${admin_passwd+xxx}" -o "$admin_passwd" = '' ]
then
    base_url=$(drush @lbd eval 'print $GLOBALS["base_url"]')
    echo
    echo "===> Password for Drupal 'admin' on $base_url."
    echo
    stty -echo
    read -p "Enter the password: " admin_passwd
    stty echo
    echo
fi

### set the password
drush @lbd user-password admin --password="$admin_passwd"

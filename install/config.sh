#!/bin/bash -x

### get config settings from a file
if [ "$1" != '' ]
then
    settings=$1
    set -a
    source  $settings
    set +a
fi

lbd=/usr/local/src/labdoo/install

test -d /var/www/lbd_dev && $lbd/../dev/clone_rm.sh lbd_dev

$lbd/config/domain.sh
$lbd/config/mysql_passwords.sh
$lbd/config/mysql_labdoo.sh
$lbd/config/gmailsmtp.sh
$lbd/config/labdoo.sh en
$lbd/config/drupalpass.sh
$lbd/config/ssh_keys.sh

if [ "$development" = 'true' ]
then
    $lbd/../dev/make-dev-clone.sh
fi

### drush may create some files with wrong permissions, fix them
$lbd/config/fix_file_permissions.sh

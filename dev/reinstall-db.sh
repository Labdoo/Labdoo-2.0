#!/bin/bash
### Reinstall the Drupal profile 'labdoo' and its features.
### This script touches only the database of Drupal (labdoo)
### and nothing else. Useful for testing the features.
###
### Usually, when features are un-installed, things are not undone
### properly. To leave out a feature, it should not be installed
### since the beginning. So, it is important to test them.

### start mysqld manually, if it is not running
if test -z "$(ps ax | grep [m]ysqld)"
then
    nohup mysqld --user mysql >/dev/null 2>/dev/null &
    sleep 5  # give time mysqld to start
fi

### go to the directory given as argument
test $1 && cd $1

### settings for the database and the drupal site
drupal_dir=$(drush drupal-directory)
db_name=$(drush sql-connect | tr ' ' "\n" | grep -e '--database=' | cut -d= -f2)
db_user=$(drush sql-connect | tr ' ' "\n" | grep -e '--user=' | cut -d= -f2)
db_pass=$(drush sql-connect | tr ' ' "\n" | grep -e '--password=' | cut -d= -f2)
site_name="Labdoo"
site_mail="admin@example.org"
account_name=admin
account_pass=admin
account_mail="admin@example.org"

### create the database and user
mysql='mysql --defaults-file=/etc/mysql/debian.cnf'
$mysql -e "
    DROP DATABASE IF EXISTS $db_name;
    CREATE DATABASE $db_name;
    GRANT ALL ON $db_name.* TO $db_user@localhost IDENTIFIED BY '$db_pass';
"

### start site installation
sed -e '/memory_limit/ c memory_limit = -1' -i /etc/php5/cli/php.ini
cd $drupal_dir
rm sites/default/settings.php
drush site-install --verbose --yes labdoo \
      --db-url="mysql://$db_user:$db_pass@localhost/$db_name" \
      --site-name="$site_name" --site-mail="$site_mail" \
      --account-name="$account_name" --account-pass="$account_pass" --account-mail="$account_mail"

### disable module comment
drush --yes pm-disable comment

### import test books
profiles/labdoo/test/import-docs.sh

### install features modules
drush --yes pm-enable lbd_layout
drush --yes features-revert lbd_layout

#drush --yes pm-enable lbd_misc
#drush --yes features-revert lbd_misc

#drush --yes pm-enable lbd_disqus
#drush --yes pm-enable lbd_content
#drush --yes pm-enable lbd_sharethis

#drush --yes pm-enable lbd_captcha
#drush --yes features-revert lbd_captcha
#drush vset recaptcha_private_key 6LenROISAAAAAM-bbCjtdRMbNN02w368ScK3ShK0
#drush vset recaptcha_public_key 6LenROISAAAAAH9roYsyHLzGaDQr76lhDZcm92gG

#drush --yes pm-enable lbd_invite
#drush --yes pm-enable lbd_permissions

#drush --yes pm-enable lbd_simplenews
#drush --yes pm-enable lbd_mass_contact
#drush --yes pm-enable lbd_googleanalytics
#drush --yes pm-enable lbd_drupalchat
#drush --yes pm-enable lbd_janrain

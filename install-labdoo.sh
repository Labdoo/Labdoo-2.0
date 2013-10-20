#!/bin/bash -x
### Install the Drupal profile 'labdoo'.

### retrieve all the projects/modules and build the application directory
#makefile="https://raw.github.com/dashohoxha/Labdoo/master/build-labdoo.make"
makefile="/var/www/Labdoo/build-labdoo.make"
appdir="/var/www/labdoo"
rm -rf $appdir
drush make --prepare-install --force-complete \
           --contrib-destination=profiles/labdoo \
           $makefile $appdir
cp -a $appdir/profiles/labdoo/{libraries/bootstrap,themes/contrib/bootstrap/}

### settings for the database and the drupal site
db_name=labdoo
db_user=labdoo
db_pass=labdoo
site_name="Labdoo"
site_mail="admin@example.com"
account_name=admin
account_pass=admin
account_mail="admin@example.com"

### create the database and user
mysql='mysql --defaults-file=/etc/mysql/debian.cnf'
$mysql -e "
    DROP DATABASE IF EXISTS $db_name;
    CREATE DATABASE $db_name;
    GRANT ALL ON $db_name.* TO $db_user@localhost IDENTIFIED BY '$db_pass';
"

### start site installation
sed -e '/memory_limit/ c memory_limit = -1' -i /etc/php5/cli/php.ini
cd $appdir
drush site-install --verbose --yes labdoo \
      --db-url="mysql://$db_user:$db_pass@localhost/$db_name" \
      --site-name="$site_name" --site-mail="$site_mail" \
      --account-name="$account_name" --account-pass="$account_pass" --account-mail="$account_mail"

### update to the latest version of core and modules
drush --yes pm-update

### set propper directory permissions
mkdir -p sites/default/files/
chown -R www-data: sites/default/files/
mkdir -p cache/
chown -R www-data: cache/

# protect Drupal settings from prying eyes
drupal_settings=$appdir/sites/default/settings.php
chown root:www-data $drupal_settings
chmod 640 $drupal_settings

### clone labdoo from git
cd $appdir/profiles/
mv labdoo labdoo-bak
#git clone https://github.com/dashohoxha/Labdoo labdoo
git clone /var/www/Labdoo -b dev labdoo

### copy contrib libraries and modules
cp -a labdoo-bak/libraries/ labdoo/
cp -a labdoo-bak/modules/contrib/ labdoo/modules/
cp -a labdoo-bak/modules/libraries/ labdoo/modules/
cp -a labdoo-bak/themes/contrib/ labdoo/themes/

### cleanup
rm -rf labdoo-bak/


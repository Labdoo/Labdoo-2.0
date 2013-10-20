#!/bin/bash -x

### retrieve all the projects/modules and build the application directory
makefile="https://raw.github.com/dashohoxha/Labdoo/master/build-labdoo.make"
appdir="/var/www/labdoo"
rm -rf $appdir
drush make --prepare-install --force-complete \
           --contrib-destination=profiles/labdoo \
           $makefile $appdir
cp -a $appdir/profiles/labdoo/{libraries/bootstrap,themes/contrib/bootstrap/}

### start mysqld manually, if it is not running
if test -z "$(ps ax | grep [m]ysqld)"
then
    nohup mysqld --user mysql >/dev/null 2>/dev/null &
    sleep 5  # give time mysqld to start
fi

### settings for the database and the drupal site
db_name=labdoo
db_user=labdoo
db_pass=labdoo
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
cd $appdir
drush site-install --verbose --yes labdoo \
      --db-url="mysql://$db_user:$db_pass@localhost/$db_name" \
      --site-name="$site_name" --site-mail="$site_mail" \
      --account-name="$account_name" --account-pass="$account_pass" --account-mail="$account_mail"

### disable module comment
drush --yes pm-disable comment

### import test books
profiles/labdoo/test/import-docs.sh

### create the downloads dir
mkdir -p /var/www/downloads/
chown www-data /var/www/downloads/

### set propper directory permissions
mkdir -p sites/default/files/
chown -R www-data: sites/default/files/
mkdir -p cache/
chown -R www-data: cache/

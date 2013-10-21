#!/bin/bash
### set password for the mysql user lbd

cwd=$(dirname $0)
. $cwd/set_mysql_passwd.sh

$cwd/mysqld.sh start

echo "
===> MySQL Password of Drupal Database

Please enter new password for the MySQL 'lbd' account.
"
random_passwd=$(mcookie | head -c 16)
stty -echo
read -p "Enter password [$random_passwd]: " passwd
stty echo
echo
drupal_passwd=${passwd:-$random_passwd}

### set password
set_mysql_passwd lbd $drupal_passwd

### modify the configuration file of Drupal (settings.php)
for file in $(ls /var/www/lbd*/sites/default/settings.php)
do
    sed -i $file \
	-e "/^\\\$databases = array/,+10  s/'password' => .*/'password' => '$drupal_passwd',/"
done

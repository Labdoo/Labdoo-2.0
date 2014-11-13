#!/bin/bash
### set password for the mysql user lbd

### make sure that mysqld is running
source $(dirname $0)/set_mysql_passwd.sh
$(dirname $0)/mysqld.sh start

### get a new password for the mysql user 'lbd'
if [ "$mysql_passwd_lbd" = 'random' ]
then
    mysql_passwd_lbd=$(mcookie | head -c 16)
elif [ -z "${mysql_passwd_lbd+xxx}" -o "$mysql_passwd_lbd" = '' ]
then
    echo
    echo "===> Please enter new password for the MySQL 'lbd' account. "
    echo
    mysql_passwd_lbd=$(mcookie | head -c 16)
    stty -echo
    read -p "Enter password [$mysql_passwd_lbd]: " passwd
    stty echo
    echo
    mysql_passwd_lbd=${passwd:-$mysql_passwd_lbd}
fi

### set password
set_mysql_passwd lbd $mysql_passwd_lbd

### modify the configuration file of Drupal (settings.php)
for file in $(ls /var/www/lbd*/sites/default/settings.php)
do
    sed -i $file \
	-e "/^\\\$databases = array/,+10  s/'password' => .*/'password' => '$mysql_passwd_lbd',/"
done

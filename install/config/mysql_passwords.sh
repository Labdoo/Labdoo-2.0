#!/bin/bash
### regenerate mysql and phpmyadmin secrets

cwd=$(dirname $0)
. $cwd/set_mysql_passwd.sh

$cwd/mysqld.sh start

### to remove the current password do: 
### mysqladmin -u root -pcurrent_password password

### regenerate the password of debian-sys-maint
PASSWD=$(mcookie | head -c 16)
mysql --defaults-file=/etc/mysql/debian.cnf -B \
    -e "SET PASSWORD FOR 'debian-sys-maint'@'localhost' = PASSWORD('$PASSWD');"
sed -i /etc/mysql/debian.cnf \
    -e "/^password/c password = $PASSWD"

# regenerate phpmyadmin pmadb password
PASSWD=$(mcookie)
sed -i /etc/phpmyadmin/config-db.php \
    -e "/^\$dbpass/ c \$dbpass='$PASSWD';"
set_mysql_passwd phpmyadmin $PASSWD

### set a new password for the root user of mysql
echo "
===> Set a new password for the 'root' user of MySQL
"
random_passwd=$(mcookie | head -c 10)
stty -echo
read -p "Enter root password [$random_passwd]: " passwd
stty echo
echo
root_passwd=${passwd:-$random_passwd}
set_mysql_passwd root $root_passwd


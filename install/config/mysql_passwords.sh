#!/bin/bash
### regenerate mysql and phpmyadmin secrets

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
source $(dirname $0)/set_mysql_passwd.sh
set_mysql_passwd phpmyadmin $PASSWD

### get a new password for the root user of mysql
if [ "$mysql_passwd_root" = 'random' ]
then
    mysql_passwd_root=$(mcookie | head -c 16)
elif [ -z "${mysql_passwd_root+xxx}" -o "$mysql_passwd_root" = '' ]
then
    echo
    echo "===> Set a new password for the 'root' user of MySQL"
    echo
    mysql_passwd_root=$(mcookie | head -c 16)
    stty -echo
    read -p "Enter password [$mysql_passwd_root]: " passwd
    stty echo
    echo
    mysql_passwd_root=${passwd:-$mysql_passwd_root}
fi

### set the password for the root user of mysql
set_mysql_passwd root $mysql_passwd_root

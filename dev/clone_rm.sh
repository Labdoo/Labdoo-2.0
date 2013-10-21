#!/bin/bash
### Erase a local clone created by clone.sh

if [ $# -ne 1 ]
then
    echo " * Usage: $0 variant

   Deletes the application with root /var/www/lbd_<variant>
   and with DB named lbd_<variant>
   <variant> is something like 'dev', 'test', '01', etc.
"
    exit 1
fi
var=$1
root_dir=/var/www/lbd_$var
db_name=lbd_$var

### remove the root directory
rm -rf $root_dir

### delete the drush alias
sed -i /etc/drush/local.aliases.drushrc.php \
    -e "/^\\\$aliases\['$var'\] = /,+5 d"

### drop the database
mysql --defaults-file=/etc/mysql/debian.cnf \
      -e "DROP DATABASE IF EXISTS $db_name;"

### remove the configuration of nginx
rm -f /etc/nginx/sites-{available,enabled}/$var

### remove the configuration of apache2
rm -f /etc/apache2/sites-{available,enabled}/$var{,-ssl}

### restart services
#for SRV in php5-fpm memcached mysql nginx
for SRV in mysql apache2
do
    service $SRV restart
done

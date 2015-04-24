#!/bin/bash
### drush may create some css/js files with wrong permissions
### fix them

for dir in /var/www/bcl*/sites/default/files/{css,js}
do
    chown www-data: -R $dir
done
exit 0  # it is ok even if something above failed

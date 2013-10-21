#!/bin/bash
### Clone the dev branch from
### /var/www/lbd_dev/profiles/labdoo/

### create a symlink /var/www/lbd to the git repo
cd /var/www/
test -h Labdoo || ln -s lbd_dev/profiles/labdoo/ Labdoo

### on the repo create a 'dev' branch
cd Labdoo/
git branch dev master

### clone the dev branch
cd /var/www/lbd/profiles/
rm -rf labdoo-bak
mv labdoo labdoo-bak
git clone -b dev /var/www/Labdoo labdoo

### copy contrib libraries and modules
cp -a labdoo-bak/libraries/ labdoo/
cp -a labdoo-bak/modules/contrib/ labdoo/modules/
cp -a labdoo-bak/modules/libraries/ labdoo/modules/
cp -a labdoo-bak/themes/contrib/ labdoo/themes/

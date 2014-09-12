#!/bin/bash
### Reinstall labdoo from scratch.
### Useful for testing installation scripts.

### get config settings from a file
if [ "$1" = '' ]
then
    echo "Usage: $0 settings.sh"
    exit 1
fi
settings=$1
set -a
source  $settings
set +a

### backup
rm -rf /var/www/lbd-bak
mv /var/www/{lbd,lbd-bak}

### reinstall
export drupal_dir=/var/www/lbd
export drush="drush --root=$drupal_dir"
export code_dir=/usr/local/src/labdoo
cd $code_dir/install/scripts/
./drupal-make-and-install.sh
./drupal-config.sh

### configure
$code_dir/install/config.sh

### restart mysql
supervisorctl restart mysql

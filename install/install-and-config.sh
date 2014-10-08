#!/bin/bash -x

### go to the directory of scripts
cd $code_dir/install/scripts/

### additional packages and software
./packages-and-software.sh

### make and install the drupal profile 'labdoo'
export drupal_dir=/var/www/lbd
export drush="drush --root=$drupal_dir"
./drupal-make-and-install.sh

### additional configurations related to drupal
./drupal-config.sh

### system level configuration (services etc.)
./system-config.sh

### labdoo configuration
$code_dir/install/config.sh

#!/bin/bash -x
### Install and config the system inside a docker container.

### get options and settings
set -a
source options.sh
set +a

### go to the directory of scripts
cd $code_dir/install/scripts/

### make and install the drupal profile
export DEBIAN_FRONTEND=noninteractive
export drupal_dir=/var/www/lbd
export drush="drush --root=$drupal_dir"
./drupal-make-and-install.sh

### additional configurations related to drupal
./drupal-config.sh

### system level configuration (services etc.)
./system-config.sh

### labdoo configuration
$code_dir/install/config.sh

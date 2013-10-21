#!/bin/bash
### Reinstall labdoo from scratch.
### Useful for testing installation scripts.

export drupal_dir=/var/www/lbd
export drush="drush --root=$drupal_dir"

mv $drupal_dir $drupal_dir-bak

cd $(dirname $0)
cd ../install/install-scripts/

./20-make-and-install-labdoo.sh
./30-git-clone-labdoo.sh
./40-configure-labdoo.sh

../config.sh


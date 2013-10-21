#!/bin/bash -x

export DEBIAN_FRONTEND=noninteractive

export drupal_dir=/var/www/lbd
export drush="drush --root=$drupal_dir"

cwd=$(dirname $0)

$cwd/10-install-additional-packages.sh
$cwd/20-make-and-install-labdoo.sh
$cwd/30-git-clone-labdoo.sh
$cwd/40-configure-labdoo.sh

### copy overlay files over to the system
cp -TdR $(dirname $cwd)/overlay/ /

$cwd/50-misc-config.sh

#!/bin/bash
### Reinstall labdoo from scratch.
### Useful for testing installation scripts.

mv /var/www/labdoo /var/www/labdoo-bak

cd $(dirname $0)
cd ../install/install-scripts/

./20-make-and-install-labdoo.sh
./30-git-clone-labdoo.sh
./40-configure-labdoo.sh

../config.sh


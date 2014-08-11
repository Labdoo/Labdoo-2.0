#!/bin/bash -x

### make a clone of /var/www/lbd to /var/www/lbd_dev
/var/www/code/labdoo/dev/clone.sh lbd lbd_dev

### add a test user
drush @lbd_dev user-create user1 --password=pass1 \
      --mail='user1@example.org' > /dev/null 2>&1

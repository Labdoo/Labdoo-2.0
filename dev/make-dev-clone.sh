#!/bin/bash -x

code_dir="${code_dir:-/usr/local/src/labdoo}"

### make a clone of /var/www/lbd to /var/www/lbd_dev
"${code_dir}/dev/clone.sh" lbd lbd_dev

### add a test user
drush @lbd_dev user-create user1 --password=pass1 \
      --mail='user1@example.org' > /dev/null 2>&1

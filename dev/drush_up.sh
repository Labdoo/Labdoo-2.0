#!/bin/bash
### Update all projects at once.

projects="
    /var/www/lbd*/profiles/labdoo
"
for project in $projects
do
    echo
    echo "===> $project"
    cd $project
    drush vset update_check_disabled 1 -y
    drush pm-refresh
    drush up -y
done

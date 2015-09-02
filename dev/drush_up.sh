#!/bin/bash
### Update all projects at once.

for dir in /var/www/lbd*/profiles/labdoo
do
    echo
    echo "===> $dir"
    cd $dir
    drush vset update_check_disabled 1 -y
    drush pm-refresh
    drush up -y

    ### prevent robots from crawling some paths
    sed -i $dir/robots.txt \
        -e '/# Labdoo/,$ d'
    cat <<EOF >> $dir/robots.txt
# Labdoo
Disallow: /translations/
Disallow: /?q=translations/
EOF

done

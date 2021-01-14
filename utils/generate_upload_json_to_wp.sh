#!/bin/bash

destination_host="wp.labdoo.org"
destination_user=wpsyncjson
destination_user_key_location=./wpsyncjson.pem
file_origin=/var/www/lbd/data.json
file_destination=/home/wpsyncjson/data.json
/usr/bin/drush --root=/var/www/lbd/ php-eval "labdoo_macro_stats_to_json();"

scp -i $destination_user_key_location $file_origin $destination_user@$destination_host:$file_destination


# Of course in the destination folder it will have to be linked the relevant expected file, to the generated one
####REMEMBER TO DO IN WP MACHINEln  -s  /home/wpsyncjson/data.json  /var/www/html/wp.labdoo.org/wp-content/themes/rttheme17/data.json


# This script is expected to be crontabed in the labdoo drupal engine

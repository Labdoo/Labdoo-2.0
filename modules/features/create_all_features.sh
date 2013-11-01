#!/bin/bash

cd $(dirname $0)

drush='drush @dev'
export_feature="$drush features-export --destination=profiles/labdoo/modules/features"

#feature_list="layout laptop hub village"
feature_list="laptop"
for feature in $feature_list
do
    echo "==> Exporting feature: $feature "
    $export_feature btr_$feature $(cat components/$feature)
done

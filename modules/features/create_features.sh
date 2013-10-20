#!/bin/bash
### Create all the features.
### However some features need manual customization
### after being created (for example lbd_layout).

drush="drush --yes"
destination="profiles/labdoo/modules/features"

function create_feature
{
    components=$1
    feature_name="lbd_$(basename $components)"

    xargs --delimiter=$'\n' --arg-file=$components \
        $drush features-export --destination=$destination $feature_name
}

### go to the directory of the script
cd $(dirname $0)

### clear cache etc.
$drush cc all
rm -f components/*~

### create a feature for each file in 'components/'
for components in $(ls components/*)
do
    echo "===> $components"
    create_feature $components
done

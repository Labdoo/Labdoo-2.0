#!/bin/bash
### export a feature

### go to the directory of the features
cd $(dirname $0)

### get the feature to be exported
if [ "$1" = '' ]
then
    echo
    echo "Usage: $0 <feature>"
    echo
    echo "where <feature> is one of these:"
    ls components/
    exit 1
fi
feature=$1

### export the feature
drush features-export \
      --destination=profiles/labdoo/modules/features \
      lbd_$feature $(cat components/$feature)

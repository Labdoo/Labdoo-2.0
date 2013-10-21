#!/bin/bash -x
### Replace the profile labdoo with a version
### that is cloned from github, so that any updates
### can be retrieved easily (without having to
### reinstall the whole application).

### clone labdoo from github
cd $drupal_dir/profiles/
mv labdoo labdoo-bak
git clone https://github.com/dashohoxha/Labdoo labdoo

### copy contrib libraries and modules
cp -a labdoo-bak/libraries/ labdoo/
cp -a labdoo-bak/modules/contrib/ labdoo/modules/
cp -a labdoo-bak/themes/contrib/ labdoo/themes/

### cleanup
rm -rf labdoo-bak/
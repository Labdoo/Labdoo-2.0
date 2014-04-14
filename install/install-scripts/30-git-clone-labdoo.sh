#!/bin/bash -x
### Replace the profile labdoo with a version
### that is cloned from github, so that any updates
### can be retrieved easily (without having to
### reinstall the whole application).

### clone labdoo from github
cd $drupal_dir/profiles/
mv labdoo labdoo-bak
git clone https://github.com/Labdoo/Labdoo-2.0 labdoo
pushd labdoo
git checkout $labdoo_branch
current_revision=`git rev-parse HEAD`
if [ "$labdoo_revision" != "$current_revision" ]; then
  git checkout $labdoo_revision
  echo "Please notice that you are now on a dettached head"
else
  echo "You are on a branch HEAD"
fi
popd

### copy contrib libraries and modules
cp -a labdoo-bak/libraries/ labdoo/
cp -a labdoo-bak/modules/contrib/ labdoo/modules/
cp -a labdoo-bak/themes/contrib/ labdoo/themes/

### cleanup
rm -rf labdoo-bak/

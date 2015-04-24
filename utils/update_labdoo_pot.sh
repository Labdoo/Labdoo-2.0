#/bin/bash
### Extract translatable strings of labdoo
### and update the file 'labdoo.pot'.
###
### Run it on a copy of labdoo that is just
### cloned from git, don't run it on an installed
### copy of labdoo, otherwise 'potx-cli.php'
### will scan also the other modules that are on
### the directory 'modules/'.

### go to the labdoo directory
cd $(dirname $0)
cd ..

### extract translatable strings
utils/potx-cli.php

### concatenate files 'general.pot' and 'installer.pot' into 'labdoo.pot'
msgcat --output-file=labdoo.pot general.pot installer.pot
rm -f general.pot installer.pot
mv -f labdoo.pot l10n/

### merge/update with previous translations
for po_file in $(ls l10n/labdoo.*.po)
do
    msgmerge --update --previous $po_file l10n/labdoo.pot
done


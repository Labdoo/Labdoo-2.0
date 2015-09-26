#!/bin/bash
### Although the test script backups and restores the DB, it is better
### to run it only on a test installation of Labdoo.
### The output of the tests will be stored on the directory 'tests/'
### under the root drupal directory.
###
### It can be called like this:
###     utils/run-tests.sh
### or like this:
###     utils/run-tests.sh stdout

### the URL where the application being tested can be accessed
URL="https://tst.labdoo.org/"

### if a parameter is given, then the output will be dumped on the screen
### otherwise it will be saved on a file on directory 'tests/'
stdout=$1

### enable the module simpletest (in case it is not enabled)
drush --yes pm-enable simpletest simpletest_clone
drush cache-clear all

### go to the drupal directory
cd $(dirname $0)
drupal_dir=$(drush drupal-directory)
cd $drupal_dir

### filenames for backup and output
timestamp=$(date +%s)
dump_file="tests/backup_$timestamp.sql"
output_file="tests/output_$timestamp.txt"
mkdir -p tests/

### make a backup of the database
dbname=${LBD:-lbd}
mysqldump="mysqldump --defaults-file=/etc/mysql/debian.cnf --database=$dbname"
$mysqldump --opt > $dump_file

### clean-up any remainings from the previous tests
php scripts/run-tests.sh --clean

### run the test scripts
if [ "$stdout" != '' ]
then
    php scripts/run-tests.sh --url "$URL" --verbose --color labdoo
else
    php scripts/run-tests.sh --url "$URL" --verbose labdoo > $output_file
    echo
    echo " - Results stored on the file: "
    echo "     $drupal_dir/$output_file"
    echo
fi

### restore the database
mysql=$(drush sql-connect)
$mysql < $dump_file

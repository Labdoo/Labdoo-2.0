#!/bin/bash -x
### Make a backup of the current state of the
### application (filesystem, database, etc.)
### Restore a previous backup/snapshot.
###
### Can be useful when trying new things on Drupal
### that can possibly break the application.
### Sometimes this can be better/faster than installing
### the application from scratch.

function usage {
    echo "
 * Usage: $(basename $0) [@drush_alias] [ make | restore --file=snapshot_file.tgz ]

   Make a backup of the current state of the
   application (filesystem, database, etc.)
   Restore a previous backup/snapshot.

   Can be useful when trying new things on Drupal
   that can possibly break the application.
   Sometimes this can be better/faster than installing
   the application from scratch.
"
    exit 0
}

### get the options
for opt in "$@"
do
    case $opt in
        @*)         drush_alias="$opt" ;;
        --file=*)   file=${opt#*=} ;;
        *)          action="$opt" ;;
    esac
done

drush="drush $drush_alias"
drupal_dir=$($drush drupal-directory)

case $action in
    make)
        # create the snapshot dir
        snapshot="snapshot-$(basename $drupal_dir)-$(date +%Y%m%d)"
        rm -rf $snapshot
        rm -f $snapshot.tgz
        mkdir $snapshot

        # clear all drupal cache
        $drush cache-clear all

        # copy to the snapshot dir the files and the database dump
        cp -a $drupal_dir $snapshot/
        $drush sql-dump --ordered-dump \
               --result-file=$(pwd)/$snapshot/database.sql

        # create an archive
        tar cfz $snapshot.tgz $snapshot
        rm -rf $snapshot/
        ;;

    restore)
        # check the validity of the file
        test "$file" = '' && usage
        test -f $file || usage

        # extract the archive
        tar xfz $file
        snapshot=${file%.tgz}

        # restore the database
        $drush sql-drop --yes
        $drush sql-query --file=$(pwd)/$snapshot/database.sql

        # restore drupal files
        # however make sure that the files
        # that are managed by git are not replaced

        umount $drupal_dir/cache
        mv $drupal_dir $drupal_dir-del
        mv $snapshot/lbd* $drupal_dir
        mount -a

        profile_dir=$drupal_dir/profiles/labdoo
        mv $profile_dir $profile_dir-old
        cp -a $drupal_dir-del/profiles/labdoo $profile_dir

        for subdir in libraries modules/contrib themes/contrib
        do
            rm -rf $profile_dir/$subdir
            cp -a $profile_dir-old/$subdir $profile_dir/$subdir
        done

        # clean up
        rm -rf $snapshot
        rm -rf $drupal_dir-del
        rm -rf $profile_dir-old
        ;;

    *)
        usage
        ;;
esac

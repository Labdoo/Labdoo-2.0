#!/bin/bash -x
### Switch between apache2 and (nginx + php5-fpm + memcached).

case $1 in
    apache2 )
        /etc/init.d/nginx stop
        /etc/init.d/php5-fpm stop

        drush @local_lbd -y dis memcache
        /etc/init.d/memcached stop
        for file in $(ls /var/www/lbd*/sites/default/settings.php)
        do
            sed -i $file -e "/comment memcache config/ d"
            sed -i $file \
                -e "/Adds memcache as a cache backend/a /* comment memcache config" \
                -e "/'memcache_key_prefix'/a comment memcache config */"
        done

        update-rc.d nginx disable
        update-rc.d php5-fpm disable
        update-rc.d memcached disable

        update-rc.d apache2 enable
        /etc/init.d/apache2 start
        ;;

    nginx )
        /etc/init.d/apache2 stop

        update-rc.d apache2 disable
        update-rc.d nginx enable
        update-rc.d php5-fpm enable
        update-rc.d memcached enable

        for file in $(ls /var/www/lbd*/sites/default/settings.php)
        do
            sed -i $file -e "/comment memcache config/ d"
        done
        /etc/init.d/memcached start
        drush @local_lbd -y en memcache

        /etc/init.d/php5-fpm start
        /etc/init.d/nginx start
        ;;
    *)
        echo " * Usage: $0 {apache2 | nginx}"
        ;;
esac

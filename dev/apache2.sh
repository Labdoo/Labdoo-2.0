#!/bin/bash
### Switch between apache2 and (nginx + php5-fpm + memcached).

case $1 in
    en | enable )
        supervisorctl stop nginx
        supervisorctl stop php5-fpm

        drush @local_lbd -y dis memcache
        supervisorctl stop memcached
        for file in $(ls /var/www/lbd*/sites/default/settings.php)
        do
            sed -i $file -e "/comment memcache config/ d"
            sed -i $file \
                -e "/Adds memcache as a cache backend/a /* comment memcache config" \
                -e "/'memcache_key_prefix'/a comment memcache config */"
        done

        mv /etc/supervisor/conf.d/nginx.conf{,.disabled}
        mv /etc/supervisor/conf.d/php5-fpm.conf{,.disabled}
        mv /etc/supervisor/conf.d/memcached.conf{,.disabled}
        mv /etc/supervisor/conf.d/apache2.conf{.disabled,}
        supervisorctl reload

        supervisorctl start apache2
        ;;

    dis | disable )
        supervisorctl stop apache2

        mv /etc/supervisor/conf.d/apache2.conf{,.disabled}
        mv /etc/supervisor/conf.d/nginx.conf{.disabled,}
        mv /etc/supervisor/conf.d/php5-fpm.conf{.disabled,}
        mv /etc/supervisor/conf.d/memcached.conf{.disabled,}
        supervisorctl reload

        for file in $(ls /var/www/lbd*/sites/default/settings.php)
        do
            sed -i $file -e "/comment memcache config/ d"
        done
        supervisorctl start memcached
        drush @local_lbd -y en memcache

        supervisorctl start php5-fpm
        supervisorctl start nginx
        ;;
    *)
        echo " * Usage: $0 {enable | disable}"
        ;;
esac

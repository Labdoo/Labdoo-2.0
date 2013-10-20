#!/bin/bash
### Sometimes it may be more suitable for the development
### to use Apache2 instead of NGINX etc.

case $1 in
    start)
	service nginx stop
	service php5-fpm stop

	drush @local -y dis memcache
	service memcached stop
	for file in $(ls /var/www/labdoo*/sites/default/settings.php)
	do
	    sed -i $file -e "/comment memcache config/ d"
	    sed -i $file \
		-e "/Adds memcache as a cache backend/a /* comment memcache config" \
		-e "/'memcache_key_prefix'/a comment memcache config */"
	done

	service apache2 start
	;;

    stop)
	service apache2 stop

	for file in $(ls /var/www/labdoo*/sites/default/settings.php)
	do
	    sed -i $file -e "/comment memcache config/ d"
	done
	service memcached start
	drush @local -y en memcache

	service php5-fpm start
	service nginx start
	;;
    *)
	echo " * Usage: $0 {start|stop}"
	;;
esac

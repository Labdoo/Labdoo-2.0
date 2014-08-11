#!/bin/bash
### Sometimes it may be more suitable for the development
### to use Apache2 instead of NGINX etc.

case $1 in
    start)
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

	/etc/init.d/apache2 start
	;;

    stop)
	/etc/init.d/apache2 stop

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
	echo " * Usage: $0 {start|stop}"
	;;
esac

#!/bin/bash

echo "
===> Set the domain name (fqdn)

This is the domain that you have (or plan to get)
for the labdoo.

It will modify the files:
 1) /etc/hostname
 2) /etc/hosts
 3) /etc/nginx/sites-available/lbd*
 4) /etc/apache2/sites-available/lbd*
 5) /var/www/lbd*/sites/default/settings.php
"

### get the current domain
old_domain=$(head -n 1 /etc/hosts.conf | cut -d' ' -f2)
old_domain=${old_domain:-example.org}

### get the new domain
if [ -z "${domain+xxx}" -o "$domain" = '' ]
then
    read -p "Enter the domain name for labdoo [$old_domain]: " input
    domain=${input:-$old_domain}
fi

### update /etc/hostname and /etc/hosts
echo $domain > /etc/hostname
sed -i /etc/hosts.conf \
    -e "s/$old_domain/$domain/g"
/etc/hosts_update.sh

### update config files
for file in $(ls /etc/nginx/sites-available/lbd*)
do
    sed -i $file -e "/server_name/ s/$old_domain/$domain/"
done
for file in $(ls /etc/apache2/sites-available/lbd*)
do
    sed -i $file \
        -e "/ServerName/ s/$old_domain/$domain/" \
        -e "/RedirectPermanent/ s/$old_domain/$domain/"
done
for file in $(ls /var/www/lbd*/sites/default/settings.php)
do
    sed -i $file -e "/^\\\$base_url/ s/$old_domain/$domain/"
done

### update uri on drush aliases
sed -i /etc/drush/local_lbd.aliases.drushrc.php \
    -e "/'uri'/ s/$old_domain/$domain/"

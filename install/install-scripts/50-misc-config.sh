#!/bin/bash -x

### put the cache on RAM (to improve efficiency)
sed -i /etc/fstab \
    -e '/appended by installation scripts/,$ d'
cat <<EOF >> /etc/fstab
##### appended by installation scripts
tmpfs		/dev/shm	tmpfs	defaults,noexec,nosuid	0	0
tmpfs		/var/www/lbd/cache	tmpfs	defaults,size=5M,mode=0777,noexec,nosuid	0	0
devpts		/dev/pts	devpts	rw,noexec,nosuid,gid=5,mode=620		0	0
# mount /tmp on RAM for better performance
tmpfs /tmp tmpfs defaults,noatime,mode=1777,nosuid 0 0
EOF

### create other dirs that are needed
mkdir -p /var/run/memcached/
chown nobody /var/run/memcached/

### make the prompt colored and display the chroot name
sed -i /root/.bashrc \
    -e '/^#force_color_prompt=/c force_color_prompt=yes'
echo 'labdoo' > /etc/debian_chroot

### configure apache2
a2enmod ssl
a2ensite default-ssl
a2enmod headers rewrite
ln -sf /etc/phpmyadmin/apache.conf /etc/apache2/conf.d/phpmyadmin

sed -i /etc/php5/apache2/php.ini \
    -e "/^\[PHP\]/ a apc.rfc1867 = 1" \
    -e "/^display_errors/ c display_errors = On"

sed -i /etc/apache2/apache2.conf \
    -e "/^<IfModule mpm_prefork_module>/,+5 s/StartServers.*/StartServers 2/" \
    -e "/^<IfModule mpm_prefork_module>/,+5 s/MinSpareServers.*/MinSpareServers 2/" \
    -e "/^<IfModule mpm_prefork_module>/,+5 s/MaxSpareServers.*/MaxSpareServers 4/" \
    -e "/^<IfModule mpm_prefork_module>/,+5 s/MaxClients.*/MaxClients 50/"

### generates the file /etc/defaults/locale
update-locale

### replace nginx with apache2 (which is better for development)
dev_scripts="$drupal_dir/profiles/labdoo/dev"
$dev_scripts/apache2.sh start
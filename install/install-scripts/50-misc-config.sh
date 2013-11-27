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

### change the prompt to display the chroot name, the git branch etc
echo 'labdoo' > /etc/debian_chroot
sed -i /root/.bashrc \
    -e '/^# get the git branch/,+4 d'
cat <<EOF >> /root/.bashrc
# get the git branch (used in the prompt below)
function parse_git_branch {
    git branch --no-color 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/'
}
EOF
PS1='${debian_chroot:+($debian_chroot)}\\[\\033[01;32m\\]\\u@\\h\\[\\033[00m\\]:\\[\\033[01;34m\\]\\w\\[\\e[32m\\]$(parse_git_branch)\\[\\033[00m\\]\\$ '
sed -i /root/.bashrc \
    -e "/^if \[ \"\$color_prompt\" = yes \]/,+2 s/PS1=.*/PS1='$PS1'/"

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
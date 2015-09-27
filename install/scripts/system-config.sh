#!/bin/bash -x

### go to the script directory
cd $(dirname $0)

### copy overlay files over to the system
cp -TdR $code_dir/install/overlay/ /

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
echo $target > /etc/debian_chroot
sed -i /root/.bashrc \
    -e '/^#force_color_prompt=/c force_color_prompt=yes' \
    -e '/^# get the git branch/,+4 d'
cat <<EOF >> /root/.bashrc
# get the git branch (used in the prompt below)
function parse_git_branch {
    git branch --no-color 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/'
}
EOF
PS1='\\n\\[\\033[01;32m\\]${debian_chroot:+($debian_chroot)}\\[\\033[00m\\]\\u@\\h\\[\\033[00m\\]:\\[\\033[01;34m\\]\\w\\[\\e[32m\\]$(parse_git_branch)\\n==> \\$ \\[\\033[00m\\]'
sed -i /root/.bashrc \
    -e "/^if \[ \"\$color_prompt\" = yes \]/,+2 s/PS1=.*/PS1='$PS1'/"

### configure apache2
a2enmod ssl
a2dissite 000-default
a2ensite lbd lbd-ssl
a2enmod headers rewrite
ln -sf /etc/phpmyadmin/apache.conf /etc/apache2/conf-available/phpmyadmin.conf
a2enconf downloads phpmyadmin

sed -i /etc/php5/apache2/php.ini \
    -e '/^\[PHP\]/ a apc.rfc1867 = 1' \
    -e '/^display_errors/ c display_errors = On'

sed -i /etc/apache2/mods-available/mpm_prefork.conf \
    -e '/^<IfModule/,+5 s/StartServers.*/StartServers 2/' \
    -e '/^<IfModule/,+5 s/MinSpareServers.*/MinSpareServers 2/' \
    -e '/^<IfModule/,+5 s/MaxSpareServers.*/MaxSpareServers 4/' \
    -e '/^<IfModule/,+5 s/MaxRequestWorkers.*/MaxRequestWorkers 50/'

### modify the configuration of php5
cat <<EOF > /etc/php5/conf.d/apc.ini
extension=apc.so
apc.mmap_file_mask=/tmp/apc.XXXXXX
apc.shm_size=96M
EOF

sed -i /etc/php5/apache2/php.ini \
    -e '/^;\?memory_limit/ c memory_limit = 200M' \
    -e '/^;\?max_execution_time/ c max_execution_time = 90' \
    -e '/^;\?display_errors/ c display_errors = On' \
    -e '/^;\?post_max_size/ c post_max_size = 16M' \
    -e '/^;\?cgi\.fix_pathinfo/ c cgi.fix_pathinfo = 1' \
    -e '/^;\?upload_max_filesize/ c upload_max_filesize = 16M' \
    -e '/^;\?default_socket_timeout/ c default_socket_timeout = 90'

sed -i /etc/php5/fpm/php.ini \
    -e '/^;\?memory_limit/ c memory_limit = 200M' \
    -e '/^;\?max_execution_time/ c max_execution_time = 90' \
    -e '/^;\?display_errors/ c display_errors = On' \
    -e '/^;\?post_max_size/ c post_max_size = 16M' \
    -e '/^;\?cgi\.fix_pathinfo/ c cgi.fix_pathinfo = 1' \
    -e '/^;\?upload_max_filesize/ c upload_max_filesize = 16M' \
    -e '/^;\?default_socket_timeout/ c default_socket_timeout = 90'

sed -i /etc/php5/fpm/pool.d/www.conf \
    -e '/listen = 127.0.0.1:9000/ c listen = /run/php5-fpm.sock' \
    -e '/^;\?pm\.max_children/ c pm.max_children = 20' \
    -e '/^;\?pm\.max_requests/ c pm.max_requests = 5000' \
    -e '/^;\?php_flag\[display_errors/ c php_flag[display_errors] = on' \
    -e '/^;\?php_admin_value\[memory_limit/ c php_admin_value[memory_limit] = 128M'
echo 'php_admin_value[max_execution_time] = 90' >> /etc/php5/fpm/pool.d/www.conf

### generates the file /etc/defaults/locale
update-locale

### enable apache2 as a webserver
dev_scripts="$drupal_dir/profiles/labdoo/dev"
$dev_scripts/webserver.sh apache2

### customize the configuration of sshd
sed -i /etc/ssh/sshd_config \
    -e 's/^Port/#Port/' \
    -e 's/^PasswordAuthentication/#PasswordAuthentication/' \
    -e 's/^X11Forwarding/#X11Forwarding/'

sed -i /etc/ssh/sshd_config \
    -e '/^### custom config/,$ d'

sshd_port=${sshd_port:-2201}
cat <<EOF >> /etc/ssh/sshd_config
### custom config
Port $sshd_port
PasswordAuthentication no
X11Forwarding no
EOF

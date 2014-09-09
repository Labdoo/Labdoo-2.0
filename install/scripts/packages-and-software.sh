#!/bin/bash -x

### upgrade packages
apt-get update
apt-get -y upgrade

install='apt-get -y -o DPkg::Options::=--force-confdef -o DPkg::Options::=--force-confold install'

### install localization
$install language-pack-en
update-locale

### install other needed packages
$install aptitude tasksel vim nano psmisc cron supervisor
$install mysql-server ssmtp memcached php5-memcached \
        php5-mysql php5-gd php-db php5-dev php-pear php5-curl php-apc \
        make ssl-cert gawk unzip wget curl diffutils phpmyadmin git ruby
$install screen logwatch
initctl reload-configuration

### install hub: http://hub.github.com/
curl http://hub.github.com/standalone -sLo /bin/hub
chmod +x /bin/hub

### install twitter cli client
### see also: http://xmodulo.com/2013/12/access-twitter-command-line-linux.html
$install ruby-dev
gem install t

### phpmyadmin will install apache2 and start it
### so we should stop and disable it
/etc/init.d/apache2 stop
update-rc.d apache2 disable

### install nginx and php5-fpm
$install nginx nginx-common nginx-full php5-fpm

### There is some problem with php-pear in 14.04
### See: http://askubuntu.com/questions/451953/php-pear-is-not-working-after-upgrading-to-ubuntu-14-04
### and: https://bugs.launchpad.net/ubuntu/+source/php5/+bug/1310552
### I am using below a workaround described there.

# install uploadprogress bar (from PECL) (requested by Drupal 7)
pecl install uploadprogress

gunzip /build/buildd/php5-*/pear-build-download/uploadprogress-*
pear upgrade /build/buildd/php5-*/pear-build-download/uploadprogress-*

mkdir -p /etc/php5/conf.d/
echo "extension = uploadprogress.so" > /etc/php5/conf.d/uploadprogress.ini

### install drush
pear channel-discover pear.drush.org
pear install pear.drush.org/drush-6.2.0.0

gunzip /build/buildd/php5-*/pear-build-download/drush-*
pear upgrade /build/buildd/php5-*/pear-build-download/drush-*

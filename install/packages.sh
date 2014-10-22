#!/bin/bash -x

### upgrade packages
apt-get update
apt-get -y upgrade

### install other needed packages
apt-get -y install aptitude tasksel vim nano psmisc cron
apt-get -y install mysql-server ssmtp memcached php5-memcached \
        php5-mysql php5-gd php-db php5-dev php-pear php5-curl php-apc \
        make ssl-cert gawk unzip wget curl diffutils phpmyadmin git ruby
apt-get -y install screen logwatch

### install hub: http://hub.github.com/
curl http://hub.github.com/standalone -sLo /bin/hub
chmod +x /bin/hub

### install twitter cli client
### see also: http://xmodulo.com/2013/12/access-twitter-command-line-linux.html
apt-get -y install ruby-dev
gem install t
useradd --system --create-home twitter

### phpmyadmin will install apache2 and start it
### so we should stop it
/etc/init.d/apache2 stop

### install nginx and php5-fpm
apt-get -y install nginx nginx-common nginx-full php5-fpm
/etc/init.d/nginx stop
update-rc.d nginx disable
/etc/init.d/php5-fpm stop
update-rc.d php5-fpm disable

# install uploadprogress bar (from PECL) (requested by Drupal 7)
pecl install uploadprogress
mkdir -p /etc/php5/conf.d/
echo "extension = uploadprogress.so" > /etc/php5/conf.d/uploadprogress.ini

### install drush
pear channel-discover pear.drush.org
pear install -Z pear.drush.org/drush-6.2.0.0


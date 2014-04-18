#!/bin/bash 

### read GMAIL and PASSWD
echo "
===> Email and password of the gmail account

Emails from the server are sent through the SMTP
of a GMAIL account. Please enter the full email
of the gmail account, and the password.
"
GMAIL='MyEmailAddress@gmail.com'
read -p "Enter the gmail address [$GMAIL]: " input
GMAIL=${input:-$GMAIL}

stty -echo
read -p "Enter the gmail password: " PASSWD
stty echo
echo

### modify config files
sed -i /etc/ssmtp/ssmtp.conf \
    -e "/^root=/ c root=$GMAIL" \
    -e "/^AuthUser=/ c AuthUser=$GMAIL" \
    -e "/^AuthPass=/ c AuthPass=$PASSWD" \
    -e "/^rewriteDomain=/ c rewriteDomain=gmail.com" \
    -e "/^hostname=/ c hostname=$GMAIL"

sed -i /etc/ssmtp/revaliases \
    -e "/^root:/ c root:$GMAIL:smtp.gmail.com:587" \
    -e "/^admin:/ c admin:$GMAIL:smtp.gmail.com:587"

for file in $(ls /etc/apache2/sites-available/)
do
    sed -i /etc/apache2/sites-available/$file -e "s/ServerAdmin .*\$/ServerAdmin $GMAIL/"
    sed -i /etc/apache2/sites-available/$file -e "s/ServerAdmin .*\$/ServerAdmin $GMAIL/"
done

### modify drupal variables that are used for sending email
echo "Modifying drupal variables that are used for sending email..."
$(dirname $0)/mysqld.sh start

drush site-alias --local | grep "local" | while read -r line ; do 
  drush $line php-script $(dirname $0)/gmailsmtp.php "$GMAIL" "$PASSWD"
done

### drush may create css/js files with wrong(root) permissions
rm -rf /var/www/lbd/sites/default/files/css/
rm -rf /var/www/lbd/sites/default/files/js/

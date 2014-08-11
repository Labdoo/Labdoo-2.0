#!/bin/bash

### read gmail_account and gmail_passwd
echo "
===> Email and password of the gmail account

Emails from the server are sent through the SMTP
of a GMAIL account. Please enter the full email
of the gmail account, and the password.
"
if [ -z "${gmail_account+xxx}" -o "$gmail_account" = '' ]
then
    gmail_account='MyEmailAddress@gmail.com'
    read -p "Enter the gmail address [$gmail_account]: " input
    gmail_account=${input:-$gmail_account}
fi

if [ -z "${gmail_passwd+xxx}" -o "$gmail_passwd" = '' ]
then
    stty -echo
    read -p "Enter the gmail password: " gmail_passwd
    stty echo
    echo
fi

### modify config files
sed -i /etc/ssmtp/ssmtp.conf \
    -e "/^root=/ c root=$gmail_account" \
    -e "/^AuthUser=/ c AuthUser=$gmail_account" \
    -e "/^AuthPass=/ c AuthPass=$gmail_passwd" \
    -e "/^rewriteDomain=/ c rewriteDomain=gmail.com" \
    -e "/^hostname=/ c hostname=$gmail_account"

sed -i /etc/ssmtp/revaliases \
    -e "/^root:/ c root:$gmail_account:smtp.gmail.com:587" \
    -e "/^admin:/ c admin:$gmail_account:smtp.gmail.com:587"

for file in $(ls /etc/apache2/sites-available/*)
do
    sed -i $file -e "s/ServerAdmin .*\$/ServerAdmin $gmail_account/"
done

### modify drupal variables that are used for sending email
echo "Modifying drupal variables that are used for sending email..."
$(dirname $0)/mysqld.sh start
drush --yes @local_lbd php-script $(dirname $0)/gmailsmtp.php  \
    "$gmail_account" "$gmail_passwd"

### drush may create css/js files with wrong(root) permissions
chown www-data: -R /var/www/lbd*/sites/default/files/{css,js}

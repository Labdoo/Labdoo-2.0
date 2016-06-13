#!/bin/bash

domain=example.org
email=info@example.org

[[ $domain == example.org ]] && domain=$(head -n 1 /etc/hosts.conf | cut -d' ' -f2)
dry_run='--dry-run' ;  [[ $email != info@example.org ]] && dry_run=''

### install certbot
if [[ -n $(which certbot) ]]; then
    wget https://dl.eff.org/certbot-auto
    chmod +x certbot-auto
    mv certbot-auto /usr/local/bin/certboot
fi

### fix apache2 config
cat <<EOF > /etc/apache2/conf-available/letsencrypt.conf
Alias /.well-known/acme-challenge /var/www/.well-known/acme-challenge

<Directory /var/www/.well-known/acme-challenge>
    Options None
    AllowOverride None
    ForceType text/plain
</Directory>
EOF
mkdir -p /var/www/.well-known/acme-challenge/
a2enconf letsencrypt
/etc/init.d/apache2 reload

### get the ssl cert
certbot certonly --webroot -w /var/www \
    -d $domain -d dev.$domain -d test.$domain \
    -m $email --agree-tos $dry_run

[[ $dry_run == '--dry-run' ]] && exit 0

### update config files
for file in $(ls /etc/apache2/sites-available/lbd*)
do
    sed -i $file \
        -e "s#SSLCertificateFile .*#SSLCertificateFile      /etc/letsencrypt/live/$domain/cert.pem#" \
        -e "s#SSLCertificateKeyFile .*#SSLCertificateKeyFile   /etc/letsencrypt/live/$domain/privkey.pem#" \
        -e "s#SSLCertificateChainFile .*#SSLCertificateChainFile /etc/letsencrypt/live/$domain/chain.pem#"
done

### setup a cron job for renewing the cert
cat <<EOF > /etc/cron.weekly/renew-ssl-cert
!/bin/bash
certbot renew --webroot --quiet --post-hook='/etc/init.d/apache2 reload'
EOF
chmod +x /etc/cron.weekly/renew-ssl-cert

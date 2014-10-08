#!/bin/bash
### Update /etc/hosts with the entries in /etc/hosts.conf

sed -i /etc/hosts -e '/^### update/,$ d'
echo '### update' >> /etc/hosts
cat /etc/hosts.conf >> /etc/hosts

#!/bin/bash
### Update /etc/hosts with the entries in /etc/hosts.conf

sed /etc/hosts -e '/^### update/,$ d' > /etc/hosts.new
echo '### update' >> /etc/hosts.new
cat /etc/hosts.conf >> /etc/hosts.new
cat /etc/hosts.new > /etc/hosts
rm /etc/hosts.new

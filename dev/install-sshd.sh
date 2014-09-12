#!/bin/bash
### Install sshd in order to access the server remotely
### through drush, ssh-client, etc.

### install sshd
aptitude -y install ssh
mkdir -p /var/run/sshd/

### change the port to 2201
sed -i /etc/ssh/sshd_config -e '/^Port/c Port 2201'

### enable and start the service
mv /etc/supervisor/conf.d/sshd.conf{.disabled,}
supervisorctl reload
supervisorctl start sshd

### generate public/private keys
mkdir ~/.ssh
chmod 700 ~/.ssh
ssh-keygen -t rsa

### For more detailed instructions see:
### http://dashohoxha.blogspot.com/2012/08/how-to-secure-ubuntu-server.html


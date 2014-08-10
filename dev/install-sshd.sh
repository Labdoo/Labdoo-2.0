#!/bin/bash
### Install sshd in order to access the server remotely
### through drush, ssh-client, etc.

### install sshd
aptitude -y install ssh

### change the port to 2201
sed -i /etc/ssh/sshd_config -e '/^Port/c Port 2201'

### restart the service
/etc/init.d/ssh restart

### generate public/private keys
mkdir ~/.ssh
chmod 700 ~/.ssh
ssh-keygen -t rsa

### For more detailed instructions see:
### http://dashohoxha.blogspot.com/2012/08/how-to-secure-ubuntu-server.html


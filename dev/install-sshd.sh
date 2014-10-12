#!/bin/bash -x
### Install sshd in order to access the server remotely
### through drush, ssh-client, etc.

### install sshd
aptitude -y install ssh
mkdir -p /var/run/sshd/

### change the port
port=${1:-2201}
sed -i /etc/ssh/sshd_config -e "/^Port/c Port $port"
/etc/init.d/ssh restart

### generate public/private keys
mkdir ~/.ssh
chmod 700 ~/.ssh
ssh-keygen -t rsa -f ~/.ssh/id_rsa -q -N ''

### For more detailed instructions see:
### http://dashohoxha.blogspot.com/2012/08/how-to-secure-ubuntu-server.html


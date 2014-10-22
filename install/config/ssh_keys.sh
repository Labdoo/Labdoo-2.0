#!/bin/bash

### generate ssh public/private keys
mkdir -p ~/.ssh
chmod 700 ~/.ssh
rm -f ~/.ssh/id_rsa
ssh-keygen -t rsa -f ~/.ssh/id_rsa -q -N ''
mv ~/.ssh/{id_rsa.pub,authorized_keys}

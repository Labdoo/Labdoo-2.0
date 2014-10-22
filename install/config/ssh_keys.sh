#!/bin/bash

### generate ssh public/private keys
mkdir ~/.ssh
chmod 700 ~/.ssh
ssh-keygen -t rsa -f ~/.ssh/id_rsa -q -N ''
mv ~/.ssh/{id_rsa.pub,authorized_keys}

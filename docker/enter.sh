#!/bin/bash

cd $(dirname $0)
source ./config

#docker-enter $container
docker exec -it $container /bin/bash -c "export TERM=xterm; exec bash"

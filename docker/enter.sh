#!/bin/bash

### go to the docker directory
cd $(dirname $0)/../

### load the config file
if ! test -f config
then
    echo "File $(pwd)/config is missing."
    exit 1
fi
source ./config

### enter the shell of the container
docker exec -it $container env TERM=xterm bash

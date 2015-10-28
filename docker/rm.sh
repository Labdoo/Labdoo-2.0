#!/bin/bash -x

### go to the docker directory
cd $(dirname $0)/../

### load the config file
if ! test -f config
then
    echo "File $(pwd)/config is missing."
    exit 1
fi
source ./config

### remove the container
docker stop $container
docker rm $container
if [ "$dev" != 'true' ]
then
    docker rmi $image
fi

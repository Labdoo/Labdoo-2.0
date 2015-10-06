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


datestamp=$(date +%F)
image="$container:$datestamp"

docker rmi $image 2> /dev/null
rm nohup.out
nohup docker commit -p -m "Snapshot $image" $container $image &

echo "Saving $container to $image"
sleep 2

#!/bin/bash

cd $(dirname $0)
source ./config

datestamp=$(date +%F)
image="$container:$datestamp"
docker rmi $image 2> /dev/null
nohup docker commit -p -m "Snapshot $image" $container $image &

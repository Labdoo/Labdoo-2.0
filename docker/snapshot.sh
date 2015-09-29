#!/bin/bash

source ./config

datestamp=$(date +%F)
image="$container:$datestamp"

docker rmi $image 2> /dev/null
rm nohup.out
nohup docker commit -p -m "Snapshot $image" $container $image &

echo "Saving $container to $image"
sleep 2

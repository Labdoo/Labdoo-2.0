#!/bin/bash -x

source ./config

docker stop $container
docker rm $container
if [ "$dev" != 'true' ]
then
    docker rmi $image
fi

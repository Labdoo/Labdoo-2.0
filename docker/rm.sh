#!/bin/bash -x

cd $(dirname $0)
source ./config

docker stop $container
docker rm $container


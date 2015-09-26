#!/bin/bash -x

cd $(dirname $0)
source ./config

docker start $container


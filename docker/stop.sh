#!/bin/bash -x

docker_dir=$(dirname $0)
source $docker_dir/config

docker stop $container


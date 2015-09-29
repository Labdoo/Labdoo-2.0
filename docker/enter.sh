#!/bin/bash

docker_dir=$(dirname $0)
source $docker_dir/config

docker exec -it $container env TERM=xterm bash

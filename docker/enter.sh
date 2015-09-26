#!/bin/bash

cd $(dirname $0)
source ./config

docker exec -it $container env TERM=xterm bash

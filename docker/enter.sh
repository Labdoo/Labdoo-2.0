#!/bin/bash

source ./config

docker exec -it $container env TERM=xterm bash

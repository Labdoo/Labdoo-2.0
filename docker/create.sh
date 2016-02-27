#!/bin/bash -x

### go to the docker directory
cd $(dirname $0)/../

### load the config file
if ! test -f config
then
    echo "File $(pwd)/config is missing."
    exit 1
fi
source ./config

### stop and remove the container if it exists
docker stop $container 2>/dev/null
docker rm $container 2>/dev/null

### Remove the given directory if it exists.
function remove_dir() {
    local dir=$1
    if test -d $dir/
    then
        cd $dir/
        if test -n "$(git status --porcelain)"
        then
            echo "Directory $dir/ cannot be removed because it has uncommited changes."
            exit 1
        fi
        cd ..
        rm -rf $dir/
    fi
}

if [ "$dev" = 'false' ]
then
    ### create a container for production
    docker create --name=$container --hostname=$hostname --restart=always \
        -v $(pwd)/downloads:/var/www/downloads \
        $ports $image
else
    ### remove the directory labdoo/ if it exists
    remove_dir labdoo

    ### copy the directory labdoo/ from the image to the host
    docker create --name=$container $image
    docker start $container
    docker cp $container:/var/www/lbd/profiles/labdoo $(pwd)/
    docker stop $container
    docker rm $container

    ### create a container for development
    docker create --name=$container --hostname=$hostname \
        -v $(pwd)/labdoo:/var/www/lbd/profiles/labdoo \
        $ports $image
fi

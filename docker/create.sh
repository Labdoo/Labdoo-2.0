#!/bin/bash -x

source ./config

docker stop $container
docker rm $container

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
    docker create --name=$container --hostname=$hostname \
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

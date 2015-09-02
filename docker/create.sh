#!/bin/bash -x

cd $(dirname $0)
source ./config
ssh=${ssh:-2201}

docker stop $container
docker rm $container

if [ "$dev" = 'false' ]
then
    ### create a container for production
    docker create --name=$container --hostname=$hostname \
        -p 80:80 -p 443:443 -p $ssh:$ssh $image
else
    ### create a container for development
    docker create --name=$container $image
    docker start $container
    docker cp $container:/var/www/lbd/profiles/labdoo $(pwd)/
    docker stop $container
    docker rm $container

    let ssh1=ssh+1
    docker create --name=$container --hostname=$hostname \
        -v $(pwd)/labdoo:/var/www/lbd/profiles/labdoo \
        -p 81:80 -p 444:443 -p $ssh1:$ssh \
        $image
fi

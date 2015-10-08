#!/bin/bash -x
### Install the containers of wsproxy and labdoo.

### stop on error
set -e

### make directories for source code and workdir
srcdir=/opt/src
workdir= /opt/workdir
mkdir -p $srcdir $workdir

### make sure that the script is called with `nohup nice ...`
if [ "$1" != "--dont-fork" ]
then
    # this script should be called recursively by itself
    datestamp=$(date +%F | tr -d -)
    nohup_out=$workdir/nohup-labdoo-$datestamp.out
    rm -f $nohup_out
    nohup nice $0 --dont-fork $@ > $nohup_out &
    sleep 1
    tail -f $nohup_out
    exit
else
    # this script has been called by itself
    shift # remove the flag $1 that is used as a termination condition
fi

### get wsproxy
if test -d $srcdir/wsproxy
then
    cd $srcdir/wsproxy
    git pull
else
    cd $srcdir/
    git clone https://github.com/docker-build/wsproxy
fi

if ! test -d $srcdir/wsproxy
then
    ### create a link on workdir
    cd $workdir/
    ln -sf $srcdir/wsproxy .

    ### build and run wsproxy
    cd $workdir/
    wsproxy/rm.sh 2>/dev/null
    wsproxy/build.sh
    wsproxy/run.sh
fi

### get labdoo
if test -d $srcdir/labdoo
then
    cd $srcdir/labdoo
    git pull
else
    cd $srcdir/
    git clone --branch=bootstrap3 https://github.com/Labdoo/Labdoo labdoo
fi

### create a link on workdir
mkdir -p $workdir/lbd
cd $workdir/lbd/
ln -sf $srcdir/labdoo/docker .

### build the image
cd $workdir/
lbd/docker/build.sh --dont-fork $@

### create and start the container
sed -i lbd/config -e '/^ports=/ c ports='
lbd/docker/rm.sh 2>/dev/null
lbd/docker/create.sh
lbd/docker/start.sh

### set up the domain
source lbd/config
if test -n "$domains"
then
    wsproxy/domains-rm.sh $domains
    wsproxy/domains-add.sh $container $domains
    sed -i /etc/hosts -e "/^127\.0\.0\.1 $domains/d"
    echo "127.0.0.1 $domains" >> /etc/hosts
fi

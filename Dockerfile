### This file can be used to build a docker image like this:
###   `docker build --tag=labdoo .`

FROM ubuntu-upstart:14.04

### Install packages.
COPY install/packages.sh /tmp/
RUN DEBIAN_FRONTEND=noninteractive /tmp/packages.sh

### Copy the source code and install.
COPY . /usr/local/src/labdoo/
ENV code_dir /usr/local/src/labdoo
WORKDIR /usr/local/src/labdoo/
RUN ["install/install.sh"]


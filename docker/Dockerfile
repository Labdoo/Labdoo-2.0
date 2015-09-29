FROM ubuntu-upstart:14.04

### Install packages.
COPY install/packages.sh /tmp/
RUN DEBIAN_FRONTEND=noninteractive /tmp/packages.sh

### Copy the source code and install.
COPY . /usr/local/src/labdoo/
ENV code_dir /usr/local/src/labdoo
WORKDIR /usr/local/src/labdoo/
RUN ["install/install.sh"]
WORKDIR /var/www/lbd/profiles/labdoo

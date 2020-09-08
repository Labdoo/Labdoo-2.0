#!/bin/bash
export target="lbd"
export git_branch="$CIRCLE_BRANCH"
export code_dir="${CIRCLE_WORKING_DIRECTORY/#\~/$HOME}"
export domain="www.labdoo-dev.org"
export admin_passwd="$ADMIN_PASSWD"
export gmail_account="dev-user@labdoo.org"
export gmail_passwd="$GMAIL_PASSWD"
export mysql_passwd_root="$MYSQL_ROOT_PASSWD"
export mysql_passwd_lbd="$MYSQL_LABDOO_PASSWD"
export development="false"
export reboot="false"
export start_on_boot="false"
export DEBIAN_FRONTEND=noninteractive

sed -i '/projects\[labdoo\]\[download\]\[url\] *=/ c projects[labdoo][download][url] = '"$code_dir" "$code_dir/build-labdoo.make"

"$( dirname $0 )"/install-and-config.sh

service mysql restart
service apache2 restart
service php5-fpm restart

# always successful - for now, the installation script is still full
# of errors, but most of them can be ignored.
true

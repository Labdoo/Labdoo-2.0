#!/bin/bash

cwd=$(dirname $0)

$cwd/config/domain.sh
$cwd/config/mysql_passwords.sh
$cwd/config/mysql_labdoo.sh
$cwd/config/labdoo.sh en
$cwd/config/gmailsmtp.sh
$cwd/config/drupalpass.sh

$cwd/config/mysqld.sh stop

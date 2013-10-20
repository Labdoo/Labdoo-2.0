#!/bin/bash 

function set_mysql_passwd
{
    username=$1
    password=$2
    query="update mysql.user set Password=PASSWORD(\"$password\") where User=\"$username\"; flush privileges;"
    debian_cnf=/etc/mysql/debian.cnf
    mysql --defaults-file=$debian_cnf -B -e "$query"
}

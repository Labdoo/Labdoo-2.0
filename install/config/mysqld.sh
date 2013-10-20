#!/bin/bash 
### Start/stop mysqld manually,
### if it is not already running.

case "$1" in
    start )
	if test -z "$(ps ax | grep [m]ysqld)"
	then
	    nohup mysqld --user mysql >/dev/null 2>/dev/null &
	    sleep 5  # give time mysqld to start
	fi
	;;

    stop )
	killall mysqld
	;;

    * )
	echo " * Usage: $0 (start|stop)"
	;;
esac



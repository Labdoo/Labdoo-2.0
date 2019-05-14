==> # cat operations_log.sh 
#!/bin/bash
#operations_log.sh
#Operational script to be copied in /root/ and crontabed every minute in order to
#Extract and log some vital constants of the server / Response time - nr of requestes in the last minute - number of apache internal requests - number of vblocked requests in the apache logs
# logs it into the /var/log messages
# logs it into an accessible file from the outside: www.labdoo.org/rq.txt
#Checks the answer time, if it is bigger than a defined thereshold, generates a mail alert (once per hour)

EMAIL=XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
TEMPDIR=/tmp/labdoo-mail-generate

#Gater info
time_now=$(date +'%Y-%m-%d %H:%M %Z')
resp_time=$(curl -so /dev/null -w '%{time_total}\n' https://www.labdoo.org/content/dootronics-dashboard) 
#echo "$time_now - $resp_time"  >> /var/www/lbd/rt.txt
date_look_apache_error=$(date +'%b %d %H:%M'  -d "1 min ago")
blocked_reqs_last_min=$(grep "$date_look_apache_error" /var/log/apache2/error.log | grep "client denied by server configuration" | wc -l)
#echo "$time_now - $blocked_reqs_last_min"  >> /var/www/lbd/bl.txt
date_look_apache_access=$(date +'%d/%b/%Y:%H:%M'  -d "1 min ago")
total_reqs_last_min=$(grep "$date_look_apache_access" /var/log/apache2/access.log | wc -l)
total_reqs_last_min_own=$(grep "$date_look_apache_access" /var/log/apache2/access.log | grep "::1 " | wc -l)

#Once per Hour, remove the file that is accessible from the WEB (to have it recreated once per hour
#And delete the temporary mail folder [we use it in order to control that we are not generating more than 1 mail per hour]
if [ $(date +'%M'  -d "1 min ago") -eq 00 ]
then 
	echo "TIME  -  ANS TIME - REQS LM - OWN REQ LM - BL -LM"  > /var/www/lbd/rq.txt
	rm -rv $TEMPDIR >> /var/www/lbd/rq.txt
fi


#CREATE LOGS [one in the /var/log folder and another one in a file accessible from the web server]
echo -e "$time_now - $resp_time - \t$total_reqs_last_min - \t$total_reqs_last_min_own - \t$blocked_reqs_last_min"  >> /var/www/lbd/rq.txt
echo -e "$time_now - $resp_time - \t$total_reqs_last_min - \t$total_reqs_last_min_own - \t$blocked_reqs_last_min"  >> /var/log/labdoo_hist_rq.txt

#Convert resp time to integer to be able to compare with thereshold
resp_time=$(echo $resp_time | awk -F"."  '{ print $1 }')
#Send Mail if something is wrong (and there still has not been sent one)
if  [ ! -d $TEMPDIR ] && [ $resp_time -gt 50 ] ; then
	mkdir -p $TEMPDIR

	echo "LAST STATISTICS:" >> $TEMPDIR/mail
	echo >> $TEMPDIR/mail
	cat /var/www/lbd/rq.txt >> $TEMPDIR/mail

	echo -e "---------- Access log:" >> $TEMPDIR/mail
	tail -n 60 /var/log/apache2/access.log >> $TEMPDIR/mail
	echo >> $TEMPDIR/mail
	echo "------------- Error log:" >> $TEMPDIR/mail
	tail -n 60 /var/log/apache2/error.log >> $TEMPDIR/mail
	echo >> $TEMPDIR/mail

	cat $TEMPDIR/mail | /usr/sbin/sendmail $EMAIL
	echo "$time_now --- ALERT MAIL GENERATED" >> /var/www/lbd/rq.txt
	echo "$time_now --- ALERT MAIL GENERATED" >> /var/log/labdoo_hist_rq.txt

fi


#!/bin/bash

#Number of lines that will be generated in the json, showing the latest activity#
number_of_events_to_show=4

#Destination host where the WP instance runs
destination_host="www.labdoo.org"

#User in the destination host used for uploading the generated json
destination_user=wpsyncjson

#Where this scripts puts in the local maciine the generated json before pusnig it
#And where the private key to connect to the remote host is located in the local machine
destination_user_key_location=/usr/local/src/labdoo/utils/wpsyncjson.pem
file_origin=/var/www/lbd/data_events.json

#Where in the remote server this script will put the generated json
file_destination=/home/wpsyncjson/tags_data.json

#Temporary file for usage of this script
file_local_temorar=/tmp/temp_drush_temp


#Path in WP to have the files found
LOCATIONIMGSINWP=/wp-content/uploads/events_icons



#Execute the command to extract the information and store in the temporary folder (after cleaning it a bit)
/usr/bin/drush --root=/var/www/lbd/ php-eval "\$blockFeed = module_invoke('views', 'block_view', 'actions-block_1'); \$blockFeed2 = array_values(\$blockFeed)[0]; print(array_values(\$blockFeed2)[0]);"  | egrep -E " ago|node" | tr -d '\n' | sed "s/\width/\n/g" > $file_local_temorar

#Megachapuza para evitar los problemas con la redireccion en la pagina de WP de todo lo que lleva edoovillage en el nombre
sed -i 's/edoovillage.png/edoo_village.png/g' $file_local_temorar
sed -i 's/hub.png/hu_b.png/g' $file_local_temorar


LINENR=0

printf '{ 
    "level1": {
    "start": "Last taged Computers",
    "level2": [
' > $file_origin

while read line; do
	

#Extract my fields	      
	TIME=$(echo $line | awk -F "holder\">" '{print $2}' | awk -F "</em" '{print $1 " ago"}')
       	MSG=$(echo $line | awk -F "href=" '{print $2}' | awk -F ">" '{print $2}' | awk -F " in" '{print $1}')
	CITY=$(echo $line | awk -F "href=" '{print $2}' | awk -F " in " '{print $2}' | awk -F "," '{print $1}')
	COUNTRY=$(echo $line | awk -F "href=" '{print $2}' | awk -F ", " '{print $2}' | awk -F "." '{print $1}')

        
	#Check if it is a dootrip, in that case the structure you are using as "in CITY,COUNTRY" is not valid
	#need to use " to CITY (COUNTRY)"
	if [[ $MSG == Dootrip* ]]
        then
                CITY=$(echo $line | awk -F "href=" '{print $2}' | awk -F ") to " '{print $2}' | awk -F "(" '{print $1}')
                COUNTRY=$(echo $line | awk -F "href=" '{print $2}' | awk -F "(" '{print $3}' | awk -F ")" '{print $1}')
		MSG=$(echo $line | awk -F "href=" '{print $2}' | awk -F ">" '{print $2}' | awk -F "...<" '{print $1}')
        else
                CITY=$(echo $line | awk -F "href=" '{print $2}' | awk -F " in " '{print $2}' | awk -F "," '{print $1}')
                COUNTRY=$(echo $line | awk -F "href=" '{print $2}' | awk -F ", " '{print $2}' | awk -F "." '{print $1}')
        fi

	#IMAGE=$(echo $line | awk -F "img src=\"" '{print $2}' | awk -F "\"" '{print "https://platform.labdoo.org"$1}')
        IMAGE=$(echo $line | awk -F "pictures" '{print $2}' | awk -F "\"" '{print "/wp-content/uploads/events_icons" $1".jpg"}')

	URL=$(echo $line | awk -F "a href=\"" '{print $2}' | awk -F "\"" '{print "https://platform.labdoo.org"$1}')

	#Create a proper json line with the fields
	printf '{"city":"%s","country":"%s","time":"%s","msg":"%s","url":"%s","image":"%s"}' "$CITY" "$COUNTRY" "$TIME" "$MSG" "$URL" "$IMAGE" >>   $file_origin
	
	LINENR=$((LINENR+1))
	if [[ $LINENR -eq $number_of_events_to_show ]]; then
    		break
  	fi
	echo "," >> $file_origin
done < $file_local_temorar
printf '
    ]
  }}
' >> $file_origin

#Push the generated file if jsonlint validates is, otherwise the previous one will remain
if jsonlint-php $file_origin ; then
	scp -i $destination_user_key_location $file_origin $destination_user@$destination_host:$file_destination
	exit 0
else
	echo "command returned some error"
	exit 1
fi


# Of course in the destination folder it will have to be linked the relevant expected file, to the generated one
####REMEMBER TO DO IN WP MACHINEln  -s  /home/wpsyncjson/data_events.json  /var/www/html/wp.labdoo.org/wp-content/themes/rttheme17/data_events.json
# This script is expected to be crontabed in the host running the drupal engine


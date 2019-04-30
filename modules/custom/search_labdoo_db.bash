#!/bin/bash

IFS='
'
DB="lbd"
echo -n "Which string do you want to search: " 
read SEARCHSTRING
for i in `mysql $DB -e "show tables" | grep -v \`mysql $DB -e "show tables" | head -1\``
do
for k in `mysql $DB -e "desc $i" | grep -v \`mysql $DB -e "desc $i" | head -1\` | grep -v int | grep -v float | grep -v decimal | awk '{print $1}'`
do
if [ `mysql $DB -e "Select * from $i where $k='$SEARCHSTRING'" | wc -l` -gt 1 ]
then
echo " Your searchstring was found in table $i, column $k"
echo "         Query: mysql $DB -e \"Select * from $i where $k='$SEARCHSTRING'\""
fi
done
done

#!/bin/bash

# This script creates a backup of a Labdoo AMI
#
# Make sure the aws cli tools are installed locally by running these commands:
#
#    $ sudo apt-get update
#    $ sudo apt-get install python-setuptools python-dev build-essential
#    $ sudo apt-get install python-pip python-dev build-essential
#    $ pip install --upgrade --user awscli
#
# Create a config file in ~/.aws/config similar to this:
#
# [profile FILLIN_WITH_profile_src]
# aws_access_key_id = FILLIN
# aws_secret_access_key = FILLIN 
# region = us-east-1
# output = text
#
# [profile FILLIN_WITH_profile_dst]
# aws_access_key_id = FILLIN 
# aws_secret_access_key = FILLIN 
# region = eu-central-1
# output = text
#
#
# EOF
#

# ------------------------------------------------------------------------
# Modify the following parameteres as needed, 
#GENERAL CONFIGURATION PARAMETERS
instance_id_prod=i-00f548ab184e535d6                     # EC2 Instance to backup (can be production or devevelopement)
max_backups=2                                            # Maximum number of backup AMIs kept


#PROGRAMATIC USER ids are
#EEUU - 362656287327
#EUROPE -578955585868

#UNCOMMENT THE PARAMETERS CORRESPONDING TO THE DIRECTION IN WHICH YOU WANT TO DO THE BACKUP
#COPY FROM USA TO EU
profile_src=labdooUSA                                    # Source profile where instance resides and where the backup is to be created
profile_dst=labdooEU                                    # Destination profile where backup AMI is to be replicated 
userid_dst=578955585868                                  # AWS user ID of destination profiles (dst2)
region_src="us-east-1"                               # Destination region where the back is shared
region_dst="eu-central-1"                                  # Destination region where the back is replicated

#COPY FROM EU TO USA
#profile_src=labdooEU                                     # Source profile where instance resides and where the backup is to be created
#profile_dst=labdooUSA                                   # Destination profile where backup AMI is to be replicated 
#userid_dst=362656287327                                  # AWS user ID of destination profiles (dst2)
#region_src="eu-central-1"                               # Destination region where the back is shared
#region_dst="us-east-1"                                  # Destination region where the back is replicated

# ------------------------------------------------------------------------
# IN CASE OF EXTRAORDINARY (Not Scheduled) BACKUP BEWARE TO CHANGE THE AMI NAME (script is checking that a Backup already exists for that day)
today=$(date +"%Y%m%d")                                       # Today's date as YYYMMDD
last_day=$(date --date="$max_backups days ago" +"%Y%m%d")     # Last day to keep a backup instance
snapshot_date=$(date --date="$max_backups day ago" +"%Y-%m-%d")          # Oldest day of snapshot to search
new_ami_name="LabdooProductionAMI-"$today                     # Name of the newly created backup AMI
del_ami_name="LabdooProductionAMI-"$last_day                  # Name of the old backup AMI to delete

# Make sure aws is in the PATH
export PATH=~/.local/bin:$PATH
source ~/.profile


# Exit if the today'a AMI already exists
echo "Checking if backup AMI $new_ami_name already exists..."
state=$(aws ec2 describe-images --owners self --profile $profile_src --query 'Images[*].[Name,State]' | grep $new_ami_name | awk '{print $2}')
if [ "$state" != "" ]; then
	echo "Backup AMI $new_ami_name already exists, no Backup will be done."
else




	# Create the AMI for today - 
	echo "Image does not exist, creating backup AMI $new_ami_name ..."
	aws ec2 create-image --no-reboot --profile $profile_src --instance-id $instance_id_prod --name $new_ami_name --description "Labdoo production AMI as of "$today

	echo "Waiting for AMI backup to complete..."
	# Wait until the AMI has been created
	while true
	do
		state=$(aws ec2 describe-images --owners self --profile $profile_src --query 'Images[*].[Name,State]' | grep $new_ami_name | awk '{print $2}')
		if [ "$state" == "available" ]; then
			break
		fi
		sleep 3
		echo -n "."
	done
	echo " done."

	# Get the AMI ID and its snapshots IDs
	echo "Getting the AMI ID and its snapshots corresponding to AMI $new_ami_name"
	image_id=$(aws ec2 describe-images --owners self --profile $profile_src --query 'Images[*].[Name,ImageId]' | grep $new_ami_name | awk '{print $2}')
	snapshot_ids=($(aws ec2 --profile $profile_src describe-snapshots --query 'Snapshots[?StartTime>=`'$snapshot_date'`]' | grep $image_id | grep --only-matching "snap-[0-9a-z]*"))


	# Share the AMI with the destination profile
	#   Share first the AMI and then all of its snapshots
	echo "Sharing AMI $image_id with destination user $userid_dst"
	aws ec2 modify-image-attribute --profile $profile_src --image-id $image_id --launch-permission "{\"Add\":[{\"UserId\":\"$userid_dst\"}]}"
	for snap in "${snapshot_ids[@]}"
	do
		echo "Sharing AMI's snapshot $snap with user $userid_dst"
		aws ec2 modify-snapshot-attribute --profile $profile_src --snapshot-id $snap --attribute createVolumePermission --operation-type add --user-ids $userid_dst 
	done

	# Copy the AMI to another region
	echo "Copying AMI $image_id in region $region_src to destination $region_dst"
	aws ec2 copy-image --profile $profile_dst --source-region $region_src --region $region_dst --source-image-id $image_id --name "Backup-"$new_ami_name

	echo "Waiting for AMI copy to complete..."
	# Wait until the AMI has been copied
	while true
	do
		state=$(aws ec2 describe-images --owners self --profile $profile_dst --query 'Images[*].[Name,State]' | grep $new_ami_name | awk '{print $2}')
		if [ "$state" == "available" ]; then
			break
		fi
		sleep 3
		echo -n "."
	done
	echo " done."

# Stop sharing the AMI with the destination profile
echo "Revoking sharing rights of $image_id with user $userid_dst"
aws ec2 modify-image-attribute --profile $profile_src --image-id $image_id --launch-permission "{\"Remove\":[{\"UserId\":\"$userid_dst\"}]}" 
for snap in "${snapshot_ids[@]}"
do
	echo "Revoking sharing rights of AMI's snapshot $snap with user $userid_dst"
	aws ec2 modify-snapshot-attribute --profile $profile_src --snapshot-id $snap --attribute createVolumePermission --operation-type remove --user-ids $userid_dst 
done
fi
# Remove the max_backup-th oldest image if it exists 
echo "Checking if any old AMI needs to be deleted/deregistered in the Origin account [Backup of $max_backups days ago]"
image_id_del=$(aws ec2 describe-images --owners self --profile $profile_src --query 'Images[*].[Name,ImageId]' | grep $del_ami_name | awk '{print $2}')
if [ "$image_id_del" != "" ]; then
	echo "Deleting/deregistering AMI $del_ami_name which is too old to keep..."
	snapshot_ids=($(aws ec2 --profile $profile_src describe-snapshots --query 'Snapshots[?StartTime>=`'$snapshot_date'`]' | grep $image_id_del | grep --only-matching "snap-[0-9a-z]*"))
	aws ec2 deregister-image --profile $profile_src --image-id $image_id_del 
	for snap in "${snapshot_ids[@]}"
	do
		echo "-----------------------------------------------------------------"
		echo "DELETING AMI's snapshot $snap"
		aws ec2 delete-snapshot --snapshot-id $snap
	done

	echo "Done."
else
	echo "No backup AMI $del_ami_name to delete. [Backup of $max_backups days ago]"
fi


echo "Checking if any old AMI needs to be deleted/deregistered in the Destination account [Backup of $max_backups days ago - except on 1st and 15th of month, to be kept for historical backup]"
#date --date="$max_backups days ago" +"%d"
if [ "$(date --date="$max_backups days ago" +"%d")" -eq 01 ] || [ "$(date --date="$max_backups days ago" +"%d")" -eq 15 ] ; then 
	echo "We will leave the backup of day $last_day for having historical backups"
else
	del_ami_name=Backup-$del_ami_name
	image_id_del=$(aws ec2 describe-images --owners self --profile $profile_dst --query 'Images[*].[Name,ImageId]' | grep $del_ami_name | awk '{print $2}')
	if [ "$image_id_del" != "" ]; then
		echo "Deleting/deregistering AMI $del_ami_name which is too old to keep..."
		unset sanpshot_ids
		snapshot_ids=($(aws ec2 --profile $profile_dst describe-snapshots --query 'Snapshots[?StartTime>=`'$snapshot_date'`]' | grep $image_id_del | grep --only-matching "snap-[0-9a-z]*"))
		aws ec2 deregister-image --profile $profile_dst --image-id $image_id_del 
		for snap in "${snapshot_ids[@]}"
		do
			echo "------------------------------------------------------------"
			echo "DELETING AMI's snapshot in Backup system: $snap with profile $profile_dst"
			aws ec2 delete-snapshot --profile $profile_dst --snapshot-id $snap
 	
		done
		echo "Done."
	else
		echo "No backup AMI $del_ami_name to delete. [Backup of $max_backups days ago]"
	fi
fi
echo "Concluded execution of labdoo-snap-image.sh"


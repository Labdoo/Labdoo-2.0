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
# [profile FILLIN_WITH_profile_dst1]
# aws_access_key_id = FILLIN 
# aws_secret_access_key = FILLIN 
# region = eu-central-1
# output = text
#
# [profile FILLIN_WITH_profile_dst2]
# aws_access_key_id = FILLIN 
# aws_secret_access_key = FILLIN 
# region = us-east-1
# output = text
#
# EOF
#

# ------------------------------------------------------------------------

# Modify the following parameteres as needed.
# Notes: 
#  - Region of profile_dst1 must be the same as region of profile_src
#  - User of profile_dst* must correspond to userid_dst
#  - profile_dst* must be in region_dst*

profile_src=FILLIN                                          # Source profile where instance resides
profile_dst1=FILLIN                                         # Destination profile where backup AMI is to be shared 
profile_dst2=FILLIN                                         # Destination profile where backup AMI is to be replicated 
userid_dst=FILLIN                                           # AWS user ID of destination profiles
region_dst1="us-east-1"                                     # Destination region where the back is shared
region_dst2="eu-central-1"                                  # Destination region where the back is replicated
instance_id_prod=i-4d6b099d                                 # Instance to backup (production)
#instance_id_dev=i-9e939b75                                 # Instance to backup (development) 
max_backups=5                                               # Maximum number of backup AMIs kept

# ------------------------------------------------------------------------

today=$(date +"%Y%m%d")                                       # Today's date as YYYMMDD
snapshot_date=$(date --date="1 day ago" +"%Y-%m-%d")          # Oldest day of snapshot to search
new_ami_name="LabdooProductionAMI-"$today                     # Name of the newly created backup AMI
del_ami_name="LabdooProductionAMI-"$(($today-$max_backups-1)) # Name of the old backup AMI to delete

# Make sure aws is in the PATH
export PATH=~/.local/bin:$PATH
source ~/.profile

# Exit if the AMI already exists
echo "Checking if backup AMI $new_ami_name already exists..."
state=$(aws ec2 describe-images --owners self --profile $profile_src --query 'Images[*].[Name,State]' | grep $new_ami_name | awk '{print $2}')
if [ "$state" != "" ]; then
  echo "Backup AMI already exists, nothing to do."
  exit
fi

# Create the AMI
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
snapshot_ids=($(aws ec2 --profile labdoo describe-snapshots --query 'Snapshots[?StartTime>=`'$snapshot_date'`]' | grep $image_id | grep --only-matching "snap-[0-9a-z]*"))

# Share the AMI with the destination profie
#   Share first the AMI and then all of its snapshots
echo "Sharing AMI $image_id with destination user $userid_dst"
aws ec2 modify-image-attribute --profile $profile_src --image-id $image_id --launch-permission "{\"Add\":[{\"UserId\":\"$userid_dst\"}]}"
for snap in "${snapshot_ids[@]}"
do
  echo "Sharing AMI's snapshot $snap with user $userid_dst"
  aws ec2 modify-snapshot-attribute --profile $profile_src --snapshot-id $snap --attribute createVolumePermission --operation-type add --user-ids $userid_dst 
done

# Copy the AMI to another region
echo "Copying AMI $image_id in region $region_dst1 to destination $region_dst2"
aws ec2 copy-image --profile $profile_dst1 --source-region $region_dst1 --region $region_dst2 --source-image-id $image_id --name "Backup-"$new_ami_name

echo "Waiting for AMI copy to complete..."
# Wait until the AMI has been copied
while true
do
  state=$(aws ec2 describe-images --owners self --profile $profile_dst2 --query 'Images[*].[Name,State]' | grep $new_ami_name | awk '{print $2}')
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

# Remove the max_backup-th oldest image if it exists 
echo "Checking if any old AMI needs to be deleted/deregistered..."
image_id_del=$(aws ec2 describe-images --owners self --profile $profile_src --query 'Images[*].[Name,ImageId]' | grep $del_ami_name | awk '{print $2}')
if [ "$image_id_del" != "" ]; then
  echo "Deleting/deregistering AMI $del_ami_name which is too old to keep..."
  aws ec2 deregister-image --profile $profile_src --image-id $image_id_del 
  echo "Done."
  exit
else
  echo "No backup AMI old enough to delete."
fi


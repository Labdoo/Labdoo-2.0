#!/bin/bash -x
### Build a docker image.

### stop on error
set -e

### get the start time
start_time=$(date)

### usage
function usage {
    echo "
Usage: $0 [<settings> options]
Install the project inside a container.

    <settings>      file of installation/configuration settings
    --git_branch=G  git branch that will be installed
    --opt_name=V    override any settings in the previous config files

Examples:
    $0 --git_branch=test
    $0 settings.sh --domain=example1.org --admin_passwd=xyz
    $0 gmail_settings.sh passwords.sh
"
    exit 0
}

### collect in a file all the settings and options
function get_options {
    options=$srcdir/options.sh
    echo '#!/bin/bash' > $options
    echo '### This file contains all the settings' >> $options
    echo '### and options given from the command line.' >> $options
    echo '' >> $options

    ### save the default settings
    source $srcdir/install/settings.sh
    echo "### ----- Start: $srcdir/install/settings.sh" >> $options
    cat $srcdir/install/settings.sh >> $options
    echo "### ----- End: $srcdir/install/settings" >> $options
    
    ### get command line options and save them to options.sh
    for opt in "$@"
    do
        case $opt in
            -h|--help)       usage ;;
    
            --git_branch=*)
                git_branch=${opt#*=} 
                echo git_branch="$git_branch" >> $options
                ;;
    
            --*=*)
                optvalue=${opt#*=}
                optname=${opt%%=*}
                optname=${optname:2}
                eval $optname="$optvalue"
                echo $optname="$optvalue" >> $options
                ;;
    
            *)
                if [ ${opt:0:1} = '-' ]; then usage; fi
                if [ $opt = 'calling_myself' ]; then continue; fi
    
                settings=$opt
                if ! test -f "$settings"
                then
                    echo "File '$settings' does not exist."
                    exit 1
                fi
                source $settings
                echo "### ----- Start: $(pwd)/$settings" >> $options
                cat $settings >> $options
                echo "### ----- End: $(pwd)/$settings" >> $options
                echo
                ;;
        esac
    done

    ### make sure that git_branch is set to some value
    git_branch=${git_branch:-master}
}

### Get the project.
workdir=$(pwd)
cd $(dirname $0)
cd $(pwd -P)
cd ..
srcdir=$(pwd)
project=$(ls *.info | sed -e 's/\.info$//')
cd $workdir

### get the settings and options
get_options "$@"

### make sure that the script is called with `nohup nice ...`
if [ "$1" != "calling_myself" ]
then
    # this script has *not* been called recursively by itself
    datestamp=$(date +%F | tr -d -)
    nohup_out=logs/nohup-$project-$git_branch-$datestamp.out
    mkdir -p logs/
    rm -f $nohup_out
    nohup nice "$0" "calling_myself" "$@" > $nohup_out &
    sleep 1
    tail -f $nohup_out
    exit
else
    # this script has been called recursively by itself
    shift # remove the flag $1 that is used as a termination condition
fi

### make sure that we are using the right git branch
cd $srcdir/
git checkout $git_branch
git pull
cd $workdir

### build the docker image
time docker build --tag=$project:$git_branch --file=$srcdir/docker/Dockerfile $srcdir/

### save image and container name to config file
cat <<EOF > $workdir/config
image=$project:$git_branch
container=$project-$git_branch
hostname=$domain
dev=$development
ssh=$sshd_port
EOF

### print the start and end times
end_time=$(date)
set +x
echo ================================================================
echo "Start time : $start_time"
echo "End time   : $end_time"
echo ================================================================


#!/bin/bash -x
### Build a docker image.

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

### Get the project directory.
project_dir=$(dirname $0)

### collect in a file all the settings and options
options=$project_dir/options.sh
cat <<EOF > $options
#!/bin/bash
### This file contains all the settings
### and options given from the command line.

EOF

### save the default settings
source $project_dir/install/settings.sh
echo "### ----- Start: $project_dir/install/settings.sh" >> $options
cat $project_dir/install/settings.sh >> $options
echo "### ----- End: $project_dir/install/settings" >> $options

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

            settings=$opt
            if ! test -f "$settings"
            then
                echo "File '$settings' does not exist."
                exit 1
            fi
            source $settings
            echo "### ----- Start: $settings" >> $options
            cat $settings >> $options
            echo "### ----- End: $settings" >> $options
            echo
            ;;
    esac
done

### make sure that we are using the right git branch
git_branch=${git_branch:-master}
current_dir=$(pwd)
cd $project_dir/
git checkout $git_branch
git pull
cd $current_dir

### start building and logging
project=$(basename $(ls $project_dir/*.info | sed -e 's/\.info$//'))
nohup_out=nohup-$project-$git_branch.out
rm -f $nohup_out
nohup nice docker build --tag=$project:$git_branch $project_dir/ > $nohup_out &
sleep 1
tail -f $nohup_out

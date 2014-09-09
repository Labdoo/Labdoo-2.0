#!/bin/bash
### Useful for updating or checking the status of all git repositories.
### For example:
###    dev/git.sh status --short
###    dev/git.sh pull

options=${@:-status --short}
gitrepos="
    /var/www/lbd*/profiles/labdoo
    /usr/local/src/labdoo
"
for repo in $gitrepos
do
    echo
    echo "===> $repo"
    cd $repo
    git $options
done

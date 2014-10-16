
### Git branch that will be used.
git_branch='master'

### Domain of the website.
domain='www.labdoo-dev.org'

### Drupal 'admin' password.
admin_passwd='grassroots'

### Emails from the server are sent through the SMTP
### of a GMAIL account. Give the full email
### of the gmail account, and the password.
gmail_account='dev-user@labdoo.org'
gmail_passwd='grassroots'

### Mysql passwords. Leave it as 'random'
### to generate a new one randomly
#mysql_passwd_root='random'
#mysql_passwd_lbd='random'
mysql_passwd_root='grassroots'
mysql_passwd_lbd='grassroots'

### Install also extra things that are useful for development.
development='true'

### Login through ssh.
### Only login through private keys is allowed.
### See also this:
###   http://dashohoxha.blogspot.com/2012/08/how-to-secure-ubuntu-server.html
sshd_port=2201

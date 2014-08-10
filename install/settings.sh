
### Default settings for building the chroot.
target='lbd'
arch='i386'
suite='trusty'
apt_mirror='http://archive.ubuntu.com/ubuntu'

### Git branche that will be used.
lbd_git_branch='master'

### Domain of the website.
lbd_domain='example.org'

### Drupal 'admin' password.
lbd_admin_passwd='admin'

### Emails from the server are sent through the SMTP
### of a GMAIL account. Give the full email
### of the gmail account, and the password.
gmail_account='MyEmailAddress@gmail.com'
gmail_passwd=

### Mysql passwords. Leave it as 'random'
### to generate a new one randomly
mysql_passwd_root='random'
mysql_passwd_lbd='random'

### Install also extra things that are useful for development.
development='true'

### A reboot is needed after installation/configuration.
### If you want to do it automatically, set it to 'true'.
reboot='false'

### Start chroot service automatically on reboot.
start_on_boot='false'

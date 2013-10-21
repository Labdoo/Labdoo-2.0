<?php
   /**
    * Set drupal variables related to email and smtp.
    * Takes two arguments: gmail and gpassw
    */

$email = drush_shift();
$passw = drush_shift();

variable_set('site_mail', $email);
variable_set('smtp_username', $email);
variable_set('smtp_password', $passw);

variable_set('smtp_host', 'smtp.googlemail.com');
variable_set('smtp_port', '465');
variable_set('smtp_protocol', 'ssl');
variable_set('smtp_on', '1');

variable_set('smtp_allowhtml', '1');
variable_set('smtp_keepalive', '1');
variable_set('smtp_always_replyto', '1');

variable_set('smtp_from', $email);
variable_set('mimemail_mail', $email);
variable_set('simplenews_from_address', $email);
variable_set('simplenews_test_address', $email);
variable_set('mass_contact_default_sender_email', $email);
variable_set('reroute_email_address', $email);
variable_set('update_notify_emails', array($email));

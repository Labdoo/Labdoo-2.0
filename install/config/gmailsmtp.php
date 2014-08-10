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

// Set the email of admin.
$query = 'UPDATE users SET mail = :email, init = :email WHERE uid=1';
db_query($query, array(':email' => $email));

// Create actions for email notifications and assign them to triggers.
db_query("DELETE FROM actions
          WHERE type = 'system' AND callback = 'system_send_email_action'");
$aid1 = actions_save(
  'system_send_email_action',
  'system',
  array(
    'recipient' => $email,
    'subject' => '[lbd] New user: [user:name]',
    'message' => 'New user: [user:name]',
  ),
  t('Send e-mail to admin when a new user is registered')
);
$aid2 = actions_save(
  'system_send_email_action',
  'system',
  array(
    'recipient' => $email,
    'subject' => '[lbd] [user:name] has modified his account',
    'message' => 'The user [user:name] has modified his account.',
  ),
  t('Send e-mail to admin when user modifies his account')
);

// assign actions to triggers
db_query("DELETE FROM trigger_assignments
          WHERE hook IN ('user_insert', 'user_update')");
db_query("INSERT INTO trigger_assignments (hook, aid, weight)
          VALUES ('user_insert', $aid1, 0)");
db_query("INSERT INTO trigger_assignments (hook, aid, weight)
          VALUES ('user_update', $aid2, 0)");

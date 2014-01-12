<?php
/**
 * @file
 * lbd_invite.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lbd_invite_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_default_mail_template';
  $strongarm->value = '[invite:inviter-raw] has invited you to join [site:name] at [site:url].

To become a member of [site:name], click the link below or paste it into the address bar of your browser.

[invite:join-link]
';
  $export['invite_default_mail_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_expiry';
  $strongarm->value = '30';
  $export['invite_expiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_manual_from';
  $strongarm->value = '';
  $export['invite_manual_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_manual_reply_to';
  $strongarm->value = '';
  $export['invite_manual_reply_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_maxnum_1';
  $strongarm->value = '1000';
  $export['invite_maxnum_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_maxnum_2';
  $strongarm->value = '50';
  $export['invite_maxnum_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_maxnum_3';
  $strongarm->value = '50';
  $export['invite_maxnum_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_maxnum_4';
  $strongarm->value = '50';
  $export['invite_maxnum_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_maxnum_5';
  $strongarm->value = '50';
  $export['invite_maxnum_5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_maxnum_6';
  $strongarm->value = '50';
  $export['invite_maxnum_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_page_title';
  $strongarm->value = 'Invite a friend';
  $export['invite_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_profile_inviter';
  $strongarm->value = 1;
  $export['invite_profile_inviter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_registration_path';
  $strongarm->value = 'user/register';
  $export['invite_registration_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_require_approval';
  $strongarm->value = 0;
  $export['invite_require_approval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_subject';
  $strongarm->value = '[invite:inviter-raw] has sent you an invite!';
  $export['invite_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_subject_editable';
  $strongarm->value = 1;
  $export['invite_subject_editable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_1';
  $strongarm->value = '4';
  $export['invite_target_role_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_2';
  $strongarm->value = '4';
  $export['invite_target_role_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_3';
  $strongarm->value = '6';
  $export['invite_target_role_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_4';
  $strongarm->value = '4';
  $export['invite_target_role_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_5';
  $strongarm->value = '4';
  $export['invite_target_role_5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_6';
  $strongarm->value = '4';
  $export['invite_target_role_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_target_role_default';
  $strongarm->value = '4';
  $export['invite_target_role_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_use_users_email';
  $strongarm->value = '1';
  $export['invite_use_users_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'invite_use_users_email_replyto';
  $strongarm->value = '1';
  $export['invite_use_users_email_replyto'] = $strongarm;

  return $export;
}

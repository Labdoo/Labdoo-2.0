<?php
   /**
    * Modifies the configuration of a Labdoo site
    * that is installed for development. Not required,
    * but sometimes can be useful.
    *
    * Call it like this:
    *     drush [@alias] php-script config.php [tag]
    */

$tag = drush_shift();
if ($tag == '')  $tag = 'dev';

// append (dev) to site_name
variable_set('site_name', "Labdoo ($tag)");

$site_mail = variable_get('site_mail');
if (preg_match('/@gmail.com/', $site_mail)) {

  // make site email something like 'user+dev@gmail.com'
  $email = preg_replace('/@gmail.com/', "+$tag@gmail.com", $site_mail);
  variable_set('site_mail', $email);
  variable_set('smtp_from', $email);
  variable_set('mimemail_mail', $email);
  variable_set('simplenews_from_address', $email);
  variable_set('simplenews_test_address', $email);
  variable_set('mass_contact_default_sender_email', $email);
  variable_set('reroute_email_address', $email);
  variable_set('update_notify_emails', array($email));

  // enable email re-routing
  variable_set('reroute_email_enable', 1);
  variable_set('reroute_email_enable_message', 1);

  if ($tag == 'dev') {
    // add a few test users
    $new_user = array(
      'name' => 'user1',
      'mail' => preg_replace('/@gmail.com/', '+user1@gmail.com', $site_mail),
      'pass' => 'user1',
      'status' => 1,
      'init' => 'email address',
      'roles' => array(
        DRUPAL_AUTHENTICATED_RID => 'authenticated user',
      ),
    );
    user_save(null, $new_user);

    $new_user['name'] = 'user2';
    $new_user['pass'] = 'user2';
    $new_user['mail'] = preg_replace('/@gmail.com/', '+user2@gmail.com', $site_mail);
    user_save(null, $new_user);
  }
}

// blocks
if ($tag == 'dev') {
  $blocks = array(
    // show the devel menu on the footer
    array(
      'module' => 'menu',
      'delta'  => 'devel',
      'region' => 'footer',
      'status' => 1,
      'weight' => -15,
      'cache'  => DRUPAL_NO_CACHE,
    ),
  );
  $default_theme = variable_get('theme_default', 'bartik');
  foreach ($blocks as $block) {
    extract($block);
    db_update('block')
      ->fields(array(
          'status' => $status,
          'region' => $region,
          'weight' => $weight,
          'cache'  => $cache,
        ))
      ->condition('module', $module)
      ->condition('delta', $delta)
      ->condition('theme', $default_theme)
      ->execute();
  }
}

<?php
/**
 * @file
 * Installation steps for the profile Labdoo.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function labdoo_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Labdoo';
}

/**
 * Implements hook_install_tasks().
 */
function labdoo_install_tasks($install_state) {
  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'labdoo') . '/labdoo.css');

  require_once(drupal_get_path('module', 'phpmailer') . '/phpmailer.admin.inc');

  $tasks = array(
    'labdoo_mail_config' => array(
      'display_name' => st('Mail Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'phpmailer_settings_form',
    ),
    /*
    'labdoo_config' => array(
      'display_name' => st('Labdoo Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'labdoo_config',
    ),
    */
  );

  return $tasks;
}


/**
 * General configuration settings for Labdoo.
 *
 * @return
 *   An array containing form items to place on the module settings page.
 */
function labdoo_config() {

  $form['config'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Labdoo configuration options'),
  );

  // . . . . .

  return system_settings_form($form);
}

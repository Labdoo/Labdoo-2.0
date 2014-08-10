<?php
/**
 * @file
 * Installation steps for the profile labdoo.
 */

// Use functions from the base profile.
require_once(drupal_get_path('profile', 'openatrium') . '/openatrium.profile');

/**
 * Implements hook_install_tasks_alter()
 */
function labdoo_install_tasks_alter(&$tasks, $install_state) {
  // Call the hook of the base profile.
  openatrium_install_tasks_alter($tasks, $install_state);
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function labdoo_form_apps_profile_apps_select_form_alter(&$form, $form_state) {
  // Call the hook of the base profile.
  openatrium_form_apps_profile_apps_select_form_alter($form, $form_state);
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function labdoo_form_panopoly_theme_selection_form_alter(&$form, &$form_state, $form_id) {
  // Call the hook of the base profile.
  openatrium_form_panopoly_theme_selection_form_alter($form, $form_state, $form_id);
}

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

  module_load_include('inc', 'phpmailer', 'phpmailer.admin');

  // Append new installation tasks.
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

    // Installation tasks of the base profile (openatrium).
    'openatrium_features_revert_all' => array('type' => 'normal'),
    'openatrium_rebuild_search' => array('type' => 'normal'),
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

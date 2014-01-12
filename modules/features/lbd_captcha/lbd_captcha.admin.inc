<?php
/**
 * @file
 * Configuration of reCaptcha (custom/private settings).
 */

/**
 * Implements hook_menu().
 */
function lbd_captcha_menu() {
  $items = array();
  $items['admin/config/lbd/captcha'] = array(
    'title'            => 'reCaptcha',
    'description'      => 'Private reCaptca settings.',
    'page callback'    => 'drupal_get_form',
    'page arguments'   => array('lbd_captcha_config'),
    'access arguments' => array('btranslator-admin'),
  );

  return $items;
}


/**
 * Custom settings for Captcha.
 *
 * @return
 *   An array containing form items to place on the module settings page.
 */
function lbd_captcha_config() {
  // Load the recaptcha library.
  _recaptcha_load_library();

  $form = array();
  $form['recaptcha_public_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Public Key'),
    '#default_value' => variable_get('recaptcha_public_key', ''),
    '#maxlength' => 40,
    '#description' => t('The public key given to you when you <a href="@url" target="_blank">registered at reCAPTCHA.net</a>.', array('@url' => url(recaptcha_get_signup_url($_SERVER['SERVER_NAME'], variable_get('site_name', ''))))),
    '#required' => TRUE,
  );

  $form['recaptcha_private_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Private Key'),
    '#default_value' => variable_get('recaptcha_private_key', ''),
    '#maxlength' => 40,
    '#description' => t('The private key given to you when you <a href="@url" target="_blank">registered at reCAPTCHA.net</a>.', array('@url' => url(recaptcha_get_signup_url($_SERVER['SERVER_NAME'], variable_get('site_name', ''))))),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

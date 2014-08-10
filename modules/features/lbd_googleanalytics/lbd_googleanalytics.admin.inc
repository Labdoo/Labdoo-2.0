<?php
/**
 * @file
 * Configuration of googleanalytics.
 */

/**
 * Implements hook_menu().
 */
function lbd_googleanalytics_menu() {
  $items = array();
  $items['admin/config/lbd/googleanalytics'] = array(
    'title'            => 'GoogleAnalytics',
    'description'      => 'Private GoogleAnalytics settings.',
    'page callback'    => 'drupal_get_form',
    'page arguments'   => array('lbd_googleanalytics_config'),
    'access callback'  => TRUE,
  );

  return $items;
}


/**
 * Custom settings for GoogleAnalytics.
 *
 * @return
 *   An array containing form items to place on the module settings page.
 */
function lbd_googleanalytics_config() {
  $form = array();

  $form['googleanalytics_account'] = array(
    '#title' => t('Web Property ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('googleanalytics_account', 'UA-'),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#description' => t('This ID is unique to each site you want to track separately, and is in the form of UA-xxxxxxx-yy. To get a Web Property ID, <a href="@analytics">register your site with Google Analytics</a>, or if you already have registered your site, go to your Google Analytics Settings page to see the ID next to every site profile. <a href="@webpropertyid">Find more information in the documentation</a>.', array('@analytics' => 'http://www.google.com/analytics/', '@webpropertyid' => url('https://developers.google.com/analytics/resources/concepts/gaConceptsAccounts', array('fragment' => 'webProperty')))),
  );

  return system_settings_form($form);
}

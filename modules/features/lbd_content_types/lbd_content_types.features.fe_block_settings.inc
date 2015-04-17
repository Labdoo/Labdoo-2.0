<?php
/**
 * @file
 * lbd_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-labdoo_slideshow-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'labdoo_slideshow-block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'bootstrap1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap1',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}

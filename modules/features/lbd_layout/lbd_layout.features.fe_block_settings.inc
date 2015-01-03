<?php
/**
 * @file
 * lbd_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'custom' => '0',
    'delta' => 'sharethis_block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'sharethis',
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

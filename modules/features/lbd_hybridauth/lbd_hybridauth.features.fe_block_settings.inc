<?php
/**
 * @file
 * lbd_hybridauth.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_hybridauth_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['hybridauth-hybridauth'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'hybridauth',
    'module' => 'hybridauth',
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
      'bartik_fb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik_fb',
        'weight' => '0',
      ),
      'labdoo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'labdoo',
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

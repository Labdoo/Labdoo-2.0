<?php
/**
 * @file
 * lbd_gmap.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_gmap_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['gmap_location-0'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '0',
    'module' => 'gmap_location',
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

  $export['gmap_location-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'module' => 'gmap_location',
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

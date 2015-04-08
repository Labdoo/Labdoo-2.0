<?php
/**
 * @file
 * lbd_wall.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_wall_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['drupal_wall-drupal_wall'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'drupal_wall',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'drupal_wall',
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

  $export['drupal_wall-drupal_wall_view'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'drupal_wall_view',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'drupal_wall',
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

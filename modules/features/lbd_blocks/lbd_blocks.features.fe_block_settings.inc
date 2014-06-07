<?php
/**
 * @file
 * lbd_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_geolocation_map_node'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'block_geolocation_map_node',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<?php
  $match = FALSE;
  $types = array(\'laptop\' => 1,\'dootrip\' => 1,\'hub\' => 1, \'edoovillage\' => 1) ;

  if ((arg(0) == \'node\') && is_numeric(arg(1))) {
    $node = node_load(arg(1));
    $match = isset($types[$node->type]);
  }

  return $match;
?>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'bootstrap1' => array(
        'region' => 'content',
        'status' => '1',
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
    'visibility' => '2',
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'bootstrap1' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bootstrap1',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-actions-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'actions-block',
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
        'region' => 'header',
        'status' => '1',
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

<?php
/**
 * @file
 * labdoo_objects.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function labdoo_objects_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-dooject_header'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'dooject_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<?php
$nodeType = "laptop";
if ( (arg(0) == \'node\' AND is_numeric(arg(1)))) {
    $node = node_load(arg(1)); 
    // valid node id in view mode
    if ((arg(2) == \'revisions\') OR (arg(2) == \'edit\') OR (arg(2) == \'clone\')) {
      return FALSE;
    }
    if ( $node->type == $nodeType ) {
        return TRUE;
    }
}
return FALSE;
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
    'visibility' => '2',
  );

  return $export;
}

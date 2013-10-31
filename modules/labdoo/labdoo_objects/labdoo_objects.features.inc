<?php
/**
 * @file
 * labdoo_objects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function labdoo_objects_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function labdoo_objects_node_info() {
  $items = array(
    'laptop' => array(
      'name' => t('Laptop'),
      'base' => 'node_content',
      'description' => t('Add a laptop to the Labdoo global inventory'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * lbd_wall.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lbd_wall_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lbd_wall_node_info() {
  $items = array(
    'drupal_wall' => array(
      'name' => t('Share'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

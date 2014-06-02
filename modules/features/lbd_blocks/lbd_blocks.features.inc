<?php
/**
 * @file
 * lbd_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lbd_blocks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lbd_blocks_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lbd_blocks_node_info() {
  $items = array(
    'labdoo_action' => array(
      'name' => t('Action'),
      'base' => 'node_content',
      'description' => t('Actions are tasks carried out within the Labdoo aid network that contribute towards the mission of bringing education to children. Nodes of this type are automatically created.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

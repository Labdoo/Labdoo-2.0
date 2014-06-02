<?php
/**
 * @file
 * lbd_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lbd_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lbd_content_types_node_info() {
  $items = array(
    'action' => array(
      'name' => t('Action'),
      'base' => 'node_content',
      'description' => t('Actions are tasks carried out within the Labdoo aid network that contribute towards the mission of bringing education to children. Nodes of this type are automatically created.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'private_page' => array(
      'name' => t('Private page'),
      'base' => 'node_content',
      'description' => t('Pages that can only be accessed by registered users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

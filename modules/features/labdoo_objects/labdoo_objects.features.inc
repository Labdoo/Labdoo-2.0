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
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
    'dootrip' => array(
      'name' => t('Dootrip'),
      'base' => 'node_content',
      'description' => t('A dootrip is a travel performed by a person or an organization which can be used to carry one or more laptops.  Dootrips enable Labdoo\'s CO2-neutral transportation system.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'edoovillage' => array(
      'name' => t('Edoovillage'),
      'base' => 'node_content',
      'description' => t('An edoovillage is a location (most typically a school or an education center) where Labdoo laptops loaded with education software are installed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hub' => array(
      'name' => t('Hub'),
      'base' => 'node_content',
      'description' => t('Labdoo hubs are locations where laptops can be dropped and where Labdoo volunteers typically perform multiple Labdoo tasks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'laptop' => array(
      'name' => t('Dootronic'),
      'base' => 'node_content',
      'description' => t('Use this content type to tag and register a laptop.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

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
 * Implements hook_flag_default_flags().
 */
function lbd_wall_flag_default_flags() {
  $flags = array();
  // Exported flag: "Labdoo Like Flag".
  $flags['labdoo_like_flag'] = array(
    'entity_type' => 'node',
    'title' => 'Labdoo Like Flag',
    'global' => '0',
    'types' => array(
      0 => 'drupal_wall',
    ),
    'flag_short' => 'Like',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unlike',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'node_gallery_node_thumbnail' => 0,
      'email_plain' => 0,
      'email_html' => 0,
      'email_textalt' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'lbd_wall',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

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

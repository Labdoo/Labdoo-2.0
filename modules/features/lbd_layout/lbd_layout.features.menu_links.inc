<?php
/**
 * @file
 * lbd_layout.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lbd_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:book
  $menu_links['navigation:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books');


  return $menu_links;
}

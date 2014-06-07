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

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:actions
  $menu_links['main-menu:actions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actions',
    'router_path' => 'actions',
    'link_title' => 'Actions feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Actions feed');
  t('Home');


  return $menu_links;
}

<?php
/**
 * @file
 * lbd_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['book-navigation'] = array(
    'cache' => 5,
    'custom' => '0',
    'delta' => 'navigation',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'book',
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

  $export['lbd_wiki-book_outline'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'book_outline',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'lbd_wiki',
    'node_types' => array(),
    'pages' => '<?php return lbd_wiki_is_book_node() != NULL ?>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-100',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '-100',
      ),
    ),
    'title' => '',
    'visibility' => '2',
  );

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'custom' => '0',
    'delta' => 'sharethis_block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'sharethis',
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

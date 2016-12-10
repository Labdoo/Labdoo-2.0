<?php
/**
 * @file
 * lbd_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lbd_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['lbd_blocks_views-block_story_header'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'block_story_header',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'lbd_blocks_views',
    'node_types' => array(),
    'pages' => '
<?php
  $match = FALSE;
  $types = array(\'labdoo_story\' => 1) ;

  if(arg(2) != "") //  Display only in node view mode
    return FALSE;

  if ((arg(0) == \'node\') && is_numeric(arg(1))) {
    $node = node_load(arg(1));
    $match = isset($types[$node->type]);
  }

  return $match;
?>
               ',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-100',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-100',
      ),
    ),
    'title' => '',
    'visibility' => '2',
  );

  $export['views-labdoo_slideshow-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'labdoo_slideshow-block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
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

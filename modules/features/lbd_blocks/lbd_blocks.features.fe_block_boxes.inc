<?php
/**
 * @file
 * lbd_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function lbd_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Map to geolocate a node with a location attached';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'block_geolocation_map_node';
  $fe_block_boxes->body = '<?php labdoo_render_map_geolocate_node(); ?>';

  $export['block_geolocation_map_node'] = $fe_block_boxes;

  return $export;
}

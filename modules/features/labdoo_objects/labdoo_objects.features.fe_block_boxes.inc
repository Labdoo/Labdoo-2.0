<?php
/**
 * @file
 * labdoo_objects.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function labdoo_objects_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The header of a dooject';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'dooject_header';
  $fe_block_boxes->body = '<?php

    lbd_print_dooject_header(arg(1));

?>';

  $export['dooject_header'] = $fe_block_boxes;

  return $export;
}

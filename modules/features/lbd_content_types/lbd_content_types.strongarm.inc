<?php
/**
 * @file
 * lbd_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lbd_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_private_page';
  $strongarm->value = 1;
  $export['node_view_permissions_private_page'] = $strongarm;

  return $export;
}

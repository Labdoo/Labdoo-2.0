<?php
/**
 * @file
 * lbd_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lbd_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lbd_layout_views_api() {
  return array("version" => "3.0");
}

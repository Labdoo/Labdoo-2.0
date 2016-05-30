<?php
/**
 * @file
 * lbd_registration_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lbd_registration_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_registration_state().
 */
function lbd_registration_features_default_registration_state() {
  $items = array();
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function lbd_registration_features_default_registration_type() {
  $items = array();
  $items['event_registration'] = entity_import('registration_type', '{
    "name" : "event_registration",
    "label" : "Enable event registration",
    "locked" : "0",
    "default_state" : null,
    "weight" : "0",
    "rdf_mapping" : [],
    "data" : { "held_expire" : "1", "held_expire_state" : "canceled" }
  }');
  return $items;
}

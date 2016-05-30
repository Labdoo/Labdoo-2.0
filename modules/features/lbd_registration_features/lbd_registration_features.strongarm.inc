<?php
/**
 * @file
 * lbd_registration_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lbd_registration_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_registration__event_registration';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'who_is_registering' => array(
          'weight' => '0',
        ),
        'anon_mail' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'mail' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'host_entity_link' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'created' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'updated' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'spaces' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'author' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'user' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'state' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_registration__event_registration'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * lbd_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lbd_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
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
      'form' => array(),
      'display' => array(
        'mimemail' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'simplenews' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_user';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '0',
          'weight' => '20',
        ),
      ),
      'register' => 1,
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'coords' => 'coords',
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
      ),
    ),
  );
  $export['location_settings_user'] = $strongarm;

  return $export;
}

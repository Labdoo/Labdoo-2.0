<?php
/**
 * @file
 * labdoo_objects.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function labdoo_objects_field_default_fields() {
  $fields = array();

  // Exported field: 'node-laptop-field_serial_number'.
  $fields['node-laptop-field_serial_number'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_serial_number',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'laptop',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Write here the serial number of the laptop. Usually the serial number can be found in the back of the laptop, search for keywords such as "Serial Number" or "S/N", or if you see a bar code with a number under it, use this number. If the laptop has no sticker with the serial number, then write in this field the words "Unknown".',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_serial_number',
      'label' => 'Serial Number',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '32',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Serial Number');
  t('Write here the serial number of the laptop. Usually the serial number can be found in the back of the laptop, search for keywords such as "Serial Number" or "S/N", or if you see a bar code with a number under it, use this number. If the laptop has no sticker with the serial number, then write in this field the words "Unknown".');

  return $fields;
}

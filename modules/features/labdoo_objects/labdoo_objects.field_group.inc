<?php
/**
 * @file
 * labdoo_objects.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function labdoo_objects_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|laptop|default';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_laptop_information';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_additional_notes',
      1 => 'field_amp_hours',
      2 => 'field_battery_duration',
      3 => 'field_battery_watt_hours',
      4 => 'field_cpu',
      5 => 'field_cpu_type',
      6 => 'field_current_operating_system',
      7 => 'field_dooject_weight',
      8 => 'field_hard_drive',
      9 => 'field_keyboard',
      10 => 'field_memory',
      11 => 'field_tagger',
      12 => 'field_volts',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_additional_information|node|laptop|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|laptop|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_laptop_data';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_additional_editors',
      1 => 'field_additional_followers',
      2 => 'field_additional_notes',
      3 => 'field_additional_notification_em',
      4 => 'field_amp_hours',
      5 => 'field_battery_duration',
      6 => 'field_battery_watt_hours',
      7 => 'field_cpu',
      8 => 'field_cpu_type',
      9 => 'field_current_operating_system',
      10 => 'field_dooject_weight',
      11 => 'field_dootrips',
      12 => 'field_hard_drive',
      13 => 'field_keyboard',
      14 => 'field_memory',
      15 => 'field_tagger',
      16 => 'field_volts',
      17 => 'field_pick_me_up',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_additional_information|node|laptop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|node|laptop|default';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_laptop_information';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_device_type',
      1 => 'field_dootrips',
      2 => 'field_edoovillage_destination',
      3 => 'field_hub_laptop',
      4 => 'field_manager',
      5 => 'field_model',
      6 => 'field_picture',
      7 => 'field_serial_number',
      8 => 'field_status',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_basic_information|node|laptop|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|node|laptop|form';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_laptop_data';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_device_type',
      1 => 'field_edoovillage_destination',
      2 => 'field_hub_laptop',
      3 => 'field_manager',
      4 => 'field_model',
      5 => 'field_picture',
      6 => 'field_serial_number',
      7 => 'field_status',
      8 => 'locations',
      9 => 'title',
      10 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-basic-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_basic_information|node|laptop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_laptop_data|node|laptop|form';
  $field_group->group_name = 'group_laptop_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '0',
    'children' => array(
      0 => 'group_additional_information',
      1 => 'group_basic_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-laptop-data field-group-htabs',
      ),
    ),
  );
  $field_groups['group_laptop_data|node|laptop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_laptop_information|node|laptop|default';
  $field_group->group_name = 'group_laptop_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Laptop Information',
    'weight' => '0',
    'children' => array(
      0 => 'group_additional_information',
      1 => 'group_basic_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-laptop-information field-group-htabs',
      ),
    ),
  );
  $field_groups['group_laptop_information|node|laptop|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Information');
  t('Basic Information');
  t('Data');
  t('Laptop Information');

  return $field_groups;
}

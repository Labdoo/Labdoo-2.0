<?php
/**
 * @file
 * lbd_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lbd_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conversation_message|node|team_page|form';
  $field_group->group_name = 'group_conversation_message';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Message',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_conversation_attachment',
      2 => 'field_are_you_a_student_teacher_',
      3 => 'field_team_my_edoovillage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conversation-message field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_conversation_message|node|team_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_description|node|event|form';
  $field_group->group_name = 'group_event_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event description',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date',
      2 => 'field_location_event',
      3 => 'field_image_event',
      4 => 'field_registration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-description field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_description|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_sharing|node|event|form';
  $field_group->group_name = 'group_event_sharing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sharing options',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_additional_emails_event',
      2 => 'field_send_to_all_event',
      3 => 'field_send_to_event',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sharing options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-event-sharing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_event_sharing|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipient_options|node|team_page|form';
  $field_group->group_name = 'group_recipient_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sharing options',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_send_to_all_conversation',
      2 => 'field_send_to_conversation',
      3 => 'field_additional_emails_conver',
      4 => 'field_additional_teams',
      5 => 'field_send_to_all_hub_managers',
      6 => 'field_send_to_all_edoo_managers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sharing options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-recipient-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_recipient_options|node|team_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_task_description|node|team_task|form';
  $field_group->group_name = 'group_task_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_task';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Task description',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_task_assigned_to',
      2 => 'field_task_attachment',
      3 => 'field_task_priority',
      4 => 'field_task_status',
      5 => 'field_task_type',
      6 => 'field_task_due_date',
      7 => 'locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-task-description field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_task_description|node|team_task|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_task_sharing|node|team_task|form';
  $field_group->group_name = 'group_task_sharing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_task';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sharing options',
    'weight' => '2',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_send_to_all_task',
      2 => 'field_send_to_task',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sharing options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-task-sharing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_task_sharing|node|team_task|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event description');
  t('Message');
  t('Sharing options');
  t('Task description');

  return $field_groups;
}

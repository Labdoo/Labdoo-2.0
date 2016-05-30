<?php

$view = new view();
$view->name = 'my_events';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'registration';
$view->human_name = 'My events';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My events';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'calendar_entity';
/* Field: Registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'registration_id' => 'registration_id',
  'field_your_name' => 'field_your_name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'registration_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_your_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['header']['area_text_custom']['content'] = '<p align=\'right\'>You can find all the Labdoo events from <a href="../../teams-dashboard?type=event&field_task_status_value=All&field_task_type_value=All&uid=&combine=&uid_1=">this link</a>.</p>
<hr/>';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<p><font color=\'red\'>[You are currently not registered to any events]</font></p>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
$handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
$handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
$handler->display->display_options['relationships']['registration_related_node']['label'] = 'The parent event';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Registration: Registrant name */
$handler->display->display_options['fields']['field_your_name']['id'] = 'field_your_name';
$handler->display->display_options['fields']['field_your_name']['table'] = 'field_data_field_your_name';
$handler->display->display_options['fields']['field_your_name']['field'] = 'field_your_name';
/* Field: Registration: Slots consumed */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'registration';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['label'] = '# Reservations';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['delete_registration']['id'] = 'delete_registration';
$handler->display->display_options['fields']['delete_registration']['table'] = 'registration';
$handler->display->display_options['fields']['delete_registration']['field'] = 'delete_registration';
$handler->display->display_options['fields']['delete_registration']['label'] = '';
$handler->display->display_options['fields']['delete_registration']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['delete_registration']['alter']['text'] = 'Unregister';
$handler->display->display_options['fields']['delete_registration']['element_label_colon'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['edit_registration']['id'] = 'edit_registration';
$handler->display->display_options['fields']['edit_registration']['table'] = 'registration';
$handler->display->display_options['fields']['edit_registration']['field'] = 'edit_registration';
$handler->display->display_options['fields']['edit_registration']['label'] = '';
$handler->display->display_options['fields']['edit_registration']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['edit_registration']['alter']['text'] = 'Edit';
$handler->display->display_options['fields']['edit_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Registration: Author entity author_uid */
$handler->display->display_options['arguments']['author']['id'] = 'author';
$handler->display->display_options['arguments']['author']['table'] = 'registration';
$handler->display->display_options['arguments']['author']['field'] = 'author';
$handler->display->display_options['arguments']['author']['default_action'] = 'default';
$handler->display->display_options['arguments']['author']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['author']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['author']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['author']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
$handler->display->display_options['path'] = 'user/%/my-events';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'My events';
$handler->display->display_options['menu']['description'] = 'Shows the list of events you have registered to';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


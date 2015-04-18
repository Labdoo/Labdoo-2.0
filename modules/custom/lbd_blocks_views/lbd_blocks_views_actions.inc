<?php

$view = new view();
$view->name = 'actions';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'ActionsFeed';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Actions Feed';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'action' => 'action',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Global Actions Feed';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'action' => 'action',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Type (field_action_type) */
$handler->display->display_options['filters']['field_action_type_value']['id'] = 'field_action_type_value';
$handler->display->display_options['filters']['field_action_type_value']['table'] = 'field_data_field_action_type';
$handler->display->display_options['filters']['field_action_type_value']['field'] = 'field_action_type_value';
$handler->display->display_options['filters']['field_action_type_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_action_type_value']['expose']['operator_id'] = 'field_action_type_value_op';
$handler->display->display_options['filters']['field_action_type_value']['expose']['label'] = 'Actions related to:';
$handler->display->display_options['filters']['field_action_type_value']['expose']['operator'] = 'field_action_type_value_op';
$handler->display->display_options['filters']['field_action_type_value']['expose']['identifier'] = 'field_action_type_value';
$handler->display->display_options['filters']['field_action_type_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_action_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['path'] = 'actions';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mini-missions';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'next';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
$handler->display->display_options['style_options']['slideshow_skin'] = 'default';
$handler->display->display_options['style_options']['skin_info'] = array(
  'class' => 'default',
  'name' => 'Default',
  'module' => 'views_slideshow',
  'path' => '',
  'stylesheets' => array(),
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '1200';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['element_wrapper_class'] = 'actions-feed-time';
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'action' => 'action',
);
/* Filter criterion: Content: Stream it (field_stream_it) */
$handler->display->display_options['filters']['field_stream_it_value']['id'] = 'field_stream_it_value';
$handler->display->display_options['filters']['field_stream_it_value']['table'] = 'field_data_field_stream_it';
$handler->display->display_options['filters']['field_stream_it_value']['field'] = 'field_stream_it_value';
$handler->display->display_options['filters']['field_stream_it_value']['value'] = array(
  1 => '1',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'My Actions';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No actions.';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_labdooer_action_target_id']['id'] = 'field_labdooer_action_target_id';
$handler->display->display_options['relationships']['field_labdooer_action_target_id']['table'] = 'field_data_field_labdooer_action';
$handler->display->display_options['relationships']['field_labdooer_action_target_id']['field'] = 'field_labdooer_action_target_id';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'field_labdooer_action_target_id';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'action' => 'action',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Type (field_action_type) */
$handler->display->display_options['filters']['field_action_type_value']['id'] = 'field_action_type_value';
$handler->display->display_options['filters']['field_action_type_value']['table'] = 'field_data_field_action_type';
$handler->display->display_options['filters']['field_action_type_value']['field'] = 'field_action_type_value';
$handler->display->display_options['filters']['field_action_type_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_action_type_value']['expose']['operator_id'] = 'field_action_type_value_op';
$handler->display->display_options['filters']['field_action_type_value']['expose']['label'] = 'Actions related to:';
$handler->display->display_options['filters']['field_action_type_value']['expose']['operator'] = 'field_action_type_value_op';
$handler->display->display_options['filters']['field_action_type_value']['expose']['identifier'] = 'field_action_type_value';
$handler->display->display_options['filters']['field_action_type_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_action_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['path'] = 'myactions';

/* Display: Block (no wrap) */
$handler = $view->new_display('block', 'Block (no wrap)', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mini-missions';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'next';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
$handler->display->display_options['style_options']['slideshow_skin'] = 'default';
$handler->display->display_options['style_options']['skin_info'] = array(
  'class' => 'default',
  'name' => 'Default',
  'module' => 'views_slideshow',
  'path' => '',
  'stylesheets' => array(),
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '1200';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['element_wrapper_class'] = 'actions-feed-time';
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<table><tr><td nowrap>[body]</td></tr></table>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'action' => 'action',
);
/* Filter criterion: Content: Stream it (field_stream_it) */
$handler->display->display_options['filters']['field_stream_it_value']['id'] = 'field_stream_it_value';
$handler->display->display_options['filters']['field_stream_it_value']['table'] = 'field_data_field_stream_it';
$handler->display->display_options['filters']['field_stream_it_value']['field'] = 'field_stream_it_value';
$handler->display->display_options['filters']['field_stream_it_value']['value'] = array(
  1 => '1',
);




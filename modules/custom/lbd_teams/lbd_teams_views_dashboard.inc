<?php

$view = new view();
$view->name = 'teams_dashboard';
$view->description = 'Find activities inside teams';
$view->tag = 'Teams (OG)';
$view->base_table = 'node';
$view->human_name = 'Teams dashboard';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Teams dashboard';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_task_assigned_to_target_id']['id'] = 'field_task_assigned_to_target_id';
$handler->display->display_options['relationships']['field_task_assigned_to_target_id']['table'] = 'field_data_field_task_assigned_to';
$handler->display->display_options['relationships']['field_task_assigned_to_target_id']['field'] = 'field_task_assigned_to_target_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  'team_page' => 'team_page',
  'event' => 'event',
  'team_task' => 'team_task',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Global: Dependent filter */
$handler->display->display_options['filters']['views_dependent_filter']['id'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter']['table'] = 'views';
$handler->display->display_options['filters']['views_dependent_filter']['field'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter']['group'] = 1;
$handler->display->display_options['filters']['views_dependent_filter']['controller_filter'] = 'type';
$handler->display->display_options['filters']['views_dependent_filter']['controller_values'] = array(
  'team_task' => 'team_task',
  'action' => 0,
  'article' => 0,
  'page' => 0,
  'blog' => 0,
  'laptop' => 0,
  'dootrip' => 0,
  'edoovillage' => 0,
  'gic' => 0,
  'hub' => 0,
  'private_page' => 0,
  'simplenews' => 0,
  'slider_page' => 0,
  'team' => 0,
  'team_page' => 0,
  'event' => 0,
);
$handler->display->display_options['filters']['views_dependent_filter']['dependent_filters'] = array(
  'field_task_priority_value' => 'field_task_priority_value',
  'field_task_status_value' => 'field_task_status_value',
  'field_task_type_value' => 'field_task_type_value',
  'uid' => 'uid',
);
/* Filter criterion: Content: Priority (field_task_priority) */
$handler->display->display_options['filters']['field_task_priority_value']['id'] = 'field_task_priority_value';
$handler->display->display_options['filters']['field_task_priority_value']['table'] = 'field_data_field_task_priority';
$handler->display->display_options['filters']['field_task_priority_value']['field'] = 'field_task_priority_value';
$handler->display->display_options['filters']['field_task_priority_value']['value'] = array(
  'low' => 'low',
  'normal' => 'normal',
  'high' => 'high',
);
$handler->display->display_options['filters']['field_task_priority_value']['group'] = 1;
$handler->display->display_options['filters']['field_task_priority_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_task_priority_value']['expose']['operator_id'] = 'field_task_priority_value_op';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['label'] = 'Priority';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['operator'] = 'field_task_priority_value_op';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['identifier'] = 'field_task_priority_value';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_task_priority_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_task_priority_value']['expose']['reduce'] = TRUE;
/* Filter criterion: Content: Status (field_task_status) */
$handler->display->display_options['filters']['field_task_status_value']['id'] = 'field_task_status_value';
$handler->display->display_options['filters']['field_task_status_value']['table'] = 'field_data_field_task_status';
$handler->display->display_options['filters']['field_task_status_value']['field'] = 'field_task_status_value';
$handler->display->display_options['filters']['field_task_status_value']['value'] = array(
  'open' => 'open',
  'resolved' => 'resolved',
  'deferred' => 'deferred',
  'duplicate' => 'duplicate',
  'close' => 'close',
);
$handler->display->display_options['filters']['field_task_status_value']['group'] = 1;
$handler->display->display_options['filters']['field_task_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_task_status_value']['expose']['operator_id'] = 'field_task_status_value_op';
$handler->display->display_options['filters']['field_task_status_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_task_status_value']['expose']['operator'] = 'field_task_status_value_op';
$handler->display->display_options['filters']['field_task_status_value']['expose']['identifier'] = 'field_task_status_value';
$handler->display->display_options['filters']['field_task_status_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_task_status_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_task_status_value']['expose']['reduce'] = TRUE;
/* Filter criterion: Content: Type (field_task_type) */
$handler->display->display_options['filters']['field_task_type_value']['id'] = 'field_task_type_value';
$handler->display->display_options['filters']['field_task_type_value']['table'] = 'field_data_field_task_type';
$handler->display->display_options['filters']['field_task_type_value']['field'] = 'field_task_type_value';
$handler->display->display_options['filters']['field_task_type_value']['value'] = array(
  'generalTask' => 'generalTask',
  'websiteBug' => 'websiteBug',
  'featureRequest' => 'featureRequest',
  'doojectSanitation' => 'doojectSanitation',
  'outreachingActivity' => 'outreachingActivity',
);
$handler->display->display_options['filters']['field_task_type_value']['group'] = 1;
$handler->display->display_options['filters']['field_task_type_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_task_type_value']['expose']['operator_id'] = 'field_task_type_value_op';
$handler->display->display_options['filters']['field_task_type_value']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_task_type_value']['expose']['operator'] = 'field_task_type_value_op';
$handler->display->display_options['filters']['field_task_type_value']['expose']['identifier'] = 'field_task_type_value';
$handler->display->display_options['filters']['field_task_type_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_task_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_task_type_value']['expose']['reduce'] = TRUE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'field_task_assigned_to_target_id';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Assigned to';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
/* Filter criterion: Search: Search Terms */
$handler->display->display_options['filters']['keys']['id'] = 'keys';
$handler->display->display_options['filters']['keys']['table'] = 'search_index';
$handler->display->display_options['filters']['keys']['field'] = 'keys';
$handler->display->display_options['filters']['keys']['group'] = 1;
$handler->display->display_options['filters']['keys']['exposed'] = TRUE;
$handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
$handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
$handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
$handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
$handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
/* Filter criterion: Content: Author uid */
$handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['filters']['uid_1']['table'] = 'node';
$handler->display->display_options['filters']['uid_1']['field'] = 'uid';
$handler->display->display_options['filters']['uid_1']['value'] = '';
$handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
$handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
$handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
$handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'created' => 'created',
  'name' => 'name',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_task_assigned_to_target_id']['id'] = 'field_task_assigned_to_target_id';
$handler->display->display_options['relationships']['field_task_assigned_to_target_id']['table'] = 'field_data_field_task_assigned_to';
$handler->display->display_options['relationships']['field_task_assigned_to_target_id']['field'] = 'field_task_assigned_to_target_id';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author:';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'team_page' => 'team_page',
  'event' => 'event',
  'team_task' => 'team_task',
);
$handler->display->display_options['filters']['type_1']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'team_page' => 'team_page',
  'event' => 'event',
  'team_task' => 'team_task',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Global: Dependent filter */
$handler->display->display_options['filters']['views_dependent_filter']['id'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter']['table'] = 'views';
$handler->display->display_options['filters']['views_dependent_filter']['field'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter']['group'] = 1;
$handler->display->display_options['filters']['views_dependent_filter']['controller_filter'] = 'type';
$handler->display->display_options['filters']['views_dependent_filter']['controller_values'] = array(
  'team_task' => 'team_task',
  'action' => 0,
  'article' => 0,
  'page' => 0,
  'blog' => 0,
  'laptop' => 0,
  'dootrip' => 0,
  'edoovillage' => 0,
  'gic' => 0,
  'hub' => 0,
  'private_page' => 0,
  'simplenews' => 0,
  'slider_page' => 0,
  'team' => 0,
  'team_page' => 0,
  'event' => 0,
);
$handler->display->display_options['filters']['views_dependent_filter']['dependent_filters'] = array(
  'field_task_priority_value' => 'field_task_priority_value',
  'field_task_status_value' => 'field_task_status_value',
  'field_task_type_value' => 'field_task_type_value',
  'uid' => 'uid',
);
/* Filter criterion: Content: Priority (field_task_priority) */
$handler->display->display_options['filters']['field_task_priority_value']['id'] = 'field_task_priority_value';
$handler->display->display_options['filters']['field_task_priority_value']['table'] = 'field_data_field_task_priority';
$handler->display->display_options['filters']['field_task_priority_value']['field'] = 'field_task_priority_value';
$handler->display->display_options['filters']['field_task_priority_value']['group'] = 1;
$handler->display->display_options['filters']['field_task_priority_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_task_priority_value']['expose']['operator_id'] = 'field_task_priority_value_op';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['label'] = 'Priority';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['operator'] = 'field_task_priority_value_op';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['identifier'] = 'field_task_priority_value';
$handler->display->display_options['filters']['field_task_priority_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
/* Filter criterion: Content: Status (field_task_status) */
$handler->display->display_options['filters']['field_task_status_value']['id'] = 'field_task_status_value';
$handler->display->display_options['filters']['field_task_status_value']['table'] = 'field_data_field_task_status';
$handler->display->display_options['filters']['field_task_status_value']['field'] = 'field_task_status_value';
$handler->display->display_options['filters']['field_task_status_value']['group'] = 1;
$handler->display->display_options['filters']['field_task_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_task_status_value']['expose']['operator_id'] = 'field_task_status_value_op';
$handler->display->display_options['filters']['field_task_status_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_task_status_value']['expose']['operator'] = 'field_task_status_value_op';
$handler->display->display_options['filters']['field_task_status_value']['expose']['identifier'] = 'field_task_status_value';
$handler->display->display_options['filters']['field_task_status_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
/* Filter criterion: Content: Type (field_task_type) */
$handler->display->display_options['filters']['field_task_type_value']['id'] = 'field_task_type_value';
$handler->display->display_options['filters']['field_task_type_value']['table'] = 'field_data_field_task_type';
$handler->display->display_options['filters']['field_task_type_value']['field'] = 'field_task_type_value';
$handler->display->display_options['filters']['field_task_type_value']['group'] = 1;
$handler->display->display_options['filters']['field_task_type_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_task_type_value']['expose']['operator_id'] = 'field_task_type_value_op';
$handler->display->display_options['filters']['field_task_type_value']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_task_type_value']['expose']['operator'] = 'field_task_type_value_op';
$handler->display->display_options['filters']['field_task_type_value']['expose']['identifier'] = 'field_task_type_value';
$handler->display->display_options['filters']['field_task_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'field_task_assigned_to_target_id';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Assigned to';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'allwords';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search terms';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title' => 'title',
  'body' => 'body',
);
/* Filter criterion: Content: Author uid */
$handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['filters']['uid_1']['table'] = 'node';
$handler->display->display_options['filters']['uid_1']['field'] = 'uid';
$handler->display->display_options['filters']['uid_1']['value'] = '';
$handler->display->display_options['filters']['uid_1']['group'] = 1;
$handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
$handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
$handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
$handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
);
/* Filter criterion: Content: Team(s) (og_group_ref) */
$handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
$handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
$handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
$handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
$handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
$handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Team(s)';
$handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
$handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
$handler->display->display_options['filters']['og_group_ref_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
);
$handler->display->display_options['path'] = 'teams-dashboard';


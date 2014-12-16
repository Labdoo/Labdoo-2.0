<?php

$view = new view();
$view->name = 'labdoo_team';
$view->description = 'A listing of all teams.';
$view->tag = 'Teams (OG)';
$view->base_table = 'node';
$view->human_name = 'Labdoo Teams';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Teams';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'body' => 'body',
  'name' => 'name',
  'created' => 'created',
  'group_group' => 'group_group',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'group_group' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: OG membership: OG membership from Node */
$handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
$handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Team';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = 'Description';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
/* Field: Content: Team */
$handler->display->display_options['fields']['group_group']['id'] = 'group_group';
$handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
$handler->display->display_options['fields']['group_group']['field'] = 'group_group';
$handler->display->display_options['fields']['group_group']['label'] = 'Join Link';
$handler->display->display_options['fields']['group_group']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['group_group']['type'] = 'og_group_subscribe';
$handler->display->display_options['fields']['group_group']['settings'] = array(
  'field_name' => '0',
);
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
  'team' => 'team',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'teams';
$handler->display->display_options['menu']['title'] = 'Groups';
$handler->display->display_options['menu']['weight'] = '10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


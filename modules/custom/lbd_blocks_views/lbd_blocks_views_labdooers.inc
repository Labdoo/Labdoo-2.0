<?php

$view = new view();
$view->name = 'labdooers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Labdooers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Labdooers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'gmap';
$handler->display->display_options['style_options']['macro'] = '[gmap width=1175px | height=600px | zoom=2]';
$handler->display->display_options['style_options']['markers'] = 'userrole';
$handler->display->display_options['style_options']['markertype'] = 'orange';
$handler->display->display_options['style_options']['latfield'] = 'field_user_name';
$handler->display->display_options['style_options']['lonfield'] = 'field_user_name';
$handler->display->display_options['style_options']['markerfield'] = 'field_user_name';
$handler->display->display_options['style_options']['geofield'] = 'field_user_name';
$handler->display->display_options['style_options']['enablermt'] = 0;
$handler->display->display_options['style_options']['rmtfield'] = 'field_user_name';
$handler->display->display_options['style_options']['rmtfieldraw'] = 1;
$handler->display->display_options['style_options']['animation'] = '0';
$handler->display->display_options['style_options']['tooltipfield'] = 'city';
$handler->display->display_options['style_options']['bubbletextfield'] = 'field_user_name';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: User: Name */
$handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
$handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
$handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['empty'] = 'labdooer';
/* Field: User: Link */
$handler->display->display_options['fields']['view_user']['id'] = 'view_user';
$handler->display->display_options['fields']['view_user']['table'] = 'users';
$handler->display->display_options['fields']['view_user']['field'] = 'view_user';
$handler->display->display_options['fields']['view_user']['label'] = '';
$handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_user']['alter']['text'] = 'Visit';
$handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance_1']['id'] = 'distance_1';
$handler->display->display_options['filters']['distance_1']['table'] = 'location';
$handler->display->display_options['filters']['distance_1']['field'] = 'distance';
$handler->display->display_options['filters']['distance_1']['operator'] = 'dist';
$handler->display->display_options['filters']['distance_1']['value'] = array(
  'latitude' => '',
  'longitude' => '',
  'postal_code' => '',
  'country' => '',
  'php_code' => '',
  'nid_arg' => '',
  'nid_loc_field' => 'node',
  'uid_arg' => '',
  'search_distance' => '100',
  'search_units' => 'km',
);
$handler->display->display_options['filters']['distance_1']['group'] = 1;
$handler->display->display_options['filters']['distance_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance_1']['expose']['operator_id'] = 'distance_1_op';
$handler->display->display_options['filters']['distance_1']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance_1']['expose']['operator'] = 'distance_1_op';
$handler->display->display_options['filters']['distance_1']['expose']['identifier'] = 'distance_1';
$handler->display->display_options['filters']['distance_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['distance_1']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance_1']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance_1']['origin'] = 'static';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'labdooers';



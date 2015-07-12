<?php

$view = new view();
$view->name = 'GlobalInventory';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Global Inventory';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Inventories';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '500';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'gmap';
$handler->display->display_options['style_options']['macro'] = '[gmap width=1175px | height=600px | zoom=2]';
$handler->display->display_options['style_options']['markers'] = 'nodetype';
$handler->display->display_options['style_options']['markertype'] = 'orange';
$handler->display->display_options['style_options']['latfield'] = 'title';
$handler->display->display_options['style_options']['lonfield'] = 'title';
$handler->display->display_options['style_options']['markerfield'] = 'title';
$handler->display->display_options['style_options']['geofield'] = 'title';
$handler->display->display_options['style_options']['enablermt'] = 0;
$handler->display->display_options['style_options']['rmtfield'] = 'title';
$handler->display->display_options['style_options']['rmtfieldraw'] = 1;
$handler->display->display_options['style_options']['animation'] = '0';
$handler->display->display_options['style_options']['tooltipfield'] = 'title';
$handler->display->display_options['style_options']['bubbletextfield'] = 'title';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
);
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
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance']['id'] = 'distance';
$handler->display->display_options['filters']['distance']['table'] = 'location';
$handler->display->display_options['filters']['distance']['field'] = 'distance';
$handler->display->display_options['filters']['distance']['value'] = array(
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
$handler->display->display_options['filters']['distance']['group'] = 1;
$handler->display->display_options['filters']['distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
$handler->display->display_options['filters']['distance']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => '1',
  3 => 0,
);
$handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance']['origin'] = 'static';

/* Display: Global */
$handler = $view->new_display('page', 'Global', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Global inventory';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2000';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
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
  'edoovillage' => 'edoovillage',
  'hub' => 'hub',
  'laptop' => 'laptop',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Global: Dependent filter */
$handler->display->display_options['filters']['views_dependent_filter']['id'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter']['table'] = 'views';
$handler->display->display_options['filters']['views_dependent_filter']['field'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter']['group'] = 1;
$handler->display->display_options['filters']['views_dependent_filter']['controller_filter'] = 'type';
$handler->display->display_options['filters']['views_dependent_filter']['controller_values'] = array(
  'laptop' => 'laptop',
  'action' => 0,
  'labdoo_action' => 0,
  'article' => 0,
  'page' => 0,
  'blog' => 0,
  'book' => 0,
  'dootrip' => 0,
  'edoovillage' => 0,
  'hub' => 0,
  'private_page' => 0,
);
$handler->display->display_options['filters']['views_dependent_filter']['dependent_filters'] = array(
  'field_status_value' => 'field_status_value',
  'field_hub_laptop_target_id' => 'field_hub_laptop_target_id',
  'country' => 0,
  'title' => 0,
  'title_1' => 0,
);
/* Filter criterion: Global: Dependent filter */
$handler->display->display_options['filters']['views_dependent_filter_1']['id'] = 'views_dependent_filter_1';
$handler->display->display_options['filters']['views_dependent_filter_1']['table'] = 'views';
$handler->display->display_options['filters']['views_dependent_filter_1']['field'] = 'views_dependent_filter';
$handler->display->display_options['filters']['views_dependent_filter_1']['group'] = 1;
$handler->display->display_options['filters']['views_dependent_filter_1']['controller_filter'] = 'type';
$handler->display->display_options['filters']['views_dependent_filter_1']['controller_values'] = array(
  'edoovillage' => 'edoovillage',
  'action' => 0,
  'article' => 0,
  'page' => 0,
  'blog' => 0,
  'book' => 0,
  'slider_page' => 0,
  'laptop' => 0,
  'dootrip' => 0,
  'gic' => 0,
  'node_gallery_gallery' => 0,
  'node_gallery_item' => 0,
  'hub' => 0,
  'labdoo_slide' => 0,
  'simplenews' => 0,
  'private_page' => 0,
  'drupal_wall' => 0,
  'superhub_page' => 0,
  'team' => 0,
  'team_page' => 0,
  'event' => 0,
  'team_task' => 0,
);
$handler->display->display_options['filters']['views_dependent_filter_1']['dependent_filters'] = array(
  'field_edoovillage_status_value' => 'field_edoovillage_status_value',
  'field_hub_target_id' => 'field_hub_target_id',
  'country' => 0,
  'field_status_value' => 0,
  'field_hub_laptop_target_id' => 0,
  'keys' => 0,
);
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance']['id'] = 'distance';
$handler->display->display_options['filters']['distance']['table'] = 'location';
$handler->display->display_options['filters']['distance']['field'] = 'distance';
$handler->display->display_options['filters']['distance']['value'] = array(
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
$handler->display->display_options['filters']['distance']['group'] = 1;
$handler->display->display_options['filters']['distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
$handler->display->display_options['filters']['distance']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => '1',
  3 => 0,
);
$handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance']['origin'] = 'static';
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['group'] = 1;
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['country']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['group'] = 1;
$handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Dooject status';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Source group (field_hub_laptop) */
$handler->display->display_options['filters']['field_hub_laptop_target_id']['id'] = 'field_hub_laptop_target_id';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['table'] = 'field_data_field_hub_laptop';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['field'] = 'field_hub_laptop_target_id';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['group'] = 1;
$handler->display->display_options['filters']['field_hub_laptop_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['operator_id'] = 'field_hub_laptop_target_id_op';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['label'] = 'Hub';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['operator'] = 'field_hub_laptop_target_id_op';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['identifier'] = 'field_hub_laptop_target_id';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Search: Search Terms */
$handler->display->display_options['filters']['keys']['id'] = 'keys';
$handler->display->display_options['filters']['keys']['table'] = 'search_index';
$handler->display->display_options['filters']['keys']['field'] = 'keys';
$handler->display->display_options['filters']['keys']['group'] = 1;
$handler->display->display_options['filters']['keys']['exposed'] = TRUE;
$handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
$handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
$handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
$handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Status (field_edoovillage_status) */
$handler->display->display_options['filters']['field_edoovillage_status_value']['id'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['table'] = 'field_data_field_edoovillage_status';
$handler->display->display_options['filters']['field_edoovillage_status_value']['field'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['group'] = 1;
$handler->display->display_options['filters']['field_edoovillage_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['operator_id'] = 'field_edoovillage_status_value_op';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['label'] = 'Edoovillage status';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['operator'] = 'field_edoovillage_status_value_op';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['identifier'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Coordinating hub(s) (field_hub) */
$handler->display->display_options['filters']['field_hub_target_id']['id'] = 'field_hub_target_id';
$handler->display->display_options['filters']['field_hub_target_id']['table'] = 'field_data_field_hub';
$handler->display->display_options['filters']['field_hub_target_id']['field'] = 'field_hub_target_id';
$handler->display->display_options['filters']['field_hub_target_id']['group'] = 1;
$handler->display->display_options['filters']['field_hub_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_hub_target_id']['expose']['operator_id'] = 'field_hub_target_id_op';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['label'] = 'Coordinating hub(s)';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['operator'] = 'field_hub_target_id_op';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['identifier'] = 'field_hub_target_id';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_hub_target_id']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'map';

/* Display: Dootrips */
$handler = $view->new_display('page', 'Dootrips', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Dootrips';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'gmap';
$handler->display->display_options['style_options']['macro'] = '[gmap width=1175px | height=600px | zoom=2]';
$handler->display->display_options['style_options']['datasource'] = 'fields';
$handler->display->display_options['style_options']['markers'] = 'nodetype';
$handler->display->display_options['style_options']['markertype'] = 'orange';
$handler->display->display_options['style_options']['latfield'] = 'field_destination_of_the_trip';
$handler->display->display_options['style_options']['lonfield'] = 'field_destination_of_the_trip';
$handler->display->display_options['style_options']['markerfield'] = 'title';
$handler->display->display_options['style_options']['geofield'] = 'title';
$handler->display->display_options['style_options']['enablermt'] = 0;
$handler->display->display_options['style_options']['rmtfield'] = 'title';
$handler->display->display_options['style_options']['rmtfieldraw'] = 1;
$handler->display->display_options['style_options']['animation'] = '0';
$handler->display->display_options['style_options']['tooltipfield'] = 'title';
$handler->display->display_options['style_options']['bubbletextfield'] = 'title';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Origin of the trip */
$handler->display->display_options['fields']['field_origin_of_the_trip']['id'] = 'field_origin_of_the_trip';
$handler->display->display_options['fields']['field_origin_of_the_trip']['table'] = 'field_data_field_origin_of_the_trip';
$handler->display->display_options['fields']['field_origin_of_the_trip']['field'] = 'field_origin_of_the_trip';
/* Field: Content: Arrival date */
$handler->display->display_options['fields']['field_arrival_date']['id'] = 'field_arrival_date';
$handler->display->display_options['fields']['field_arrival_date']['table'] = 'field_data_field_arrival_date';
$handler->display->display_options['fields']['field_arrival_date']['field'] = 'field_arrival_date';
$handler->display->display_options['fields']['field_arrival_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Destination of the trip */
$handler->display->display_options['fields']['field_destination_of_the_trip']['id'] = 'field_destination_of_the_trip';
$handler->display->display_options['fields']['field_destination_of_the_trip']['table'] = 'field_data_field_destination_of_the_trip';
$handler->display->display_options['fields']['field_destination_of_the_trip']['field'] = 'field_destination_of_the_trip';
$handler->display->display_options['fields']['field_destination_of_the_trip']['label'] = 'Destination';
/* Field: Content: Departure date */
$handler->display->display_options['fields']['field_departure_date']['id'] = 'field_departure_date';
$handler->display->display_options['fields']['field_departure_date']['table'] = 'field_data_field_departure_date';
$handler->display->display_options['fields']['field_departure_date']['field'] = 'field_departure_date';
$handler->display->display_options['fields']['field_departure_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status_dootrip']['id'] = 'field_status_dootrip';
$handler->display->display_options['fields']['field_status_dootrip']['table'] = 'field_data_field_status_dootrip';
$handler->display->display_options['fields']['field_status_dootrip']['field'] = 'field_status_dootrip';
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
  'dootrip' => 'dootrip',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance']['id'] = 'distance';
$handler->display->display_options['filters']['distance']['table'] = 'location';
$handler->display->display_options['filters']['distance']['field'] = 'distance';
$handler->display->display_options['filters']['distance']['operator'] = 'dist';
$handler->display->display_options['filters']['distance']['value'] = array(
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
$handler->display->display_options['filters']['distance']['group'] = 1;
$handler->display->display_options['filters']['distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
$handler->display->display_options['filters']['distance']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => '1',
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance']['origin'] = 'latlon_gmap';
/* Filter criterion: Content: Status (field_status_dootrip) */
$handler->display->display_options['filters']['field_status_dootrip_value']['id'] = 'field_status_dootrip_value';
$handler->display->display_options['filters']['field_status_dootrip_value']['table'] = 'field_data_field_status_dootrip';
$handler->display->display_options['filters']['field_status_dootrip_value']['field'] = 'field_status_dootrip_value';
$handler->display->display_options['filters']['field_status_dootrip_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['operator_id'] = 'field_status_dootrip_value_op';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['operator'] = 'field_status_dootrip_value_op';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['identifier'] = 'field_status_dootrip_value';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
);
$handler->display->display_options['path'] = 'dootrips';

/* Display: Attachment - Global */
$handler = $view->new_display('attachment', 'Attachment - Global', 'attachment_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Attachment';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '500';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'type' => 'type',
  'city' => 'city',
  'country' => 'country',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'city' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Unfiltered text */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['content'] = 'The above table shows up to 500 results.';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = 'Item';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
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
$handler->display->display_options['fields']['created']['label'] = 'Created on';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Last updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'long';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
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
  'laptop' => 'laptop',
  'dootrip' => 'dootrip',
  'edoovillage' => 'edoovillage',
  'hub' => 'hub',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['group'] = 1;
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['country']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['group'] = 1;
$handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Source group (field_hub_laptop) */
$handler->display->display_options['filters']['field_hub_laptop_target_id']['id'] = 'field_hub_laptop_target_id';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['table'] = 'field_data_field_hub_laptop';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['field'] = 'field_hub_laptop_target_id';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['group'] = 1;
$handler->display->display_options['filters']['field_hub_laptop_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['operator_id'] = 'field_hub_laptop_target_id_op';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['label'] = 'Hub';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['operator'] = 'field_hub_laptop_target_id_op';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['identifier'] = 'field_hub_laptop_target_id';
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_hub_laptop_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
$handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance']['id'] = 'distance';
$handler->display->display_options['filters']['distance']['table'] = 'location';
$handler->display->display_options['filters']['distance']['field'] = 'distance';
$handler->display->display_options['filters']['distance']['value'] = array(
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
$handler->display->display_options['filters']['distance']['group'] = 1;
$handler->display->display_options['filters']['distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
$handler->display->display_options['filters']['distance']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => '1',
  3 => 0,
);
$handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance']['origin'] = 'static';
/* Filter criterion: Search: Search Terms */
$handler->display->display_options['filters']['keys']['id'] = 'keys';
$handler->display->display_options['filters']['keys']['table'] = 'search_index';
$handler->display->display_options['filters']['keys']['field'] = 'keys';
$handler->display->display_options['filters']['keys']['exposed'] = TRUE;
$handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
$handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
$handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
$handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Status (field_edoovillage_status) */
$handler->display->display_options['filters']['field_edoovillage_status_value']['id'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['table'] = 'field_data_field_edoovillage_status';
$handler->display->display_options['filters']['field_edoovillage_status_value']['field'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['operator_id'] = 'field_edoovillage_status_value_op';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['label'] = 'Status (field_edoovillage_status)';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['operator'] = 'field_edoovillage_status_value_op';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['identifier'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_edoovillage_status_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Coordinating hub(s) (field_hub) */
$handler->display->display_options['filters']['field_hub_target_id']['id'] = 'field_hub_target_id';
$handler->display->display_options['filters']['field_hub_target_id']['table'] = 'field_data_field_hub';
$handler->display->display_options['filters']['field_hub_target_id']['field'] = 'field_hub_target_id';
$handler->display->display_options['filters']['field_hub_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_hub_target_id']['expose']['operator_id'] = 'field_hub_target_id_op';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['label'] = 'Coordinating hub(s)';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['operator'] = 'field_hub_target_id_op';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['identifier'] = 'field_hub_target_id';
$handler->display->display_options['filters']['field_hub_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_hub_target_id']['expose']['remember_roles'] = array(
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
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
  'page_1' => 0,
);
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['inherit_exposed_filters'] = TRUE;
$handler->display->display_options['render_pager'] = TRUE;

/* Display: Attachment - Dootrip */
$handler = $view->new_display('attachment', 'Attachment - Dootrip', 'attachment_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Attachment';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_origin_of_the_trip' => 'field_origin_of_the_trip',
  'field_departure_date' => 'field_departure_date',
  'field_destination_of_the_trip' => 'field_destination_of_the_trip',
  'field_arrival_date' => 'field_arrival_date',
  'field_status_dootrip' => 'field_status_dootrip',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_origin_of_the_trip' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_departure_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_destination_of_the_trip' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_arrival_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_status_dootrip' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Origin of the trip */
$handler->display->display_options['fields']['field_origin_of_the_trip']['id'] = 'field_origin_of_the_trip';
$handler->display->display_options['fields']['field_origin_of_the_trip']['table'] = 'field_data_field_origin_of_the_trip';
$handler->display->display_options['fields']['field_origin_of_the_trip']['field'] = 'field_origin_of_the_trip';
$handler->display->display_options['fields']['field_origin_of_the_trip']['label'] = 'Origin';
/* Field: Content: Departure date */
$handler->display->display_options['fields']['field_departure_date']['id'] = 'field_departure_date';
$handler->display->display_options['fields']['field_departure_date']['table'] = 'field_data_field_departure_date';
$handler->display->display_options['fields']['field_departure_date']['field'] = 'field_departure_date';
$handler->display->display_options['fields']['field_departure_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Destination of the trip */
$handler->display->display_options['fields']['field_destination_of_the_trip']['id'] = 'field_destination_of_the_trip';
$handler->display->display_options['fields']['field_destination_of_the_trip']['table'] = 'field_data_field_destination_of_the_trip';
$handler->display->display_options['fields']['field_destination_of_the_trip']['field'] = 'field_destination_of_the_trip';
$handler->display->display_options['fields']['field_destination_of_the_trip']['label'] = 'Destination';
/* Field: Content: Arrival date */
$handler->display->display_options['fields']['field_arrival_date']['id'] = 'field_arrival_date';
$handler->display->display_options['fields']['field_arrival_date']['table'] = 'field_data_field_arrival_date';
$handler->display->display_options['fields']['field_arrival_date']['field'] = 'field_arrival_date';
$handler->display->display_options['fields']['field_arrival_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status_dootrip']['id'] = 'field_status_dootrip';
$handler->display->display_options['fields']['field_status_dootrip']['table'] = 'field_data_field_status_dootrip';
$handler->display->display_options['fields']['field_status_dootrip']['field'] = 'field_status_dootrip';
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
  'dootrip' => 'dootrip',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance']['id'] = 'distance';
$handler->display->display_options['filters']['distance']['table'] = 'location';
$handler->display->display_options['filters']['distance']['field'] = 'distance';
$handler->display->display_options['filters']['distance']['operator'] = 'dist';
$handler->display->display_options['filters']['distance']['value'] = array(
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
$handler->display->display_options['filters']['distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
$handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
$handler->display->display_options['filters']['distance']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance']['origin'] = 'static';
/* Filter criterion: Content: Status (field_status_dootrip) */
$handler->display->display_options['filters']['field_status_dootrip_value']['id'] = 'field_status_dootrip_value';
$handler->display->display_options['filters']['field_status_dootrip_value']['table'] = 'field_data_field_status_dootrip';
$handler->display->display_options['filters']['field_status_dootrip_value']['field'] = 'field_status_dootrip_value';
$handler->display->display_options['filters']['field_status_dootrip_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['operator_id'] = 'field_status_dootrip_value_op';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['operator'] = 'field_status_dootrip_value_op';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['identifier'] = 'field_status_dootrip_value';
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_status_dootrip_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
);
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
  'page' => 0,
);
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['inherit_exposed_filters'] = TRUE;
$handler->display->display_options['inherit_pager'] = TRUE;
$handler->display->display_options['render_pager'] = TRUE;

/* Display: Hubs */
$handler = $view->new_display('page', 'Hubs', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Hubs';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'tree';
$handler->display->display_options['style_options']['main_field'] = 'nid';
$handler->display->display_options['style_options']['parent_field'] = 'field_parent_hub';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
  'country' => 'country',
  'field_types_of_mini_missions' => 'field_types_of_mini_missions',
  'city' => 'city',
);
$handler->display->display_options['row_options']['separator'] = '|';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Parent hub */
$handler->display->display_options['fields']['field_parent_hub']['id'] = 'field_parent_hub';
$handler->display->display_options['fields']['field_parent_hub']['table'] = 'field_data_field_parent_hub';
$handler->display->display_options['fields']['field_parent_hub']['field'] = 'field_parent_hub';
$handler->display->display_options['fields']['field_parent_hub']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_parent_hub']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['label'] = '';
$handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
/* Field: Content: Hub type */
$handler->display->display_options['fields']['field_types_of_mini_missions']['id'] = 'field_types_of_mini_missions';
$handler->display->display_options['fields']['field_types_of_mini_missions']['table'] = 'field_data_field_types_of_mini_missions';
$handler->display->display_options['fields']['field_types_of_mini_missions']['field'] = 'field_types_of_mini_missions';
$handler->display->display_options['fields']['field_types_of_mini_missions']['label'] = 'Type';
$handler->display->display_options['fields']['field_types_of_mini_missions']['delta_offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'hub' => 'hub',
);
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  4 => 0,
);
$handler->display->display_options['path'] = 'hubs';

/* Display: Entity Reference - Doojects possible edoovillages */
$handler = $view->new_display('entityreference', 'Entity Reference - Doojects possible edoovillages', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Doojects possible edoovillages';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'edoovillage' => 'edoovillage',
);
/* Filter criterion: Content: Status (field_edoovillage_status) */
$handler->display->display_options['filters']['field_edoovillage_status_value']['id'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['table'] = 'field_data_field_edoovillage_status';
$handler->display->display_options['filters']['field_edoovillage_status_value']['field'] = 'field_edoovillage_status_value';
$handler->display->display_options['filters']['field_edoovillage_status_value']['value'] = array(
  'open' => 'open',
);

/* Display: Entity Reference - Doojects possible dootrips */
$handler = $view->new_display('entityreference', 'Entity Reference - Doojects possible dootrips', 'entityreference_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Doojects possible dootrips';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'dootrip' => 'dootrip',
);
/* Filter criterion: Content: Status (field_status_dootrip) (translated) */
$handler->display->display_options['filters']['field_status_dootrip_value_i18n']['id'] = 'field_status_dootrip_value_i18n';
$handler->display->display_options['filters']['field_status_dootrip_value_i18n']['table'] = 'field_data_field_status_dootrip';
$handler->display->display_options['filters']['field_status_dootrip_value_i18n']['field'] = 'field_status_dootrip_value_i18n';
$handler->display->display_options['filters']['field_status_dootrip_value_i18n']['value'] = array(
  'DS0' => 'DS0',
);


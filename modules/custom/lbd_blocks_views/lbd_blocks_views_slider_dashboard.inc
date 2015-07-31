<?php

$view = new view();
$view->name = 'slider_dashboard';
$view->description = 'Dashboard with sliders used to display objects like edoovillages and hubs';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Slider Dashboard';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Edoovillage';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
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
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'field_slider_tab' => 'field_slider_tab',
  'title' => 0,
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'title' => 0,
  'field_slider_tab' => 0,
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Slider dashboard - no results';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no results to show';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Content: Tab */
$handler->display->display_options['fields']['field_slider_tab']['id'] = 'field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['table'] = 'field_data_field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['field'] = 'field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['label'] = '';
$handler->display->display_options['fields']['field_slider_tab']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_slider_tab']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<div id="slider_edoovillage_body">
[body]
</div>';
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
  'slider_page' => 'slider_page',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Type (field_type) */
$handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
$handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
$handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
$handler->display->display_options['filters']['field_type_value']['value'] = array(
  'edoovillage' => 'edoovillage',
);
$handler->display->display_options['filters']['field_type_value']['group'] = 1;

/* Display: Page - Edoovillage */
$handler = $view->new_display('page', 'Page - Edoovillage', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Tab */
$handler->display->display_options['fields']['field_slider_tab']['id'] = 'field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['table'] = 'field_data_field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['field'] = 'field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['label'] = '';
$handler->display->display_options['fields']['field_slider_tab']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_slider_tab']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<div id="dashboard_slider_body">
[body]
</div>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Weight (field_slider_weight) */
$handler->display->display_options['sorts']['field_slider_weight_value']['id'] = 'field_slider_weight_value';
$handler->display->display_options['sorts']['field_slider_weight_value']['table'] = 'field_data_field_slider_weight';
$handler->display->display_options['sorts']['field_slider_weight_value']['field'] = 'field_slider_weight_value';
$handler->display->display_options['path'] = 'edoovillage';

/* Display: Page - Hub */
$handler = $view->new_display('page', 'Page - Hub', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Hub';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Tab */
$handler->display->display_options['fields']['field_slider_tab']['id'] = 'field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['table'] = 'field_data_field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['field'] = 'field_slider_tab';
$handler->display->display_options['fields']['field_slider_tab']['label'] = '';
$handler->display->display_options['fields']['field_slider_tab']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_slider_tab']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<div id="dashboard_slider_body">
[body]
</div>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Weight (field_slider_weight) */
$handler->display->display_options['sorts']['field_slider_weight_value']['id'] = 'field_slider_weight_value';
$handler->display->display_options['sorts']['field_slider_weight_value']['table'] = 'field_data_field_slider_weight';
$handler->display->display_options['sorts']['field_slider_weight_value']['field'] = 'field_slider_weight_value';
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
  'slider_page' => 'slider_page',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Type (field_type) */
$handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
$handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
$handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
$handler->display->display_options['filters']['field_type_value']['value'] = array(
  'hub' => 'hub',
);
$handler->display->display_options['filters']['field_type_value']['group'] = 1;
$handler->display->display_options['path'] = 'hub';

/* Display: Block - Hub Doojects */
$handler = $view->new_display('block', 'Block - Hub Doojects', 'block_hub_doojects');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Doojects';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'country' => 'country',
  'field_status' => 'field_status',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
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
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Slider dashboard - no results';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no results to show ';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Dooject ID';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Last updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
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
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Source group (field_hub_laptop) */
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['id'] = 'field_hub_laptop_target_id';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['table'] = 'field_data_field_hub_laptop';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['field'] = 'field_hub_laptop_target_id';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['default_argument_options']['code'] = 'if(!empty($_GET[\'h\']))
  return($_GET[\'h\']);';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_hub_laptop_target_id']['summary_options']['items_per_page'] = '25';
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
  'laptop' => 'laptop',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Block - Hub Edoovillages */
$handler = $view->new_display('block', 'Block - Hub Edoovillages', 'block_hub_edoovillages');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Edoovillages';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'country' => 'country',
  'city' => 'city',
  'field_edoovillage_status' => 'field_edoovillage_status',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'city' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_edoovillage_status' => array(
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
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Edoovillage';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_edoovillage_status']['id'] = 'field_edoovillage_status';
$handler->display->display_options['fields']['field_edoovillage_status']['table'] = 'field_data_field_edoovillage_status';
$handler->display->display_options['fields']['field_edoovillage_status']['field'] = 'field_edoovillage_status';
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
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Coordinating hub(s) (field_hub) */
$handler->display->display_options['arguments']['field_hub_target_id']['id'] = 'field_hub_target_id';
$handler->display->display_options['arguments']['field_hub_target_id']['table'] = 'field_data_field_hub';
$handler->display->display_options['arguments']['field_hub_target_id']['field'] = 'field_hub_target_id';
$handler->display->display_options['arguments']['field_hub_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_hub_target_id']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['field_hub_target_id']['default_argument_options']['code'] = 'if(!empty($_GET[\'h\']))
  return($_GET[\'h\']);';
$handler->display->display_options['arguments']['field_hub_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_hub_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_hub_target_id']['summary_options']['items_per_page'] = '25';
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
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Block - Edovillage Doojects */
$handler = $view->new_display('block', 'Block - Edovillage Doojects', 'block_edoovillage_doojects');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Doojects';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'country' => 'country',
  'field_status' => 'field_status',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
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
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Dooject ID';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Last updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
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
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Edoovillage destination (field_edoovillage_destination) */
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['id'] = 'field_edoovillage_destination_target_id';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['table'] = 'field_data_field_edoovillage_destination';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['field'] = 'field_edoovillage_destination_target_id';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['default_argument_options']['code'] = 'if(!empty($_GET[\'e\']))
  return($_GET[\'e\']);';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_edoovillage_destination_target_id']['summary_options']['items_per_page'] = '25';
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
  'laptop' => 'laptop',
);
$handler->display->display_options['filters']['type']['group'] = 1;


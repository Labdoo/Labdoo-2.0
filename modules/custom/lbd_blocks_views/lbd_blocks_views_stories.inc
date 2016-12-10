<?php

$view = new view();
$view->name = 'labdoo_stories';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Labdoo Stories';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Labdoo Stories';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
);
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['header']['area_text_custom']['content'] = '<img src="/profiles/labdoo/files/pictures/labdoo-stories-header.png" width="550px"/>
<br/>
<br/>
<a href="content/labdoo-stories" target="_blank">[Click here for help on Labdoo Stories]</a>';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_story_edoovillage_target_id']['id'] = 'field_story_edoovillage_target_id';
$handler->display->display_options['relationships']['field_story_edoovillage_target_id']['table'] = 'field_data_field_story_edoovillage';
$handler->display->display_options['relationships']['field_story_edoovillage_target_id']['field'] = 'field_story_edoovillage_target_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['text'] = '<ul><li>[title]</li></ul>';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['relationship'] = 'field_story_edoovillage_target_id';
$handler->display->display_options['fields']['country']['alter']['text'] = '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;country: [country]';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_story_edoovillage_target_id';
$handler->display->display_options['fields']['title_1']['label'] = 'Edoovillage/hub';
$handler->display->display_options['fields']['title_1']['alter']['text'] = '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Edoovillage/hub: [title_1]';
/* Sort criterion: Content statistics: Total views */
$handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
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
  'labdoo_story' => 'labdoo_story',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['relationship'] = 'field_story_edoovillage_target_id';
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
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
  10 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'labdoo-stories';


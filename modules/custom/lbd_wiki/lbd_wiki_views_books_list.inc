<?php

$view = new view();
$view->name = 'wiki';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Wiki';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Wiki Index';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_book_language',
    'rendered' => 1,
    'rendered_strip' => 1,
  ),
);
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
/* Field: Content: Language */
$handler->display->display_options['fields']['field_book_language']['id'] = 'field_book_language';
$handler->display->display_options['fields']['field_book_language']['table'] = 'field_data_field_book_language';
$handler->display->display_options['fields']['field_book_language']['field'] = 'field_book_language';
$handler->display->display_options['fields']['field_book_language']['label'] = '';
$handler->display->display_options['fields']['field_book_language']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_book_language']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
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
  'book' => 'book',
);
/* Filter criterion: Book: Depth */
$handler->display->display_options['filters']['depth']['id'] = 'depth';
$handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
$handler->display->display_options['filters']['depth']['field'] = 'depth';
$handler->display->display_options['filters']['depth']['value']['value'] = '1';
/* Filter criterion: Content: Language (field_book_language) */
$handler->display->display_options['filters']['field_book_language_value']['id'] = 'field_book_language_value';
$handler->display->display_options['filters']['field_book_language_value']['table'] = 'field_data_field_book_language';
$handler->display->display_options['filters']['field_book_language_value']['field'] = 'field_book_language_value';
$handler->display->display_options['filters']['field_book_language_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_book_language_value']['expose']['operator_id'] = 'field_book_language_value_op';
$handler->display->display_options['filters']['field_book_language_value']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['field_book_language_value']['expose']['operator'] = 'field_book_language_value_op';
$handler->display->display_options['filters']['field_book_language_value']['expose']['identifier'] = 'field_book_language_value';
$handler->display->display_options['filters']['field_book_language_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'wiki-index';


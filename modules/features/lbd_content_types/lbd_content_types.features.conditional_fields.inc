<?php
/**
 * @file
 * lbd_content_types.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function lbd_content_types_conditional_fields_default_fields() {
  $items = array();

  $items["node:event:0"] = array(
    'entity' => 'node',
    'bundle' => 'event',
    'dependent' => 'field_send_to_event',
    'dependee' => 'field_send_to_all_event',
    'options' => array(
      'state' => 'visible',
      'condition' => '!checked',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        8 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        9 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        10 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        7 => array(
          1 => '1',
          3 => 0,
        ),
        8 => array(
          1 => '1',
          3 => 0,
        ),
        9 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        10 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  $items["node:superhub_page:0"] = array(
    'entity' => 'node',
    'bundle' => 'superhub_page',
    'dependent' => 'field_linked_pages',
    'dependee' => 'field_superhub_page_type',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        8 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        9 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
        7 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        8 => array(
          1 => '1',
          3 => 0,
        ),
        9 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => 'block',
      'value' => array(
        0 => array(
          'value' => 'block',
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:team_page:0"] = array(
    'entity' => 'node',
    'bundle' => 'team_page',
    'dependent' => 'field_send_to_conversation',
    'dependee' => 'field_send_to_all_conversation',
    'options' => array(
      'state' => 'visible',
      'condition' => '!checked',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        8 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        9 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        7 => array(
          1 => '1',
          3 => 0,
        ),
        8 => array(
          1 => '1',
          3 => 0,
        ),
        9 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  $items["node:team_task:0"] = array(
    'entity' => 'node',
    'bundle' => 'team_task',
    'dependent' => 'field_send_to_task',
    'dependee' => 'field_send_to_all_task',
    'options' => array(
      'state' => 'visible',
      'condition' => '!checked',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        8 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        9 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        7 => array(
          1 => '1',
          3 => 0,
        ),
        8 => array(
          1 => '1',
          3 => 0,
        ),
        9 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  return $items;
}

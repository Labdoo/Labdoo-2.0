<?php
/**
 * @file
 * lbd_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lbd_roles_user_default_roles() {
  $roles = array();

  // Exported role: book writer.
  $roles['book writer'] = array(
    'name' => 'book writer',
    'weight' => '16',
  );

  // Exported role: edoovillage manager.
  $roles['edoovillage manager'] = array(
    'name' => 'edoovillage manager',
    'weight' => '13',
  );

  // Exported role: hub manager.
  $roles['hub manager'] = array(
    'name' => 'hub manager',
    'weight' => '15',
  );

  // Exported role: laptop manager.
  $roles['laptop manager'] = array(
    'name' => 'laptop manager',
    'weight' => '22',
  );

  // Exported role: newsletter manager.
  $roles['newsletter manager'] = array(
    'name' => 'newsletter manager',
    'weight' => '3',
  );

  // Exported role: superhub manager.
  $roles['superhub manager'] = array(
    'name' => 'superhub manager',
    'weight' => '6',
  );

  // Exported role: team manager.
  $roles['team manager'] = array(
    'name' => 'team manager',
    'weight' => '7',
  );

  return $roles;
}

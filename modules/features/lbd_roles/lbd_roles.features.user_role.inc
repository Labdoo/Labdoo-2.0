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

  // Exported role: edoovillage manager.
  $roles['edoovillage manager'] = array(
    'name' => 'edoovillage manager',
    'weight' => '5',
  );

  // Exported role: hub manager.
  $roles['hub manager'] = array(
    'name' => 'hub manager',
    'weight' => '4',
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

  return $roles;
}

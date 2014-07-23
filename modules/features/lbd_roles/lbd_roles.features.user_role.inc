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

  // Exported role: newsletter manager.
  $roles['newsletter manager'] = array(
    'name' => 'newsletter manager',
    'weight' => '3',
  );

  return $roles;
}

<?php
/**
 * @file
 * labdoo_objects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function labdoo_objects_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create laptop content.
  $permissions['create laptop content'] = array(
    'name' => 'create laptop content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own laptop content.
  $permissions['edit own laptop content'] = array(
    'name' => 'edit own laptop content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}

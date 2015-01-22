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

  // Exported permission: create dootrip content.
  $permissions['create dootrip content'] = array(
    'name' => 'create dootrip content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create edoovillage content.
  $permissions['create edoovillage content'] = array(
    'name' => 'create edoovillage content',
    'roles' => array(
      0 => 'edoovillage manager',
      1 => 'hub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create hub content.
  $permissions['create hub content'] = array(
    'name' => 'create hub content',
    'roles' => array(
      0 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create laptop content.
  $permissions['create laptop content'] = array(
    'name' => 'create laptop content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any dootrip content.
  $permissions['delete any dootrip content'] = array(
    'name' => 'delete any dootrip content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any edoovillage content.
  $permissions['delete any edoovillage content'] = array(
    'name' => 'delete any edoovillage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any hub content.
  $permissions['delete any hub content'] = array(
    'name' => 'delete any hub content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own dootrip content.
  $permissions['delete own dootrip content'] = array(
    'name' => 'delete own dootrip content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own edoovillage content.
  $permissions['delete own edoovillage content'] = array(
    'name' => 'delete own edoovillage content',
    'roles' => array(
      0 => 'edoovillage manager',
      1 => 'hub manager',
      2 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hub content.
  $permissions['delete own hub content'] = array(
    'name' => 'delete own hub content',
    'roles' => array(
      0 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any dootrip content.
  $permissions['edit any dootrip content'] = array(
    'name' => 'edit any dootrip content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any edoovillage content.
  $permissions['edit any edoovillage content'] = array(
    'name' => 'edit any edoovillage content',
    'roles' => array(
      0 => 'edoovillage manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hub content.
  $permissions['edit any hub content'] = array(
    'name' => 'edit any hub content',
    'roles' => array(
      0 => 'hub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own dootrip content.
  $permissions['edit own dootrip content'] = array(
    'name' => 'edit own dootrip content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own edoovillage content.
  $permissions['edit own edoovillage content'] = array(
    'name' => 'edit own edoovillage content',
    'roles' => array(
      0 => 'edoovillage manager',
      1 => 'hub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hub content.
  $permissions['edit own hub content'] = array(
    'name' => 'edit own hub content',
    'roles' => array(
      0 => 'superhub manager',
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

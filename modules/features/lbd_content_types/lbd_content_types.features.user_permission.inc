<?php
/**
 * @file
 * lbd_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: view any private_page content.
  $permissions['view any private_page content'] = array(
    'name' => 'view any private_page content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}

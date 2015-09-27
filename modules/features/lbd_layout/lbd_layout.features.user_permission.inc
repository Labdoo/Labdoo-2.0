<?php
/**
 * @file
 * lbd_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  return $permissions;
}

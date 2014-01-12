<?php
/**
 * @file
 * lbd_hybridauth.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_hybridauth_user_default_permissions() {
  $permissions = array();

  // Exported permission: use hybridauth.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'hybridauth',
  );

  return $permissions;
}

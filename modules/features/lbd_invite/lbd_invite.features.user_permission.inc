<?php
/**
 * @file
 * lbd_invite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_invite_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer invitations.
  $permissions['administer invitations'] = array(
    'name' => 'administer invitations',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'invite',
  );

  // Exported permission: send invitations.
  $permissions['send invitations'] = array(
    'name' => 'send invitations',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: send mass invitations.
  $permissions['send mass invitations'] = array(
    'name' => 'send mass invitations',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: track invitations.
  $permissions['track invitations'] = array(
    'name' => 'track invitations',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: view invite statistics.
  $permissions['view invite statistics'] = array(
    'name' => 'view invite statistics',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
      2 => 'translator',
    ),
    'module' => 'invite_stats',
  );

  // Exported permission: view own invite statistics.
  $permissions['view own invite statistics'] = array(
    'name' => 'view own invite statistics',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'invite_stats',
  );

  // Exported permission: withdraw own accepted invitations.
  $permissions['withdraw own accepted invitations'] = array(
    'name' => 'withdraw own accepted invitations',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: withdraw own invitations.
  $permissions['withdraw own invitations'] = array(
    'name' => 'withdraw own invitations',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'invite',
  );

  return $permissions;
}

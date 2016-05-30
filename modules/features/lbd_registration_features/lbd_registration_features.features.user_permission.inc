<?php
/**
 * @file
 * lbd_registration_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_registration_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer event_registration registration.
  $permissions['administer event_registration registration'] = array(
    'name' => 'administer event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own event_registration registration.
  $permissions['administer own event_registration registration'] = array(
    'name' => 'administer own event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration states.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration types.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event_registration registration.
  $permissions['create event_registration registration'] = array(
    'name' => 'create event_registration registration',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event_registration registration other anonymous.
  $permissions['create event_registration registration other anonymous'] = array(
    'name' => 'create event_registration registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'superhub manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event_registration registration other users.
  $permissions['create event_registration registration other users'] = array(
    'name' => 'create event_registration registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'superhub manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event_registration registration self.
  $permissions['create event_registration registration self'] = array(
    'name' => 'create event_registration registration self',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any event_registration registration.
  $permissions['delete any event_registration registration'] = array(
    'name' => 'delete any event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own event_registration registration.
  $permissions['delete own event_registration registration'] = array(
    'name' => 'delete own event_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit event_registration registration state.
  $permissions['edit event_registration registration state'] = array(
    'name' => 'edit event_registration registration state',
    'roles' => array(
      0 => 'administrator',
      1 => 'superhub manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any event_registration registration.
  $permissions['update any event_registration registration'] = array(
    'name' => 'update any event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own event_registration registration.
  $permissions['update own event_registration registration'] = array(
    'name' => 'update own event_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: view event_registration registration.
  $permissions['view event_registration registration'] = array(
    'name' => 'view event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own event_registration registration.
  $permissions['view own event_registration registration'] = array(
    'name' => 'view own event_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}

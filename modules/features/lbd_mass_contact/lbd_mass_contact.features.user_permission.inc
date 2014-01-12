<?php
/**
 * @file
 * lbd_mass_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_mass_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: create mass_contact content.
  $permissions['create mass_contact content'] = array(
    'name' => 'create mass_contact content',
    'roles' => array(
      0 => 'administrator',
      1 => 'translator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any mass_contact content.
  $permissions['delete any mass_contact content'] = array(
    'name' => 'delete any mass_contact content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own mass_contact content.
  $permissions['delete own mass_contact content'] = array(
    'name' => 'delete own mass_contact content',
    'roles' => array(
      0 => 'administrator',
      1 => 'translator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any mass_contact content.
  $permissions['edit any mass_contact content'] = array(
    'name' => 'edit any mass_contact content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own mass_contact content.
  $permissions['edit own mass_contact content'] = array(
    'name' => 'edit own mass_contact content',
    'roles' => array(
      0 => 'administrator',
      1 => 'translator',
    ),
    'module' => 'node',
  );

  // Exported permission: mass contact administer.
  $permissions['mass contact administer'] = array(
    'name' => 'mass contact administer',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact archive messages.
  $permissions['mass contact archive messages'] = array(
    'name' => 'mass contact archive messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact change default sender information.
  $permissions['mass contact change default sender information'] = array(
    'name' => 'mass contact change default sender information',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact include attachments.
  $permissions['mass contact include attachments'] = array(
    'name' => 'mass contact include attachments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact override archiving.
  $permissions['mass contact override archiving'] = array(
    'name' => 'mass contact override archiving',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact override bcc.
  $permissions['mass contact override bcc'] = array(
    'name' => 'mass contact override bcc',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact override text format.
  $permissions['mass contact override text format'] = array(
    'name' => 'mass contact override text format',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact send messages.
  $permissions['mass contact send messages'] = array(
    'name' => 'mass contact send messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  return $permissions;
}

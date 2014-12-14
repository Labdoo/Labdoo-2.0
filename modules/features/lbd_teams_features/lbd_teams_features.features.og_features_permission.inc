<?php
/**
 * @file
 * lbd_teams_features.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function lbd_teams_features_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:team:add user'
  $permissions['node:team:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:administer group'
  $permissions['node:team:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:approve and deny subscription'
  $permissions['node:team:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:create event content'
  $permissions['node:team:create event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:create team_page content'
  $permissions['node:team:create team_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:create team_task content'
  $permissions['node:team:create team_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:delete any event content'
  $permissions['node:team:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:team:delete any team_page content'
  $permissions['node:team:delete any team_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:team:delete any team_task content'
  $permissions['node:team:delete any team_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:team:delete own event content'
  $permissions['node:team:delete own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:delete own team_page content'
  $permissions['node:team:delete own team_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:delete own team_task content'
  $permissions['node:team:delete own team_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:manage members'
  $permissions['node:team:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:manage permissions'
  $permissions['node:team:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:manage roles'
  $permissions['node:team:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:subscribe'
  $permissions['node:team:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:team:subscribe without approval'
  $permissions['node:team:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:team:unsubscribe'
  $permissions['node:team:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:update any event content'
  $permissions['node:team:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:team:update any team_page content'
  $permissions['node:team:update any team_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:team:update any team_task content'
  $permissions['node:team:update any team_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:team:update group'
  $permissions['node:team:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:team:update own event content'
  $permissions['node:team:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:update own team_page content'
  $permissions['node:team:update own team_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:team:update own team_task content'
  $permissions['node:team:update own team_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}

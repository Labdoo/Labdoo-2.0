<?php
/**
 * @file
 * lbd_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lbd_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access printer-friendly version.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: add content to books.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
    ),
    'module' => 'book',
  );

  // Exported permission: administer book outlines.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
    ),
    'module' => 'book',
  );

  // Exported permission: administer newsletters.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      0 => 'administrator',
      1 => 'newsletter manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews settings.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews subscriptions.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      0 => 'administrator',
      1 => 'newsletter manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: create book content.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create new books.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
    ),
    'module' => 'book',
  );

  // Exported permission: create simplenews content.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      0 => 'newsletter manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create superhub_page content.
  $permissions['create superhub_page content'] = array(
    'name' => 'create superhub_page content',
    'roles' => array(
      0 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create team content.
  $permissions['create team content'] = array(
    'name' => 'create team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'team manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create team_page content.
  $permissions['create team_page content'] = array(
    'name' => 'create team_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create team_task content.
  $permissions['create team_task content'] = array(
    'name' => 'create team_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any book content.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any simplenews content.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any superhub_page content.
  $permissions['delete any superhub_page content'] = array(
    'name' => 'delete any superhub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any team content.
  $permissions['delete any team content'] = array(
    'name' => 'delete any team content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any team_page content.
  $permissions['delete any team_page content'] = array(
    'name' => 'delete any team_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any team_task content.
  $permissions['delete any team_task content'] = array(
    'name' => 'delete any team_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own book content.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own simplenews content.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      0 => 'newsletter manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own superhub_page content.
  $permissions['delete own superhub_page content'] = array(
    'name' => 'delete own superhub_page content',
    'roles' => array(
      0 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own team content.
  $permissions['delete own team content'] = array(
    'name' => 'delete own team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'team manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own team_page content.
  $permissions['delete own team_page content'] = array(
    'name' => 'delete own team_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own team_task content.
  $permissions['delete own team_task content'] = array(
    'name' => 'delete own team_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any book content.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any simplenews content.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any superhub_page content.
  $permissions['edit any superhub_page content'] = array(
    'name' => 'edit any superhub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any team content.
  $permissions['edit any team content'] = array(
    'name' => 'edit any team content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any team_page content.
  $permissions['edit any team_page content'] = array(
    'name' => 'edit any team_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any team_task content.
  $permissions['edit any team_task content'] = array(
    'name' => 'edit any team_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit mimemail user settings.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: edit own book content.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own simplenews content.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      0 => 'newsletter manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own superhub_page content.
  $permissions['edit own superhub_page content'] = array(
    'name' => 'edit own superhub_page content',
    'roles' => array(
      0 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own team content.
  $permissions['edit own team content'] = array(
    'name' => 'edit own team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'team manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own team_page content.
  $permissions['edit own team_page content'] = array(
    'name' => 'edit own team_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own team_task content.
  $permissions['edit own team_task content'] = array(
    'name' => 'edit own team_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
      2 => 'edoovillage manager',
      3 => 'hub manager',
      4 => 'newsletter manager',
      5 => 'superhub manager',
      6 => 'team manager',
    ),
    'module' => 'node',
  );

  // Exported permission: send newsletter.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      0 => 'administrator',
      1 => 'newsletter manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: set own user location.
  $permissions['set own user location'] = array(
    'name' => 'set own user location',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: submit latitude/longitude.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: subscribe to newsletters.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'newsletter manager',
      2 => 'superhub manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view all user locations.
  $permissions['view all user locations'] = array(
    'name' => 'view all user locations',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: view own user location.
  $permissions['view own user location'] = array(
    'name' => 'view own user location',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}

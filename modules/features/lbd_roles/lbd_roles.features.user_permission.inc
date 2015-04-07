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

  // Exported permission: access global drupal wall content.
  $permissions['access global drupal wall content'] = array(
    'name' => 'access global drupal wall content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'drupal_wall',
  );

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

  // Exported permission: admin node search exlusions.
  $permissions['admin node search exlusions'] = array(
    'name' => 'admin node search exlusions',
    'roles' => array(),
    'module' => 'search_config',
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

  // Exported permission: administer node gallery.
  $permissions['administer node gallery'] = array(
    'name' => 'administer node gallery',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node_gallery_api',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
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

  // Exported permission: assign book writer role.
  $permissions['assign book writer role'] = array(
    'name' => 'assign book writer role',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign edoovillage manager role.
  $permissions['assign edoovillage manager role'] = array(
    'name' => 'assign edoovillage manager role',
    'roles' => array(
      0 => 'administrator',
      1 => 'superhub manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign hub manager role.
  $permissions['assign hub manager role'] = array(
    'name' => 'assign hub manager role',
    'roles' => array(
      0 => 'administrator',
      1 => 'superhub manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: clone node.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: clone own nodes.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'clone',
  );

  // Exported permission: create book content.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'node',
  );

  // Exported permission: create drupal_wall content.
  $permissions['create drupal_wall content'] = array(
    'name' => 'create drupal_wall content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create labdoo_slide content.
  $permissions['create labdoo_slide content'] = array(
    'name' => 'create labdoo_slide content',
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

  // Exported permission: create node_gallery_gallery content.
  $permissions['create node_gallery_gallery content'] = array(
    'name' => 'create node_gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create node_gallery_item content.
  $permissions['create node_gallery_item content'] = array(
    'name' => 'create node_gallery_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'edoovillage manager',
      2 => 'hub manager',
      3 => 'superhub manager',
    ),
    'module' => 'node',
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

  // Exported permission: delete any drupal_wall content.
  $permissions['delete any drupal_wall content'] = array(
    'name' => 'delete any drupal_wall content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any labdoo_slide content.
  $permissions['delete any labdoo_slide content'] = array(
    'name' => 'delete any labdoo_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any node_gallery_gallery content.
  $permissions['delete any node_gallery_gallery content'] = array(
    'name' => 'delete any node_gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any node_gallery_item content.
  $permissions['delete any node_gallery_item content'] = array(
    'name' => 'delete any node_gallery_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'edoovillage manager',
      2 => 'hub manager',
      3 => 'superhub manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any simplenews content.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      0 => 'administrator',
    ),
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

  // Exported permission: delete own drupal_wall content.
  $permissions['delete own drupal_wall content'] = array(
    'name' => 'delete own drupal_wall content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own labdoo_slide content.
  $permissions['delete own labdoo_slide content'] = array(
    'name' => 'delete own labdoo_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own node_gallery_gallery content.
  $permissions['delete own node_gallery_gallery content'] = array(
    'name' => 'delete own node_gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own node_gallery_item content.
  $permissions['delete own node_gallery_item content'] = array(
    'name' => 'delete own node_gallery_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'edoovillage manager',
      2 => 'hub manager',
      3 => 'superhub manager',
    ),
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

  // Exported permission: edit any drupal_wall content.
  $permissions['edit any drupal_wall content'] = array(
    'name' => 'edit any drupal_wall content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any labdoo_slide content.
  $permissions['edit any labdoo_slide content'] = array(
    'name' => 'edit any labdoo_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any node_gallery_gallery content.
  $permissions['edit any node_gallery_gallery content'] = array(
    'name' => 'edit any node_gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any node_gallery_item content.
  $permissions['edit any node_gallery_item content'] = array(
    'name' => 'edit any node_gallery_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'edoovillage manager',
      2 => 'hub manager',
      3 => 'superhub manager',
    ),
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

  // Exported permission: edit own drupal_wall content.
  $permissions['edit own drupal_wall content'] = array(
    'name' => 'edit own drupal_wall content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own labdoo_slide content.
  $permissions['edit own labdoo_slide content'] = array(
    'name' => 'edit own labdoo_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own node_gallery_gallery content.
  $permissions['edit own node_gallery_gallery content'] = array(
    'name' => 'edit own node_gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own node_gallery_item content.
  $permissions['edit own node_gallery_item content'] = array(
    'name' => 'edit own node_gallery_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'edoovillage manager',
      2 => 'hub manager',
      3 => 'superhub manager',
    ),
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

  // Exported permission: flag labdoo_like_flag.
  $permissions['flag labdoo_like_flag'] = array(
    'name' => 'flag labdoo_like_flag',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: menu view unpublished.
  $permissions['menu view unpublished'] = array(
    'name' => 'menu view unpublished',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
    ),
    'module' => 'menu_view_unpublished',
  );

  // Exported permission: publish any book content.
  $permissions['publish any book content'] = array(
    'name' => 'publish any book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable book content.
  $permissions['publish editable book content'] = array(
    'name' => 'publish editable book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own book content.
  $permissions['publish own book content'] = array(
    'name' => 'publish own book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'publishcontent',
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

  // Exported permission: search action content.
  $permissions['search action content'] = array(
    'name' => 'search action content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search all content.
  $permissions['search all content'] = array(
    'name' => 'search all content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search all excluded entities.
  $permissions['search all excluded entities'] = array(
    'name' => 'search all excluded entities',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search article content.
  $permissions['search article content'] = array(
    'name' => 'search article content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search blog content.
  $permissions['search blog content'] = array(
    'name' => 'search blog content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search book content.
  $permissions['search book content'] = array(
    'name' => 'search book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: search dootrip content.
  $permissions['search dootrip content'] = array(
    'name' => 'search dootrip content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search drupal_wall content.
  $permissions['search drupal_wall content'] = array(
    'name' => 'search drupal_wall content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search edoovillage content.
  $permissions['search edoovillage content'] = array(
    'name' => 'search edoovillage content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search gic content.
  $permissions['search gic content'] = array(
    'name' => 'search gic content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search hub content.
  $permissions['search hub content'] = array(
    'name' => 'search hub content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search labdoo_slide content.
  $permissions['search labdoo_slide content'] = array(
    'name' => 'search labdoo_slide content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search laptop content.
  $permissions['search laptop content'] = array(
    'name' => 'search laptop content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search node_gallery_gallery content.
  $permissions['search node_gallery_gallery content'] = array(
    'name' => 'search node_gallery_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search node_gallery_item content.
  $permissions['search node_gallery_item content'] = array(
    'name' => 'search node_gallery_item content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search page content.
  $permissions['search page content'] = array(
    'name' => 'search page content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search private_page content.
  $permissions['search private_page content'] = array(
    'name' => 'search private_page content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: search simplenews content.
  $permissions['search simplenews content'] = array(
    'name' => 'search simplenews content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search slider_page content.
  $permissions['search slider_page content'] = array(
    'name' => 'search slider_page content',
    'roles' => array(),
    'module' => 'search_config',
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

  // Exported permission: unflag labdoo_like_flag.
  $permissions['unflag labdoo_like_flag'] = array(
    'name' => 'unflag labdoo_like_flag',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: unpublish any book content.
  $permissions['unpublish any book content'] = array(
    'name' => 'unpublish any book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable book content.
  $permissions['unpublish editable book content'] = array(
    'name' => 'unpublish editable book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own book content.
  $permissions['unpublish own book content'] = array(
    'name' => 'unpublish own book content',
    'roles' => array(
      0 => 'book writer',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: upload to all galleries.
  $permissions['upload to all galleries'] = array(
    'name' => 'upload to all galleries',
    'roles' => array(
      0 => 'administrator',
      1 => 'edoovillage manager',
      2 => 'hub manager',
      3 => 'superhub manager',
    ),
    'module' => 'node_gallery_api',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
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

  // Exported permission: use text format filtered_html_advanced.
  $permissions['use text format filtered_html_advanced'] = array(
    'name' => 'use text format filtered_html_advanced',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
      2 => 'newsletter manager',
      3 => 'superhub manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
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

  // Exported permission: view any unpublished book content.
  $permissions['view any unpublished book content'] = array(
    'name' => 'view any unpublished book content',
    'roles' => array(
      0 => 'administrator',
      1 => 'book writer',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished drupal_wall content.
  $permissions['view any unpublished drupal_wall content'] = array(
    'name' => 'view any unpublished drupal_wall content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished labdoo_slide content.
  $permissions['view any unpublished labdoo_slide content'] = array(
    'name' => 'view any unpublished labdoo_slide content',
    'roles' => array(),
    'module' => 'view_unpublished',
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

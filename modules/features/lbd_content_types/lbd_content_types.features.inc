<?php
/**
 * @file
 * lbd_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lbd_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lbd_content_types_node_info() {
  $items = array(
    'action' => array(
      'name' => t('Action'),
      'base' => 'node_content',
      'description' => t('Actions are tasks carried out within the Labdoo aid network that contribute towards the mission of bringing education to children. Nodes of this type are automatically created.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Team Event'),
      'base' => 'node_content',
      'description' => t('Create a new event (for instance, to set up a laptop sanitation workshop, to get together with your team members, etc.)'),
      'has_title' => '1',
      'title_label' => t('Event title'),
      'help' => '',
    ),
    'gic' => array(
      'name' => t('GIC'),
      'base' => 'node_content',
      'description' => t('GIC nodes are created every time someone submits a GIC table. GIC nodes are snapshots of these GIC table submissions that are used to track changes in an edoovillage\'s inventory.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'private_page' => array(
      'name' => t('Private page'),
      'base' => 'node_content',
      'description' => t('Pages that can only be accessed by registered users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slider_page' => array(
      'name' => t('Slider page'),
      'base' => 'node_content',
      'description' => t('Page to be used in a views slideshow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'superhub_page' => array(
      'name' => t('Superhub Page'),
      'base' => 'node_content',
      'description' => t('Super hubs can create their own specific content pages using this type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('A team is a group of Labdooers organized around one subject topic to share ideas, thoughts, content, etc.'),
      'has_title' => '1',
      'title_label' => t('Team Name'),
      'help' => '',
    ),
    'team_page' => array(
      'name' => t('Team Conversation'),
      'base' => 'node_content',
      'description' => t('Use team conversations to share your ideas or experiences with other Labdoo users within a given team.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team_task' => array(
      'name' => t('Team Task'),
      'base' => 'node_content',
      'description' => t('Define and manage tasks to be carried out (for instance, certain outreaching activity, a reminder to meet up for a laptop sanitation event, etc.)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

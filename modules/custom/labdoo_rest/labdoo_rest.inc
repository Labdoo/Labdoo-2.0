<?php
/**
 * @defgroup labdoorest LabdooRest: REST API to publish labdoo services
 *
 * This module include all called functions via REST.
 *
 */

/**
 * @file
 * File with module functions
 *
 * @ingroup labdoorest
 */

require_once drupal_get_path('module', 'labdoo_rest') . '/laptop.class.inc';

/**
 * Return the node of laptop we need
 * @param string $id
 *  Laptop identifier
 * @return array with all the laptop information
 *  
 */
function _laptop_retrieve($id) {
  global $user;

  $node = node_load($id);
  if ($node === FALSE) {
    //Add watchdog
    return '404';
  }

  if ($user->uid == $node->uid) {
    $laptop = new laptop($id);
    return $laptop->arrayOutput();
  } else  {
    watchdog('debug',"It was impossible to authenticate the user.");
  }
  //Add watchdog
  return '403';
}

/**
 * Return the laptop list we need
 * @return array with all user's laptop
 *  
 */
//FIXME pending to finish and test....
function _laptop_index() {
  global $user;
  $uid = $user->uid;
  $nodes = laptop::node_list_by_uid($uid);
  return $nodes;
}

/**
 * Create a laptop with the input parameters
 * @data Laptop information to create new instance
 * @return array with the identifier laptop
 *  
 */
function _laptop_create($data) {
	$laptop = new laptop();
	global $user;
  $data['uid'] = $user->uid;
  $laptop->setNode($data);
  $laptop->save();
	return (object)array(
	    'id' => $laptop->getNid(),
      'uri' => services_resource_uri(array('laptop', $data->id)),
  );
}

//TODO Implement a correct method to update values.... it is a bad practise to overwrite all previous information
/**
 * Update a laptop with the input parameters
 * @nid Identifier to updated laptop
 * @data Laptop information to update the laptop instance
 * @return array with the identifier laptop
 */
function _laptop_update($nid,$data) {
  global $user;
  $node = node_load($nid);

  if ($node === FALSE) {
    //Add watchdog
    return '404';
  }
  if ($user->uid == $node->uid) {
	  $laptop = new laptop($nid);
	  unset($data->created);
	  $data->modified = time();
    //node_save($node);
    $laptop->updateNode($data);
    $laptop->save();
	  return (object)array(
     	  'id' => $node->nid,
    	  'uri' => services_resource_uri(array('laptop', $data->id)),
    );
   }
}

/**
 * Delete a laptop
 * @nid Identifier to deleted  laptop
 * @return array with the identifier laptop
 */
function _laptop_delete($id) {
	node_delete($id);
	return (object)array (
		'id' => $id,
    'uri' => services_resource_uri(array('laptop', $data->id)),
	);
}

/**
  Hardcoded method to configure access permissions. Permissions are configured
  via token authentication.
*/
function _laptop_access($op, $args) {
	return true;
}

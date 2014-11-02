<?php
require_once drupal_get_path('module', 'lbd_labdoo_rest') . '/laptop.class.inc';
/**
 * return the laptop we need.
 * @param id Node identifier to get information.
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
 * return the laptop list of the user with uid $uid.
 */
//FIXME pending to finish and test....
function _laptop_index() {
  global $user;
  $uid = $user->uid;
  $nodes = laptop::node_list_by_uid($uid);
  return $nodes;
}

/**
 * Service operation to create a new dooject. In this case it only permits create laptops.
 * @param data Dooject information to create new object.
 */
function _laptop_create($data) {
	$laptop = new laptop();
	global $user;
  $data['uid'] = $user->uid;
  $laptop->setNode($data);
  $laptop->save();
	return (object)array(
	    'id' => $laptop->getNid(),
      'uri' => services_resource_uri(array('dooject', $data->id)),
  );
}

/**
* Service operation to update laptop information.
* @param nid Laptop identifier to update.
* @param data Data information to update laptop.
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
  $laptop->updateNode($data);
  $laptop->save();
	return (object)array(
    	'id' => $node->nid,
    	'uri' => services_resource_uri(array('dooject', $data->id)),
  );

  }
}
/**
* Deletes laptop.
* @param id Laptop identifier to delete.
*/
function _laptop_delete($id) {
	node_delete($id);
	return (object)array (
		'id' => $id,
	);
}

/**
* Function to specify access to the operation.
* @param op Operation name.
* @param args Argument operation.
* @return returns access for the laptop operation.
*/
function _laptop_access($op, $args) {
	return true;
}

<?
/**
 * @defgroup labdoorest LabdooRest: Module a mock to test the REST service
 *
 * This module implements a Mock Service
 *
 */

require_once drupal_get_path('module', 'labdoo_rest') . '/laptop.class.inc';

function _laptop_retrieve_mock($id) {
	$laptop = new laptop();
	$laptop->setTitle("Mock object");
	$laptop->setNid("1");
	$laptop->setVid("1");
	$laptop->setUid("1");

	//TODO pending to test
	return $laptop;
}

function _laptop_index_mock() {
	return NULL;
}

function _laptop_create_mock($data) {

  return (object)array (
	'id' =>  "1",
	'uri' => "uri::/myide/1";
	);
}

function _laptop_update_mock($id,$data) {
	return (object)array (
	'id' => $id,
	'uri' => services_resource_uri(array('laptop',$id));
	);
}

function _laptop_delete_mock($id) {
	return (object)array (
		'id' => $id,
	);
}







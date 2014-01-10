<?php

function _laptop_create($data) {
  global $user;
  if (isset($data) &&  is_array($data)) $data=(object) $data;
  unset($data->id);
  $data->uid = $user->uid;
  $data->created = time();
  $data->modified = time();
  if (!isset($data->subject)) {
    return services_error('Missing note attribute subject', 406);
  }
  if (!isset($data->note)) {
    return services_error('Missing note attribute note', 406);
  }
  labdoo_rest_write_laptop($data);
  return (object)array(
    'id' => $data->id,
    'uri' => services_resource_uri(array('laptop', $data->id)),
  );
}

function _laptop_update($id, $data) {
  global $user;
  $laptop = labdoo_rest_get_laptop($id);
  unset($data->created);
  $data->id = $id;
  $data->uid = $note->uid;
  $data->modified = time();
  labdoo_rest_write_laptop($data);
  return (object)array(
    'id' => $id,
    'uri' => services_resource_uri(array('note', $id)),
  );
}

function _laptop_retrieve($id) {
  return labdoo_rest_get_laptop($id);
}

function _laptop_delete($id) {
  labdoo_rest_delete_laptop($id);
  return (object)array(
    'id' => $id,
  );
}
function _laptop_index($page, $parameters) {
  global $user;
  $laptop = array();
 /* $res = db_query('SELECT * FROM {note} WHERE uid=:uid ORDER BY modified DESC',
           array(':uid' => $user->uid));
  foreach ($res as $note) {
    $notes[] = $note;
  }*/
  return $laptop;
}

function _laptop_access($op, $args) {
 /* global $user;
  $access = FALSE;
  switch ($op) {
    case 'view':
      $note = noteresource_get_note($args[0]);
      $access = user_access('note resource view any note');
      $access = $access || $note->uid == $user->uid && user_access('note resource view own notes');
      break;
    case 'update':
      $note = noteresource_get_note($args[0]->id);
      $access = user_access('note resource edit any note');
      $access = $access || $note->uid == $user->uid && user_access('note resource edit own notes');
      break;
    case 'delete':
      $note = noteresource_get_note($args[0]);
      $access = user_access('note resource delete any note');
      $access = $access || $note->uid == $user->uid && user_access('note resource delete own notes');
      break;
  }
  $access = TRUE;*/
  return $access;
}
?>

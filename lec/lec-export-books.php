<?php

/*
 * Export a book from the Labdoo database to XML LEC format.
 *
 * See lec.php for more information about LEC.
 *
 */

include 'lec.php';

$fields[0]['name'] = 'field_book_language';
$fields[0]['type'] = 'value';
$fields[1]['name'] = 'field_is_first_page';
$fields[1]['type'] = 'value';
$fields[2]['name'] = 'field_reference_book';
$fields[2]['type'] = 'target_id';
$fields[3]['name'] = 'body';
$fields[3]['type'] = 'value';
$fields[4]['name'] = 'book';
$fields[4]['type'] = 'book_array';
$fields[4]['keys'] = array('bid', 'plid');

_export_nodes('book', $fields);

?>


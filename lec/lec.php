<?php

/*
 * Labdoo Export Content (LEC) utility.
 * 
 * This module implements a mechanism to export Labdoo content (nodes) to a 
 * readable file format so that it can be stored in a general revision control
 * repository (e.g. git). The chosen file format is XML.
 *
 * In the case of Labdoo, we use git as a repo. So the workflow to export/import
 * content is as follows:
 *
 *   Drupal => [LEC-export] => XML file(s) => [push to git repo] =>
 *   => [pull from git repo] => XML file(s) => [LEC-export] => Drupal.
 *
 * Note: currently, this module only supports 'book' content types. This is
 * because in Labdoo, we only keep in the git repo this type of content
 * types. The rest of the content types are kept in the SQL database and managed
 * using the migration module. However, this utility can be extended
 * to support other content types using the same basic framework.
 *
 * Supported version(s): D7.
 *
 */

/**
 *
 * Normalizes a string so it can be used as a file name
 *
 * @param string $str
 *   The string to normalize
 * @return string
 *   The normalized string
 *
 */
function normalize_string($str = '')
{
    $str = strip_tags($str); 
    $str = preg_replace('/[\r\n\t ]+/', ' ', $str);
    $str = preg_replace('/[\"\*\/\:\<\>\?\'\|]+/', ' ', $str);
    $str = strtolower($str);
    $str = html_entity_decode( $str, ENT_QUOTES, "utf-8" );
    $str = htmlentities($str, ENT_QUOTES, "utf-8");
    $str = preg_replace("/(&)([a-z])([a-z]+;)/i", '$2', $str);
    $str = str_replace(' ', '-', $str);
    $str = rawurlencode($str);
    $str = str_replace('%', '-', $str);
    return $str;
}


/**
 *
 * Writes a field into the lec file
 *
 * @param file $fd 
 *   The file descriptor of the lec file
 * @param string $fieldName 
 *   The field name
 * @param string $fieldType 
 *   The field type 
 * @param string $fieldValue 
 *   The field value
 *
 */
function _write_field($fd, $fieldName, $fieldType, $fieldValue) {
  fwrite($fd, "<$fieldName>\n");
  fwrite($fd, "<type>$fieldType</type>\n"); 
  fwrite($fd, "<value>$fieldValue</value>\n"); 
  fwrite($fd, "</$fieldName>\n");
  return;
}


/**
 *
 * Writes the header of a lec file
 *
 * @param file $fd 
 *   File descriptor of the lec file
 * @param string $nodeType 
 *   Type of the node being exported
 *
 */
function _write_header($fd, $nodeType) {
  fwrite($fd, "<$nodeType>\n");
  return;
}


/**
 *
 * Writes the trailer of a lec file
 *
 * @param file $fd 
 *   File descriptor of the lec file
 * @param string $nodeType 
 *   Type of the node being exported
 *
 */
function _write_trailer($fd, $nodeType) {
  fwrite($fd, "</$nodeType>\n");
  return;
}


/**
 * 
 * Export all nodes of a given type into a lec file
 *
 * @param string $nodeType
 *   The type of nodes to be exported
 * @param array $fields 
 *   List of fields in the nodes
 *
 */
function _export_nodes($nodeType, $fields) {
  $query = "SELECT nid, title FROM node WHERE type='$nodeType' ORDER BY title ASC";
  $result = db_query($query);

  $lbdRootPath = DRUPAL_ROOT . "/" . drupal_get_path('profile', 'labdoo');
  $exportPath = $lbdRootPath . "/" . "content/$nodeType" . "/";

  foreach($result as $node) {
    $nodeTitle = $node->title;
    $nodeAlias = normalize_string($nodeTitle); 
    $nodeFileName = $exportPath . $nodeAlias . ".xml"; 
    $nodeLoaded = node_load($node->nid);

    if($nodeLoaded->status != NODE_PUBLISHED)
      continue;

    $fileDesc = fopen($nodeFileName, "w") or die("Unable to open file " . $nodeFileName . "\n");

    _write_header($fileDesc, $nodeType);

    // Node ID (used to resolve nodes cross references (e.g., entity references)
    _write_field($fileDesc, 'nid', 'node_id', $node->nid);

    // Title
    _write_field($fileDesc, 'title', 'node_title', $nodeTitle);

    // Fields
    foreach($fields as $field) {
      $fieldName = $field['name'];
      $fieldType = $field['type'];
      switch($fieldType) {
      case 'book_array':
        $arrayField = $nodeLoaded->book;
        foreach($field['keys'] as $key) {
          _write_field($fileDesc, $key, $fieldType, $arrayField[$key]);
        }
        break;
      default:
        if($nodeLoaded->$fieldName) {
          foreach(field_get_items('node', $nodeLoaded, $fieldName) as $element) {
            $fieldValue = $element[$fieldType];
            _write_field($fileDesc, $fieldName, $fieldType, $fieldValue);
          }
        }
        break;
      }
    }

    _write_trailer($fileDesc, $nodeType);
    drupal_set_message("Exported node '" . $nodeTitle . "'"); 
    fclose($fileDesc);
  }

  return;
}


/**
 * 
 * Import all nodes of a given type from a lec file
 *
 */
function _import_nodes($nodeType, $fields) {
  static $lec_nid_mappings  = array(); // Mapping from a node's old nid to its new nid
  static $lec_mlid_mappings = array(); // Mapping from a node's old mlid to its new mlid
  static $lec_nodes_pending = array(); // List of nids of pending nodes (nodes that can't be 

  $lbdRootPath = DRUPAL_ROOT . "/" . drupal_get_path('profile', 'labdoo');
  $exportPath = $lbdRootPath . "/" . "content/$nodeType" . "/";

  $fileNamesList = scandir($exportPath);

  do {
    foreach($fileNamesList as $fileName) {

      if($fileName == "." or $fileName == "..")
        continue;

      $lecNode = simplexml_load_file($exportPath . $fileName) or die("Unable to parse file " . $fileName . "\n");
      $origNodeId = $lecNode->nid->value->__toString();
      $origNodePlid = $lecNode->plid->value->__toString();
      $origNodeMlid = $lecNode->mlid->value->__toString();

      // Don't process this node if it was already processed
      if(array_key_exists($origNodeId, $lec_nid_mappings))
        continue;

      // If the node with ID field_reference_book has not been 
      // created yet and is different than this node nid or
      // if this is not the parent page of a book and
      // the parent node has not been created yet,
      // then put this node in the list of pending nodes i
      // to be created later once all of its parents are created.
      if((($lecNode->field_reference_book) &&  
          ($lecNode->field_reference_book->value->__toString() != $origNodeId) &&
          (!array_key_exists($lecNode->field_reference_book->value->__toString(), $lec_nid_mappings))) 
         ||
         (($lecNode->plid->value->__toString() != 0) &&
          (!array_key_exists($lecNode->plid->value->__toString(), $lec_mlid_mappings)))) 
      {
        $lec_nodes_pending[$origNodeId] = 1;
        continue;
      }

      $node = new stdClass();
      $node->type = $nodeType;
      node_object_prepare($node);

      $node->title = $lecNode->title->value->__toString();
      $node->language = LANGUAGE_NONE;

      /*
       * Do first all the generic work
       */
      foreach($fields as $field) {
        $fieldName = $field['name'];
        $fieldType = $field['type'];
        if($fieldType != 'book_array') {
          foreach($lecNode->{$fieldName} as $element) {
            if($element->type->__tostring() != $fieldType)
              continue;
            $fieldValue = $element->value->asXML();
            // Strip the field name tag
            $fieldValue = str_replace("<value>", "", $fieldValue); 
            $fieldValue = str_replace("</value>", "", $fieldValue); 
            $node->{$fieldName}[$node->language][0][$fieldType] = $fieldValue; 
          }
        }
        else {
          foreach($field['keys'] as $key) {
            // The book_array field conveys the key name via the fieldname
            $fieldValue = $lecNode->{$key}->value->__toString();
            $node->{$fieldName}[$key] = $fieldValue;
          }
        }
      }

      /*
       * Do content type specifig work
       */
      switch($nodeType) {
        case 'book':
          if($lecNode->field_reference_book->value->__toString() != $origNodeId) {
            $node->field_reference_book[$node->language][0]['target_id'] = 
                $lec_nid_mappings[$node->field_reference_book[$node->language][0]['target_id']];
          }
          if($lecNode->plid->value->__toString() != '0') {
            // It's not the first page of the book, so all entity 
            // references must be properly mapped overwritting their
            // current value.
            $node->book['bid'] = $lec_nid_mappings[$node->book['bid']];
            $node->book['plid'] = $lec_mlid_mappings[$node->book['plid']];
          }
          else {
            $node->book['bid'] = 'new';
            $node->book['plid'] = 0;
          }
          break;
        default:
          break;
      }

      /*
       * Create the node
       */
      drupal_set_message("Imported node '" . $node->title . "'"); 
      node_save($node);

      /*
       * Save reference fields 
       */
      $lec_nid_mappings[$origNodeId] = $node->nid;

      /*
       * Do post node creation work specific to content type
       */
      switch($nodeType) {
        case 'book':
          $lec_mlid_mappings[$origNodeMlid] = $node->book['mlid']; 
          break;
        default:
          break;
      }
      if(array_key_exists($origNodeId, $lec_nodes_pending))
        unset($lec_nodes_pending[$origNodeId]);
    }
  } while(!empty($lec_nodes_pending));

  return;
}

?>


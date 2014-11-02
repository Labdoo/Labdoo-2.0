<?php
/**
 * @file
 * Class file for the Labdoo Rest module
 *
 * @ingroup labdoorest 
 */


/**
 *
 * Class to represent a laptop object
 */
class laptop {

  public $nodeInfo;
  public $type = 'laptop';


  /* Create a new node or restore an existing node */
  function __construct($data = NULL) {
    // Get from nid
    if (!is_int($data) && !is_string($data)) {
      return NULL;
    }
    $laptop = node_load($data);
    if ($laptop == FALSE) {
      return NULL;
    }
    $this->nodeInfo = $laptop;
    return;
  }

/**
 * Get node identifier
 *
 * @return returns the object identifier.
 *
 */
  public function getNid() {
    return $this->nodeInfo->nid;
  }

  /**
   * @param sts the $status to set
   */
  public function setStatus($sts) {
    $this->nodeInfo->field_status['und'][0]['value']=$sts;
  }

  /**
  * Save node information in the database
  */
  public function save(){
    node_save($this->nodeInfo);
  }


  public function setEdooVillageDestination($id) {
    $this->nodeInfo->field_edoovillage_destination['und'][0]['target_id']=$id;
  }


  public function setManager($id) {
    $this->nodeInfo->field_manager['und'][0]['target_id']=$id;
  }


  public function setTagger($id) {
    $this->nodeInfo->field_tagger['und'][0]['target_id']=$id;
  }

  public function setAdditionalEditors($id) {
    $this->nodeInfo->field_additional_editors['und'][0]['target_id']=$id;
  }
 
 public function setNid($nid) {
    $this->nodeInfo->nid = $nid;
}

 public function setVid($vid) {
    $this->nodeInfo->vid = $vid;
 }

 public function setTitle($title) {
    $this->nodeInfo->title = $title;
}

   /**
   * Updates the node information 
   */
   public function updateNode($node){
    $this->nodeInfo->title = $node['title'];
    $this->nodeInfo->type = $this->type;
    
    if (array_key_exists("field_edoovillage_destination",$node)) {
      $this->setEdooVillageDestination($node['field_edoovillage_destination']);
    }
     if (array_key_exists("field_manager",$node)) {
      $this->setManager($node['field_manager']);
    }
    if (array_key_exists("field_tagger",$node)) {
      $this->setTagger($node['field_tagger']);
    }
   if (array_key_exists("field_additional_editors",$node)) {
      $this->setAdditionalEditors($node['field_additional_editors']);
   }
  }

//FIXME fix another parameters
//FIXME define language
  /**
  * Set node information from the given parameter
  * @param node parameters to fill in the object.
  */
  public function setNode($node){
    $this->nodeInfo = $this->arrayToObject($node); 
    $this->updateNode($node);
    $this->nodeInfo->vid = $node['vid'];
    $this->nodeInfo->uid = $node['uid'];
  }

  /**
  * Function to return an array from an object class
  * @return Array result.
  */
  public function arrayOutput(){
    return $this->objectToArray($this->nodeInfo);
  }

  /**
  * Private function which checks which parameters can not be parsed as an array
  * @param name Parameter name to check if it is or not discarded.
  * @return If or not discarded
  */
  private function itIsDiscarded ($name) {
    return ($name=="vid" || $name=="nid"
        || $name=="uid" || $name=="title"
        || $name=="field_edoovillage_destination"
        || $name=="field_manager"
        || $name=="field_tagger"
        || $name=="field_additional_editors");
 
 }

  /**
  * Function to convert an array to an laptop object.
  * @param array Array with all parameters to convert.
  * @return Object with parameters.
  */
  private function arrayToObject($array) {
    if(!is_array($array)) {
      return $array;
    }


    $object = new stdClass();
    if (is_array($array) && count($array) > 0) {
      foreach ($array as $name=>$value) {
        if (!empty($name) && !$this->itIsDiscarded($name)) {
          $arrayValue= array();
          $arrayValue['und'][0]['value'] = $value;
          $object->$name = $arrayValue;
        }
      }
      return $object; 
    }
    else {
      return FALSE;
    }
  }

  /**
  * Private function to convert an object instance to an array.
  * @param obj object to convert.
  * @return Converted array.
  */
  private function objectToArray($obj) {
    $arr = null;
    $_arr = is_object($obj) ? get_object_vars($obj) : $obj;
    foreach ($_arr as $key => $val) {
      $val = (is_array($val) && !is_null($val[0]) && is_array($val[0])) ? $val[0]['value'] : $val;
      $arr[$key] = $val;
    }
    return $arr;
  }

  /**
  * Function to search node information with its uid
  * @param uid Used uid to search node parameters.
  * @return Node information or FALSE, if was not found.
  */ 
  public static function node_list_by_uid($uid) {
	    watchdog('debug','Laptop.class.inc: Listing node by uid '.$uid."\n");
	try {
		$result = db_query('SELECT node.nid,node.vid,node.title FROM node AS node WHERE node.uid=:uid AND node.type=\'laptop\'',array(':uid' => $uid));
	} catch (Exception $e) {
	    watchdog('debug','Laptop.class.inc: Caught exception: '.$e->getMessage()."\n");
	}

      watchdog('debug','------------------Select done');
 
    $laptops = array();
    $index = 0;

    foreach ($result as $record)  {
      $laptop = new laptop();
      $laptop->setNid($record->nid);
      $laptop->setVid($record->vid);
      $laptop->setTitle($record->title);
      $laptops[$index] = $laptop;
      $index+=1;
    }
    if (empty($laptop)) {
      watchdog('debug',"I couldn't not find any laptop");
      return FALSE;
    }
    return $laptop;
  }
}

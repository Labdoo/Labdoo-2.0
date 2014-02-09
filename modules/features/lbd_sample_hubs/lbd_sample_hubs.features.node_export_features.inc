<?php
/**
 * @file
 * lbd_sample_hubs.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function lbd_sample_hubs_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'29\',
      \'uid\' => \'1\',
      \'title\' => \'Labdoo Hub Barcelona\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'540076cd-5bef-48cf-9d00-7ad302da1e26\',
      \'nid\' => \'10\',
      \'type\' => \'hub\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391662961\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6d539cc3-cd14-4ef3-983f-91708487c84c\',
      \'revision_timestamp\' => \'1391662961\',
      \'revision_uid\' => \'1\',
      \'field_branches_information\' => array(),
      \'field_hub_manager_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'27\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'41.325373\',
          \'longitude\' => \'1.598703\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'41.325373\',
            \'user_longitude\' => \'1.598703\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'27\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Barcelona\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'es\',
        \'latitude\' => \'41.325373\',
        \'longitude\' => \'1.598703\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'41.325373\',
          \'user_longitude\' => \'1.598703\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Spain\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'26\',
        \'source\' => \'node/10\',
        \'alias\' => \'content/labdoo-hub-name-temporary-title\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'48\',
      \'uid\' => \'1\',
      \'title\' => \'Grassroots\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'075a4fd7-c6c3-4ea9-a707-e93c35c18acb\',
      \'nid\' => \'29\',
      \'type\' => \'hub\',
      \'language\' => \'en\',
      \'created\' => \'1391849699\',
      \'changed\' => \'1391849699\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f386fece-46c5-4fd2-9834-495555544768\',
      \'revision_timestamp\' => \'1391849699\',
      \'revision_uid\' => \'1\',
      \'field_branches_information\' => array(),
      \'field_hub_manager_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391849699\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'41\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'@PlanetEarth\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'xx\',
          \'latitude\' => \'-0.002380\',
          \'longitude\' => \'-0.034927\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'-0.002380\',
            \'user_longitude\' => \'-0.034927\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'41\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'@PlanetEarth\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'xx\',
        \'latitude\' => \'-0.002380\',
        \'longitude\' => \'-0.034927\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'-0.002380\',
          \'user_longitude\' => \'-0.034927\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'55\',
        \'source\' => \'node/29\',
        \'alias\' => \'content/grassroots\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

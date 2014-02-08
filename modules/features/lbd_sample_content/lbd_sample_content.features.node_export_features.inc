<?php
/**
 * @file
 * lbd_sample_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function lbd_sample_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'Kenya, Nairobi: Library project\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'860ab982-ffe9-430a-95bb-f51f45ba77d0\',
      \'nid\' => \'28\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1391662629\',
      \'changed\' => \'1391662629\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8077150b-db8c-4f9f-973f-3be15cecadb1\',
      \'revision_timestamp\' => \'1391662629\',
      \'revision_uid\' => \'1\',
      \'field_additional_files\' => array(),
      \'field_edoovillage_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'open\',
          ),
        ),
      ),
      \'field_hub\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'10\',
          ),
        ),
      ),
      \'field_internet_connection_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'wireless\',
          ),
        ),
      ),
      \'field_local_language_s_\' => array(
        \'und\' => array(
          array(
            \'value\' => \'English\',
            \'format\' => NULL,
            \'safe_value\' => \'English\',
          ),
        ),
      ),
      \'field_number_of_laptops_needed\' => array(
        \'und\' => array(
          array(
            \'value\' => \'10\',
          ),
        ),
      ),
      \'field_number_of_students\' => array(
        \'und\' => array(
          array(
            \'value\' => \'30\',
          ),
        ),
      ),
      \'field_number_of_teachers\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'field_on_site_point_of_contact\' => array(
        \'und\' => array(
          array(
            \'value\' => \'address1@address1\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>address1@address1</p>\\n",
          ),
        ),
      ),
      \'field_project_application\' => array(),
      \'field_project_description\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Computers for the children library \',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Computers for the children library</p>\\n",
          ),
        ),
      ),
      \'field_project_manager_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_project_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Library project\',
            \'format\' => NULL,
            \'safe_value\' => \'Library project\',
          ),
        ),
      ),
      \'field_socket_type\' => array(),
      \'field_socket_voltage\' => array(),
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
      \'last_comment_timestamp\' => \'1391662629\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'26\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Nairobi\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ke\',
          \'latitude\' => \'-1.253200\',
          \'longitude\' => \'36.730770\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'-1.253200\',
            \'user_longitude\' => \'36.730770\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Kenya\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'26\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Nairobi\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ke\',
        \'latitude\' => \'-1.253200\',
        \'longitude\' => \'36.730770\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'-1.253200\',
          \'user_longitude\' => \'36.730770\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Kenya\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'54\',
        \'source\' => \'node/28\',
        \'alias\' => \'content/kenya-nairobi-library-project\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'49\',
      \'uid\' => \'1\',
      \'title\' => \'000000010\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2743c509-28f8-4f15-8c8a-ddb1c5139f8b\',
      \'nid\' => \'30\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391849747\',
      \'changed\' => \'1391849747\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'91463088-e14d-4f45-ae0b-7dc2053edec9\',
      \'revision_timestamp\' => \'1391849747\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(),
      \'field_cpu_type\' => array(),
      \'field_current_operating_system\' => array(),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'internetTable\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(),
      \'field_hard_drive\' => array(),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'29\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_memory\' => array(),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Asus\',
            \'format\' => NULL,
            \'safe_value\' => \'Asus\',
          ),
        ),
      ),
      \'field_picture\' => array(),
      \'field_serial_number\' => array(
        \'und\' => array(
          array(
            \'value\' => \'123456\',
            \'format\' => NULL,
            \'safe_value\' => \'123456\',
          ),
        ),
      ),
      \'field_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'S2\',
          ),
        ),
      ),
      \'field_tagger\' => array(
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
      \'last_comment_timestamp\' => \'1391849747\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'42\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Irvine\',
          \'province\' => \'CA\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'California\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'42\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Irvine\',
        \'province\' => \'CA\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'California\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'56\',
        \'source\' => \'node/30\',
        \'alias\' => \'content/000000010\',
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

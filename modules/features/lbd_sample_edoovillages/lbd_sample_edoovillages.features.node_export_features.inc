<?php
/**
 * @file
 * lbd_sample_edoovillages.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function lbd_sample_edoovillages_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'31\',
      \'uid\' => \'1\',
      \'title\' => \'Nigeria, Ndoni: To bring laptops and Internet to Saint Agnes School in Ndoni\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'61249cfa-f0a5-4fad-919a-fdbbeaf33a7d\',
      \'nid\' => \'7\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391663146\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3cfc1145-61cd-4d23-8f07-f21775e02a47\',
      \'revision_timestamp\' => \'1391663146\',
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
            \'value\' => \'20\',
          ),
        ),
      ),
      \'field_number_of_students\' => array(
        \'und\' => array(
          array(
            \'value\' => \'100\',
          ),
        ),
      ),
      \'field_number_of_teachers\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
          ),
        ),
      ),
      \'field_on_site_point_of_contact\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Contact here\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Contact here</p>\\n",
          ),
        ),
      ),
      \'field_project_application\' => array(),
      \'field_project_description\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Longer description here\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Longer description here</p>\\n",
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
            \'value\' => \'To bring laptops and Internet to Saint Agnes School in Ndoni\',
            \'format\' => NULL,
            \'safe_value\' => \'To bring laptops and Internet to Saint Agnes School in Ndoni\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'29\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Ndoni\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ng\',
          \'latitude\' => \'5.556190\',
          \'longitude\' => \'6.590767\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'5.556190\',
            \'user_longitude\' => \'6.590767\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Nigeria\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'29\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Ndoni\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ng\',
        \'latitude\' => \'5.556190\',
        \'longitude\' => \'6.590767\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'5.556190\',
          \'user_longitude\' => \'6.590767\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Nigeria\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'18\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/country-village-description-temporary-title\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'30\',
      \'uid\' => \'1\',
      \'title\' => \'Nairobi, Kenya: School eBook Project \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6a9da551-df2a-4a14-9688-ef02186d56be\',
      \'nid\' => \'11\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391663055\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6fd7b523-4dec-44b5-86d7-ad1c73f49f10\',
      \'revision_timestamp\' => \'1391663055\',
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
            \'value\' => \'wired\',
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
            \'value\' => \'200\',
          ),
        ),
      ),
      \'field_number_of_teachers\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_on_site_point_of_contact\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Contact here\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Contact here</p>\\n",
          ),
        ),
      ),
      \'field_project_application\' => array(),
      \'field_project_description\' => array(
        \'und\' => array(
          array(
            \'value\' => "The laptops will be used to access electronic resources and E-books, this is because the cost of space and books is so high and unaffordably so and with laptops electronic resources can be installed there in and hence several people can access the same item at the same time, they will be used to also teach the kids and junior teens how to use the computers and give basic computer training to the kids in the surrounding.\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The laptops will be used to access electronic resources and E-books, this is because the cost of space and books is so high and unaffordably so and with laptops electronic resources can be installed there in and hence several people can access the same item at the same time, they will be used to also teach the kids and junior teens how to use the computers and give basic computer training to the kids in the surrounding.</p>\\n",
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
            \'value\' => \'Laptops will be used to access electronic resources and e-books to help lower costs\',
            \'format\' => NULL,
            \'safe_value\' => \'Laptops will be used to access electronic resources and e-books to help lower costs\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'28\',
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
        \'lid\' => \'28\',
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
        \'pid\' => \'28\',
        \'source\' => \'node/11\',
        \'alias\' => \'content/country-village-description-temporary-title-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
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
)',
);
  return $node_export;
}

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
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'000000005\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'edb7b26b-ceed-4553-a396-ffc7166dc733\',
      \'nid\' => \'10\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389598231\',
      \'changed\' => \'1389599477\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0fc3e1c8-89c2-4458-be22-b93e667c8c24\',
      \'revision_timestamp\' => \'1389599477\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'S4\',
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
      \'last_comment_timestamp\' => \'1389598231\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'10\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Nairobi\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ke\',
          \'latitude\' => \'-1.293530\',
          \'longitude\' => \'36.821945\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'-1.293530\',
            \'user_longitude\' => \'36.821945\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Kenya\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'10\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Nairobi\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ke\',
        \'latitude\' => \'-1.293530\',
        \'longitude\' => \'36.821945\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'-1.293530\',
          \'user_longitude\' => \'36.821945\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Kenya\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'23\',
        \'source\' => \'node/10\',
        \'alias\' => \'content/000000005\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'000000006\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b8fc622a-9561-48da-bb18-9f04f02ba79a\',
      \'nid\' => \'11\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389598281\',
      \'changed\' => \'1389598281\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'173ab486-cb15-4821-8ad2-49dbc53bff6b\',
      \'revision_timestamp\' => \'1389598281\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'T1\',
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
      \'last_comment_timestamp\' => \'1389598281\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'7\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Nairobi\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ke\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Kenya\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'7\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Nairobi\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ke\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Kenya\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'26\',
        \'source\' => \'node/11\',
        \'alias\' => \'content/000000006\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'000000009\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dbfa3566-7082-4334-a096-fbc7a16f32a9\',
      \'nid\' => \'15\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389599952\',
      \'changed\' => \'1389599952\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'207f13f5-f8d0-4bc3-8c7d-2345350cb83c\',
      \'revision_timestamp\' => \'1389599952\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'14\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'S4\',
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
      \'last_comment_timestamp\' => \'1389599952\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'12\',
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
        \'lid\' => \'12\',
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
        \'pid\' => \'36\',
        \'source\' => \'node/15\',
        \'alias\' => \'content/000000009\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Country, Village: description (temporary title)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a0cb4c71-6308-4abb-a343-712de7b6ff96\',
      \'nid\' => \'14\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1389599874\',
      \'changed\' => \'1389599874\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3cfc1145-61cd-4d23-8f07-f21775e02a47\',
      \'revision_timestamp\' => \'1389599874\',
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
            \'target_id\' => \'4\',
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
      \'last_comment_timestamp\' => \'1389599874\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'11\',
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
        \'lid\' => \'11\',
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
        \'pid\' => \'35\',
        \'source\' => \'node/14\',
        \'alias\' => \'content/country-village-description-temporary-title-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'000000008\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'76d28bbd-4386-4174-a007-ac32857ac9c7\',
      \'nid\' => \'13\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389598354\',
      \'changed\' => \'1389598964\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'46ab1575-ec18-43d1-95b8-a453dd9e1b49\',
      \'revision_timestamp\' => \'1389598964\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'S6\',
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
      \'last_comment_timestamp\' => \'1389598354\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'9\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Rome\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'it\',
          \'latitude\' => \'41.892566\',
          \'longitude\' => \'12.484481\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'41.892566\',
            \'user_longitude\' => \'12.484481\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Italy\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'9\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Rome\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'it\',
        \'latitude\' => \'41.892566\',
        \'longitude\' => \'12.484481\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'41.892566\',
          \'user_longitude\' => \'12.484481\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Italy\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'32\',
        \'source\' => \'node/13\',
        \'alias\' => \'content/000000008\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'000000007\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'43727f5b-2a3c-4a46-b53f-37d0832ce68d\',
      \'nid\' => \'12\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389598327\',
      \'changed\' => \'1389598327\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a5f37e9-f38d-47ed-867b-27230b2f529b\',
      \'revision_timestamp\' => \'1389598327\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'S5\',
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
      \'last_comment_timestamp\' => \'1389598327\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'7\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Nairobi\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ke\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Kenya\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'7\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Nairobi\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ke\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Kenya\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'29\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/000000007\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Labdoo Hub name (temporary title)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'43892b21-2dcc-4776-9d9a-41a9effaebf2\',
      \'nid\' => \'4\',
      \'type\' => \'hub\',
      \'language\' => \'en\',
      \'created\' => \'1389597376\',
      \'changed\' => \'1389597376\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6d539cc3-cd14-4ef3-983f-91708487c84c\',
      \'revision_timestamp\' => \'1389597376\',
      \'revision_uid\' => \'1\',
      \'field_branches_information\' => array(),
      \'field_hub_manager_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
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
      \'last_comment_timestamp\' => \'1389597376\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'1\',
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
        \'lid\' => \'1\',
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
        \'pid\' => \'10\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/labdoo-hub-name-temporary-title\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Country, Village: description (temporary title)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f861b1f4-2b4d-4d8e-8296-bc34b6376294\',
      \'nid\' => \'5\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1389597658\',
      \'changed\' => \'1389597658\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6fd7b523-4dec-44b5-86d7-ad1c73f49f10\',
      \'revision_timestamp\' => \'1389597658\',
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
            \'target_id\' => \'4\',
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
            \'target_id\' => \'6\',
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
      \'last_comment_timestamp\' => \'1389597658\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'2\',
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
        \'lid\' => \'2\',
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
        \'pid\' => \'11\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/country-village-description-temporary-title\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'000000002\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'41c92722-e89b-4b7a-88ab-32e4527e4875\',
      \'nid\' => \'7\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389597837\',
      \'changed\' => \'1389600034\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ac35cf38-2dd9-4693-83e6-a5e85bb91aea\',
      \'revision_timestamp\' => \'1389600034\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
      \'last_comment_timestamp\' => \'1389597837\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'4\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Berlin\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'de\',
          \'latitude\' => \'52.518728\',
          \'longitude\' => \'13.407226\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'52.518728\',
            \'user_longitude\' => \'13.407226\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Germany\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'4\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Berlin\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'de\',
        \'latitude\' => \'52.518728\',
        \'longitude\' => \'13.407226\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'52.518728\',
          \'user_longitude\' => \'13.407226\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Germany\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'14\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/000000002\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'000000004\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'37d7e98a-d1ec-433f-8245-801e37897ba3\',
      \'nid\' => \'9\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389598102\',
      \'changed\' => \'1389599448\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d376a428-b350-4211-9cca-178a07d7e444\',
      \'revision_timestamp\' => \'1389599448\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'S3\',
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
      \'last_comment_timestamp\' => \'1389598102\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'6\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'New York\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'40.767022\',
          \'longitude\' => \'-73.969789\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'40.767022\',
            \'user_longitude\' => \'-73.969789\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'6\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'New York\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'40.767022\',
        \'longitude\' => \'-73.969789\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'40.767022\',
          \'user_longitude\' => \'-73.969789\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'20\',
        \'source\' => \'node/9\',
        \'alias\' => \'content/000000004\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'000000001\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'da171d89-1469-493a-926e-8ded4d2f61db\',
      \'nid\' => \'6\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389597780\',
      \'changed\' => \'1389599129\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfb07b8c-813d-4afa-8907-ffdb3606b1bf\',
      \'revision_timestamp\' => \'1389599129\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
            \'value\' => \'S0\',
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
      \'last_comment_timestamp\' => \'1389597780\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'3\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'41.386082\',
          \'longitude\' => \'2.173812\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'41.386082\',
            \'user_longitude\' => \'2.173812\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'3\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Barcelona\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'es\',
        \'latitude\' => \'41.386082\',
        \'longitude\' => \'2.173812\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'41.386082\',
          \'user_longitude\' => \'2.173812\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Spain\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/000000001\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'000000003\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9fb6158d-9a4f-4fa1-8b1b-7e46e190c9b5\',
      \'nid\' => \'8\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1389598054\',
      \'changed\' => \'1389599623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e79cf53b-5ec6-4843-9e01-88f05879096a\',
      \'revision_timestamp\' => \'1389599623\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donation made by company xyz\',
            \'format\' => NULL,
            \'safe_value\' => \'Donation made by company xyz\',
          ),
        ),
      ),
      \'field_additional_notification_em\' => array(),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_cpu_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_current_operating_system\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ubuntu 12.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 12.04\',
          ),
        ),
      ),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_edoovillage_destination\' => array(),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
        ),
      ),
      \'field_manager\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_memory\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'Thinkpad\',
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
      \'last_comment_timestamp\' => \'1389598054\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'5\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Tirana\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'al\',
          \'latitude\' => \'41.331451\',
          \'longitude\' => \'19.831669\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'41.331451\',
            \'user_longitude\' => \'19.831669\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Albania\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'5\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Tirana\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'al\',
        \'latitude\' => \'41.331451\',
        \'longitude\' => \'19.831669\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'41.331451\',
          \'user_longitude\' => \'19.831669\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Albania\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'17\',
        \'source\' => \'node/8\',
        \'alias\' => \'content/000000003\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

<?php
/**
 * @file
 * lbd_sample_doojects.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function lbd_sample_doojects_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'40\',
      \'uid\' => \'1\',
      \'title\' => \'000000001\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'68122858-46e8-452f-b856-05fa275177db\',
      \'nid\' => \'4\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391688387\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0fc3e1c8-89c2-4458-be22-b93e667c8c24\',
      \'revision_timestamp\' => \'1391688387\',
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
            \'target_id\' => \'11\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'36\',
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
        \'lid\' => \'36\',
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
        \'pid\' => \'9\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/000000001\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'37\',
      \'uid\' => \'1\',
      \'title\' => \'000000002\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6eb871c8-d353-41cd-bb36-3c19029fbc62\',
      \'nid\' => \'5\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391688279\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'173ab486-cb15-4821-8ad2-49dbc53bff6b\',
      \'revision_timestamp\' => \'1391688279\',
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
            \'target_id\' => \'11\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
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
        \'pid\' => \'12\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/000000002\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'32\',
      \'uid\' => \'1\',
      \'title\' => \'000000003\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'59dd1e5a-1d0d-4009-8cf0-b05c3c51d6e8\',
      \'nid\' => \'6\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391663248\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'207f13f5-f8d0-4bc3-8c7d-2345350cb83c\',
      \'revision_timestamp\' => \'1391663248\',
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
            \'target_id\' => \'7\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'30\',
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
        \'lid\' => \'30\',
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
        \'pid\' => \'15\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/000000003\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'000000004\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'240ecf52-6df1-4746-91e1-8620ce5d1b54\',
      \'nid\' => \'8\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391688523\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'46ab1575-ec18-43d1-95b8-a453dd9e1b49\',
      \'revision_timestamp\' => \'1391688523\',
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
            \'target_id\' => \'28\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'39\',
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
        \'lid\' => \'39\',
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
        \'pid\' => \'20\',
        \'source\' => \'node/8\',
        \'alias\' => \'content/000000004\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'44\',
      \'uid\' => \'1\',
      \'title\' => \'000000005\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'17992463-3ca6-4fca-b094-f84ffb0e3abb\',
      \'nid\' => \'9\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391688487\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a5f37e9-f38d-47ed-867b-27230b2f529b\',
      \'revision_timestamp\' => \'1391688487\',
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
            \'target_id\' => \'11\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
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
        \'pid\' => \'23\',
        \'source\' => \'node/9\',
        \'alias\' => \'content/000000005-0\',
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
      \'vid\' => \'36\',
      \'uid\' => \'1\',
      \'title\' => \'000000006\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6251c5e5-f6b3-41af-8ee3-110e1b501241\',
      \'nid\' => \'12\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391686578\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ac35cf38-2dd9-4693-83e6-a5e85bb91aea\',
      \'revision_timestamp\' => \'1391686578\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'34\',
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
        \'lid\' => \'34\',
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
        \'pid\' => \'30\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/000000006-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'33\',
      \'uid\' => \'1\',
      \'title\' => \'000000007\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cdee9163-a407-499f-bb3f-9a51bf726d8f\',
      \'nid\' => \'13\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391663331\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d376a428-b350-4211-9cca-178a07d7e444\',
      \'revision_timestamp\' => \'1391663331\',
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
            \'target_id\' => \'28\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'31\',
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
        \'lid\' => \'31\',
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
        \'pid\' => \'33\',
        \'source\' => \'node/13\',
        \'alias\' => \'content/000000007-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'35\',
      \'uid\' => \'1\',
      \'title\' => \'000000008\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'52e8ca85-ee3f-47a6-adb0-31ddf0256a81\',
      \'nid\' => \'14\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391686554\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfb07b8c-813d-4afa-8907-ffdb3606b1bf\',
      \'revision_timestamp\' => \'1391686554\',
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
            \'target_id\' => \'10\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'33\',
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
        \'lid\' => \'33\',
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
        \'pid\' => \'36\',
        \'source\' => \'node/14\',
        \'alias\' => \'content/000000008-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'47\',
      \'uid\' => \'1\',
      \'title\' => \'000000009\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'31c66066-444a-4c71-bf8c-5f0c58c2f9f3\',
      \'nid\' => \'15\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1391587315\',
      \'changed\' => \'1391688548\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e79cf53b-5ec6-4843-9e01-88f05879096a\',
      \'revision_timestamp\' => \'1391688548\',
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
            \'target_id\' => \'10\',
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
            \'value\' => \'S1\',
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
      \'last_comment_timestamp\' => \'1391587315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'40\',
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
        \'lid\' => \'40\',
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
        \'pid\' => \'39\',
        \'source\' => \'node/15\',
        \'alias\' => \'content/000000009-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

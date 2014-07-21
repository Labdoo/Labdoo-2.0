<?php
/**
 * @file
 * lbd_sample_dootrips.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function lbd_sample_dootrips_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'41\',
      \'uid\' => \'1\',
      \'title\' => \'2 - Dootrip from London (United Kingdom) to Arusha (Tanzania)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d51f355f-35e8-44a8-9fa5-6251852f9cf8\',
      \'nid\' => \'41\',
      \'type\' => \'dootrip\',
      \'language\' => \'en\',
      \'created\' => \'1405865299\',
      \'changed\' => \'1405865299\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2acd147d-7bb3-46fb-b1e6-a33766a78c11\',
      \'revision_timestamp\' => \'1405865299\',
      \'revision_uid\' => \'1\',
      \'field_arrival_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-20T14:00:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_comments\' => array(),
      \'field_departure_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-20T14:00:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_destination_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'59\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Arusha\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'tz\',
            \'latitude\' => \'-3.372301\',
            \'longitude\' => \'36.694414\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'Tanzania\',
          ),
        ),
      ),
      \'field_dootrip_capacity\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'field_dootripper_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_laptops\' => array(),
      \'field_number_of_days_after\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_number_of_days_before\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_origin_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'60\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'London\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'gb\',
            \'latitude\' => \'51.507351\',
            \'longitude\' => \'-0.127758\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'United Kingdom\',
          ),
        ),
      ),
      \'field_status_dootrip\' => array(
        \'und\' => array(
          array(
            \'value\' => \'DS1\',
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
      \'last_comment_timestamp\' => \'1405865299\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'59\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Arusha\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'tz\',
          \'latitude\' => \'-3.372301\',
          \'longitude\' => \'36.694414\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Tanzania\',
        ),
        array(
          \'lid\' => \'60\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'London\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'gb\',
          \'latitude\' => \'51.507351\',
          \'longitude\' => \'-0.127758\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United Kingdom\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'59\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Arusha\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'tz\',
        \'latitude\' => \'-3.372301\',
        \'longitude\' => \'36.694414\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Tanzania\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'62\',
        \'source\' => \'node/41\',
        \'alias\' => \'content/2-dootrip-london-united-kingdom-arusha-tanzania\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'39\',
      \'uid\' => \'1\',
      \'title\' => \'1 - Dootrip from New York (United States) to Nairobi (Kenya)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fbf91ce9-a70e-4e87-b1e0-d4ea6422cb5a\',
      \'nid\' => \'39\',
      \'type\' => \'dootrip\',
      \'language\' => \'en\',
      \'created\' => \'1405865227\',
      \'changed\' => \'1405865227\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3e63aa97-d9f0-4c63-914d-35f26d8f2e33\',
      \'revision_timestamp\' => \'1405865227\',
      \'revision_uid\' => \'1\',
      \'field_arrival_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-20T14:00:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_comments\' => array(),
      \'field_departure_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-20T14:00:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_destination_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'56\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Nairobi\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'ke\',
            \'latitude\' => \'-1.292066\',
            \'longitude\' => \'36.821946\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'Kenya\',
          ),
        ),
      ),
      \'field_dootrip_capacity\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
          ),
        ),
      ),
      \'field_dootripper_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_laptops\' => array(),
      \'field_number_of_days_after\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_number_of_days_before\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
          ),
        ),
      ),
      \'field_origin_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'57\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'New York\',
            \'province\' => \'\',
            \'postal_code\' => \'10012\',
            \'country\' => \'us\',
            \'latitude\' => \'40.712784\',
            \'longitude\' => \'-74.005941\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'United States\',
          ),
        ),
      ),
      \'field_status_dootrip\' => array(
        \'und\' => array(
          array(
            \'value\' => \'DS0\',
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
      \'last_comment_timestamp\' => \'1405865227\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'56\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Nairobi\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ke\',
          \'latitude\' => \'-1.292066\',
          \'longitude\' => \'36.821946\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Kenya\',
        ),
        array(
          \'lid\' => \'57\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'New York\',
          \'province\' => \'\',
          \'postal_code\' => \'10012\',
          \'country\' => \'us\',
          \'latitude\' => \'40.712784\',
          \'longitude\' => \'-74.005941\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'56\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Nairobi\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ke\',
        \'latitude\' => \'-1.292066\',
        \'longitude\' => \'36.821946\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Kenya\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'60\',
        \'source\' => \'node/39\',
        \'alias\' => \'content/1-dootrip-new-york-united-states-nairobi-kenya\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'Dootrip from New York (United States) to Bangkok (Thailand) was created\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fe8211ed-df4d-45ae-af88-115093f44908\',
      \'nid\' => \'46\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1405865516\',
      \'changed\' => \'1405865516\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'87048dd4-c102-4364-9efb-d6eb68c89070\',
      \'revision_timestamp\' => \'1405865516\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/45">Dootrip from New York (United States) to Bangkok (Thailand) was created<img alt="" src="/profiles/labdoo/files/pictures/dootrip.png" style="width: 34px; height: 26px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/45\\">Dootrip from New York (United States) to Bangkok (Thailand) was created<img alt=\\"\\" src=\\"/profiles/labdoo/files/pictures/dootrip.png\\" style=\\"width: 34px; height: 26px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_stream_it\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
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
      \'last_comment_timestamp\' => \'1405865516\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'67\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'New York\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'40.712784\',
          \'longitude\' => \'-74.005941\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'67\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'New York\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'40.712784\',
        \'longitude\' => \'-74.005941\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'65\',
        \'source\' => \'node/46\',
        \'alias\' => \'content/dootrip-new-york-united-states-bangkok-thailand-was-created\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'43\',
      \'uid\' => \'1\',
      \'title\' => \'3 - Dootrip from Barcelona (Spain) to Buenos Aires (Argentina)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4a69eb1d-89ad-452c-be14-5bb340bf1fd7\',
      \'nid\' => \'43\',
      \'type\' => \'dootrip\',
      \'language\' => \'en\',
      \'created\' => \'1405865415\',
      \'changed\' => \'1405865415\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f0133dae-bc7d-4a0e-bed8-a0cee8c4d112\',
      \'revision_timestamp\' => \'1405865415\',
      \'revision_uid\' => \'1\',
      \'field_arrival_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-20T14:15:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_comments\' => array(),
      \'field_departure_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-20T14:15:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_destination_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'62\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Buenos Aires\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'ar\',
            \'latitude\' => \'-34.603723\',
            \'longitude\' => \'-58.381593\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'Argentina\',
          ),
        ),
      ),
      \'field_dootrip_capacity\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
          ),
        ),
      ),
      \'field_dootripper_s_\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_laptops\' => array(),
      \'field_number_of_days_after\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_number_of_days_before\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_origin_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'63\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Barcelona\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'es\',
            \'latitude\' => \'41.385064\',
            \'longitude\' => \'2.173404\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'Spain\',
          ),
        ),
      ),
      \'field_status_dootrip\' => array(
        \'und\' => array(
          array(
            \'value\' => \'DS0\',
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
      \'last_comment_timestamp\' => \'1405865415\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'62\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Buenos Aires\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ar\',
          \'latitude\' => \'-34.603723\',
          \'longitude\' => \'-58.381593\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Argentina\',
        ),
        array(
          \'lid\' => \'63\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'41.385064\',
          \'longitude\' => \'2.173404\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'62\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Buenos Aires\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ar\',
        \'latitude\' => \'-34.603723\',
        \'longitude\' => \'-58.381593\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Argentina\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;s:20:"l10n_client_disabled";b:0;}\',
      \'path\' => array(
        \'pid\' => \'64\',
        \'source\' => \'node/43\',
        \'alias\' => \'content/3-dootrip-barcelona-spain-buenos-aires-argentina\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

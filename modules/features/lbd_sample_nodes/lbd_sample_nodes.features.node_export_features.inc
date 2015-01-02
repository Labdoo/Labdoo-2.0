<?php
/**
 * @file
 * lbd_sample_nodes.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function lbd_sample_nodes_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'42\',
      \'uid\' => \'1\',
      \'title\' => \'Grassroots\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d1687d72-9c41-48d2-971a-1736813f38d6\',
      \'nid\' => \'41\',
      \'type\' => \'hub\',
      \'language\' => \'en\',
      \'created\' => \'1420216355\',
      \'changed\' => \'1420216355\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0ad78c0e-8a11-4833-8145-cdff4189db25\',
      \'revision_timestamp\' => \'1420216355\',
      \'revision_uid\' => \'1\',
      \'field_hub_photo_album\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'40\',
          ),
        ),
      ),
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
      \'last_comment_timestamp\' => \'1420216355\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'20\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'@Planet Earth\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'xx\',
          \'latitude\' => \'35.650856\',
          \'longitude\' => \'-42.050782\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'35.650856\',
            \'user_longitude\' => \'-42.050782\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'20\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'@Planet Earth\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'xx\',
        \'latitude\' => \'35.650856\',
        \'longitude\' => \'-42.050782\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'35.650856\',
          \'user_longitude\' => \'-42.050782\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'64\',
        \'source\' => \'node/41\',
        \'alias\' => \'content/grassroots\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'57\',
      \'uid\' => \'1\',
      \'title\' => \'2 - Dootrip from Barcelona (Spain) to Guatemala (Guatemala)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8d5b9e59-e8b3-452c-8d35-acb783216e71\',
      \'nid\' => \'38\',
      \'type\' => \'dootrip\',
      \'language\' => \'en\',
      \'created\' => \'1420215635\',
      \'changed\' => \'1420221742\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'12fe041d-6711-46c1-af1d-14ea12af56e8\',
      \'revision_timestamp\' => \'1420221742\',
      \'revision_uid\' => \'1\',
      \'field_arrival_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-21T16:15:00\',
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
            \'value\' => \'2015-01-20T16:15:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_destination_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'34\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Guatemala\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'gt\',
            \'latitude\' => \'15.781271\',
            \'longitude\' => \'-90.231329\',
            \'source\' => \'0\',
            \'is_primary\' => \'0\',
            \'province_name\' => \'\',
            \'country_name\' => \'Guatemala\',
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
      \'field_dootrip_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'No doojects linked to this dootrip yet\',
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
            \'lid\' => \'35\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Barcelona\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'es\',
            \'latitude\' => \'41.386734\',
            \'longitude\' => \'2.174964\',
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
      \'last_comment_timestamp\' => \'1420215635\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'34\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Guatemala\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'gt\',
          \'latitude\' => \'15.781271\',
          \'longitude\' => \'-90.231329\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Guatemala\',
        ),
        array(
          \'lid\' => \'35\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'41.386734\',
          \'longitude\' => \'2.174964\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'34\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Guatemala\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'gt\',
        \'latitude\' => \'15.781271\',
        \'longitude\' => \'-90.231329\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Guatemala\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'61\',
        \'source\' => \'node/38\',
        \'alias\' => \'content/2-dootrip-barcelona-spain-guatemala-guatemala\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'31\',
      \'uid\' => \'1\',
      \'title\' => \'Guatemala, Antigua: Proyecto Casasito\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f828a2d5-b52b-45ff-b8ce-4f2b1831a1cd\',
      \'nid\' => \'31\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1420214899\',
      \'changed\' => \'1420214899\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1d14559c-1458-46a2-84a8-50643e8316a5\',
      \'revision_timestamp\' => \'1420214899\',
      \'revision_uid\' => \'1\',
      \'field_edoovillage_photo_album\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'30\',
          ),
        ),
      ),
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
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_internet_connection_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'wired\',
          ),
          array(
            \'value\' => \'wireless\',
          ),
        ),
      ),
      \'field_local_language_s_\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Spanish\',
            \'format\' => NULL,
            \'safe_value\' => \'Spanish\',
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
            \'value\' => \'Casasito.org\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Casasito.org</p>\\n",
          ),
        ),
      ),
      \'field_project_application\' => array(),
      \'field_project_description\' => array(
        \'und\' => array(
          array(
            \'value\' => "Implementation of a laptop library at Casasito so that all the Casasito students can check out laptops to do their school projects.\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Implementation of a laptop library at Casasito so that all the Casasito students can check out laptops to do their school projects.</p>\\n",
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
            \'value\' => \'Proyecto Casasito\',
            \'format\' => NULL,
            \'safe_value\' => \'Proyecto Casasito\',
          ),
        ),
      ),
      \'field_semaphore\' => array(
        \'und\' => array(
          array(
            \'value\' => \'red\',
          ),
        ),
      ),
      \'field_socket_type\' => array(),
      \'field_socket_voltage\' => array(
        \'und\' => array(
          array(
            \'value\' => \'120\',
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
      \'last_comment_timestamp\' => \'1420214899\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'8\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Antigua\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'gt\',
          \'latitude\' => \'14.551780\',
          \'longitude\' => \'-90.741959\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'14.551780\',
            \'user_longitude\' => \'-90.741959\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Guatemala\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'8\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Antigua\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'gt\',
        \'latitude\' => \'14.551780\',
        \'longitude\' => \'-90.741959\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'14.551780\',
          \'user_longitude\' => \'-90.741959\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Guatemala\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'54\',
        \'source\' => \'node/31\',
        \'alias\' => \'content/guatemala-antigua-proyecto-casasito\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'54\',
      \'uid\' => \'1\',
      \'title\' => \'Laptop 000000005 was tagged in Toulouse, France\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4bf911be-0bf3-472b-8ff8-2ec9d107a4cc\',
      \'nid\' => \'52\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420221229\',
      \'changed\' => \'1420221229\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'241a8d3d-9f8f-4ec7-b95e-45c802f057ac\',
      \'revision_timestamp\' => \'1420221229\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/51">Laptop 000000005 was tagged in Toulouse, France<br><img src="/profiles/labdoo/files/pictures/laptop-simple.png" style="width: 20px; height: 21px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/51\\">Laptop 000000005 was tagged in Toulouse, France<br /><img src=\\"/profiles/labdoo/files/pictures/laptop-simple.png\\" style=\\"width: 20px; height: 21px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dooject\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420221229\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'30\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Toulouse\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'fr\',
          \'latitude\' => \'43.609512\',
          \'longitude\' => \'1.447509\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'France\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'30\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Toulouse\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'fr\',
        \'latitude\' => \'43.609512\',
        \'longitude\' => \'1.447509\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'France\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'77\',
        \'source\' => \'node/52\',
        \'alias\' => \'content/laptop-000000005-was-tagged-toulouse-france\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'35\',
      \'uid\' => \'1\',
      \'title\' => \'Edoovillage was created in Ndoni, Nigeria\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3622a16c-3820-4798-abd7-cad5c2c4f7c7\',
      \'nid\' => \'35\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420215278\',
      \'changed\' => \'1420215278\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2516efc3-0628-4b0e-91d7-7d62072e4371\',
      \'revision_timestamp\' => \'1420215278\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/34">Edoovillage was created in Ndoni, Nigeria<br><img src="/profiles/labdoo/files/pictures/edoovillage.png" style="width: 30px; height: 28px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/34\\">Edoovillage was created in Ndoni, Nigeria<br /><img src=\\"/profiles/labdoo/files/pictures/edoovillage.png\\" style=\\"width: 30px; height: 28px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Edoovillage\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'34\',
          ),
        ),
      ),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420215278\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'9\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Ndoni\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'ng\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Nigeria\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'9\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Ndoni\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'ng\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Nigeria\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'56\',
        \'source\' => \'node/35\',
        \'alias\' => \'content/edoovillage-was-created-ndoni-nigeria\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'32\',
      \'uid\' => \'1\',
      \'title\' => \'Edoovillage was created in Antigua, Guatemala\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2a84ec10-eca1-411e-9f6a-9a4fcb2f004d\',
      \'nid\' => \'32\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420214899\',
      \'changed\' => \'1420214899\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'339ad2ac-b6be-4b98-aee0-f71c752c68bb\',
      \'revision_timestamp\' => \'1420214899\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/31">Edoovillage was created in Antigua, Guatemala<br><img src="/profiles/labdoo/files/pictures/edoovillage.png" style="width: 30px; height: 28px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/31\\">Edoovillage was created in Antigua, Guatemala<br /><img src=\\"/profiles/labdoo/files/pictures/edoovillage.png\\" style=\\"width: 30px; height: 28px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Edoovillage\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420214899\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'7\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Antigua\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'gt\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Guatemala\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'7\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Antigua\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'gt\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Guatemala\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'53\',
        \'source\' => \'node/32\',
        \'alias\' => \'content/edoovillage-was-created-antigua-guatemala\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'30\',
      \'uid\' => \'1\',
      \'title\' => \'Guatemala, Antigua: Proyecto Casasito - Photo Album\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'63a639c6-ac88-450c-876e-f0cec480c5d2\',
      \'nid\' => \'30\',
      \'type\' => \'node_gallery_gallery\',
      \'language\' => \'und\',
      \'created\' => \'1420214899\',
      \'changed\' => \'1420214899\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'403f3ca6-8c88-4fc4-b45b-0085edc07c96\',
      \'revision_timestamp\' => \'1420214899\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_photo_album_edoovillage\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_photo_album_hub\' => array(),
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
      \'last_comment_timestamp\' => \'1420214899\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'node_gallery\' => array(
        \'ngid\' => \'30\',
        \'cover_item\' => NULL,
        \'item_count\' => \'0\',
        \'pub_item_count\' => \'0\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'52\',
        \'source\' => \'node/30\',
        \'alias\' => \'content/guatemala-antigua-proyecto-casasito-photo-album\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'37\',
      \'uid\' => \'1\',
      \'title\' => \'Dootrip from New York (Spain) to Arusha (Tanzania) was created\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e2693e35-b604-4fbf-b816-2b6b4f5489f7\',
      \'nid\' => \'37\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420215575\',
      \'changed\' => \'1420215575\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'40bca4b2-4ef1-4afb-82fd-811395f8b4b7\',
      \'revision_timestamp\' => \'1420215575\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/36">Dootrip from New York (Spain) to Arusha (Tanzania) was created<br><img src="/profiles/labdoo/files/pictures/dootrip.png" style="width: 34px; height: 26px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/36\\">Dootrip from New York (Spain) to Arusha (Tanzania) was created<br /><img src=\\"/profiles/labdoo/files/pictures/dootrip.png\\" style=\\"width: 34px; height: 26px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dootrip\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(),
      \'field_hub_action\' => array(),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420215575\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'13\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'New York\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'40.717414\',
          \'longitude\' => \'-74.001361\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'13\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'New York\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'es\',
        \'latitude\' => \'40.717414\',
        \'longitude\' => \'-74.001361\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Spain\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'58\',
        \'source\' => \'node/37\',
        \'alias\' => \'content/dootrip-new-york-spain-arusha-tanzania-was-created\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'47\',
      \'uid\' => \'1\',
      \'title\' => \'000000002\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'62b2615b-d424-444a-9779-f0f0d64e6366\',
      \'nid\' => \'45\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1420220853\',
      \'changed\' => \'1420220876\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'51565604-de3c-425d-b5f6-098f284898f8\',
      \'revision_timestamp\' => \'1420220876\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_followers\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_amp_hours\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1200\',
          ),
        ),
      ),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1200\',
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
            \'value\' => \'Ubuntu 14.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 14.04\',
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
      \'field_dooject_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'field_dootrips\' => array(),
      \'field_edoovillage_destination\' => array(),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'60\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
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
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'IBM Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'IBM Thinkpad\',
          ),
        ),
      ),
      \'field_picture\' => array(),
      \'field_serial_number\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5678\',
            \'format\' => NULL,
            \'safe_value\' => \'5678\',
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
      \'field_volts\' => array(
        \'und\' => array(
          array(
            \'value\' => \'10.8\',
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
      \'last_comment_timestamp\' => \'1420220853\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'25\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Berlin\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'de\',
          \'latitude\' => \'52.523137\',
          \'longitude\' => \'13.400334\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Germany\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'25\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Berlin\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'de\',
        \'latitude\' => \'52.523137\',
        \'longitude\' => \'13.400334\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Germany\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'69\',
        \'source\' => \'node/45\',
        \'alias\' => \'laptop/000000002\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'50\',
      \'uid\' => \'1\',
      \'title\' => \'Laptop 000000003 was tagged in San Diego, United States\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f4e12250-52a9-48b7-b0e4-0bb2e8075d1f\',
      \'nid\' => \'48\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420220981\',
      \'changed\' => \'1420220981\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5657626d-987a-43ef-ad72-e687940948a6\',
      \'revision_timestamp\' => \'1420220981\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/47">Laptop 000000003 was tagged in San Diego, United States<br><img src="/profiles/labdoo/files/pictures/laptop-simple.png" style="width: 20px; height: 21px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/47\\">Laptop 000000003 was tagged in San Diego, United States<br /><img src=\\"/profiles/labdoo/files/pictures/laptop-simple.png\\" style=\\"width: 20px; height: 21px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dooject\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'41\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420220981\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'26\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'San Diego\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'32.715958\',
          \'longitude\' => \'-117.161944\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'26\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'San Diego\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'32.715958\',
        \'longitude\' => \'-117.161944\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'71\',
        \'source\' => \'node/48\',
        \'alias\' => \'content/laptop-000000003-was-tagged-san-diego-united-states\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'52\',
      \'uid\' => \'1\',
      \'title\' => \'Laptop 000000004 was tagged in Rome, Italy\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f2f106fc-42db-4012-869d-1ab882520f13\',
      \'nid\' => \'50\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420221108\',
      \'changed\' => \'1420221108\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5ff3caca-b9ae-45b8-8471-1dae9b0fdbad\',
      \'revision_timestamp\' => \'1420221108\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/49">Laptop 000000004 was tagged in Rome, Italy<br><img src="/profiles/labdoo/files/pictures/laptop-simple.png" style="width: 20px; height: 21px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/49\\">Laptop 000000004 was tagged in Rome, Italy<br /><img src=\\"/profiles/labdoo/files/pictures/laptop-simple.png\\" style=\\"width: 20px; height: 21px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dooject\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'34\',
          ),
        ),
      ),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'41\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420221108\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'28\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Rome\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'it\',
          \'latitude\' => \'41.901094\',
          \'longitude\' => \'12.497076\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Italy\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'28\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Rome\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'it\',
        \'latitude\' => \'41.901094\',
        \'longitude\' => \'12.497076\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Italy\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'74\',
        \'source\' => \'node/50\',
        \'alias\' => \'content/laptop-000000004-was-tagged-rome-italy\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'36\',
      \'uid\' => \'1\',
      \'title\' => \'1 - Dootrip from New York (Spain) to Arusha (Tanzania)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4b792908-9916-492c-b585-2d16a2e9d129\',
      \'nid\' => \'36\',
      \'type\' => \'dootrip\',
      \'language\' => \'en\',
      \'created\' => \'1420215575\',
      \'changed\' => \'1420221601\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'61d0864c-90e3-4781-a722-f55841b8461c\',
      \'revision_timestamp\' => \'1420221601\',
      \'revision_uid\' => \'0\',
      \'field_arrival_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-01-11T16:15:00\',
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
            \'value\' => \'2015-01-10T16:15:00\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_destination_of_the_trip\' => array(
        \'und\' => array(
          array(
            \'lid\' => \'11\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'Arusha\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'tz\',
            \'latitude\' => \'-3.370851\',
            \'longitude\' => \'36.694604\',
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
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_dootrip_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'No doojects linked to this dootrip yet\',
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
            \'value\' => \'5\',
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
            \'lid\' => \'12\',
            \'name\' => \'\',
            \'street\' => \'\',
            \'additional\' => \'\',
            \'city\' => \'New York\',
            \'province\' => \'\',
            \'postal_code\' => \'\',
            \'country\' => \'es\',
            \'latitude\' => \'40.716164\',
            \'longitude\' => \'-74.001551\',
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
      \'last_comment_timestamp\' => \'1420215575\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'11\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Arusha\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'tz\',
          \'latitude\' => \'-3.370851\',
          \'longitude\' => \'36.694604\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Tanzania\',
        ),
        array(
          \'lid\' => \'12\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'New York\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'40.716164\',
          \'longitude\' => \'-74.001551\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'11\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Arusha\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'tz\',
        \'latitude\' => \'-3.370851\',
        \'longitude\' => \'36.694604\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Tanzania\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'59\',
        \'source\' => \'node/36\',
        \'alias\' => \'content/1-dootrip-new-york-spain-arusha-tanzania\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'45\',
      \'uid\' => \'1\',
      \'title\' => \'Laptop 000000001 was tagged in Los Angeles, United States\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'455355a3-b205-4c2a-acc0-18ce05d288e6\',
      \'nid\' => \'44\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420216462\',
      \'changed\' => \'1420216462\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'63ca07f0-886a-462d-9b73-4811bfc6c622\',
      \'revision_timestamp\' => \'1420216462\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/43">Laptop 000000001 was tagged in Los Angeles, United States<br><img src="/profiles/labdoo/files/pictures/laptop-simple.png" style="width: 20px; height: 21px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/43\\">Laptop 000000001 was tagged in Los Angeles, United States<br /><img src=\\"/profiles/labdoo/files/pictures/laptop-simple.png\\" style=\\"width: 20px; height: 21px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dooject\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420216462\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'21\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Los Angeles\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'34.049374\',
          \'longitude\' => \'-118.240835\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'21\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Los Angeles\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'34.049374\',
        \'longitude\' => \'-118.240835\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'65\',
        \'source\' => \'node/44\',
        \'alias\' => \'content/laptop-000000001-was-tagged-los-angeles-united-states\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'48\',
      \'uid\' => \'1\',
      \'title\' => \'Laptop 000000002 was tagged in Berlin, Germany\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c0832cfa-3686-4fe2-9259-53450a3852f8\',
      \'nid\' => \'46\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420220853\',
      \'changed\' => \'1420220853\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6b9f4a91-65b0-43d4-939d-9037c26053d3\',
      \'revision_timestamp\' => \'1420220853\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/45">Laptop 000000002 was tagged in Berlin, Germany<br><img src="/profiles/labdoo/files/pictures/laptop-simple.png" style="width: 20px; height: 21px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/45\\">Laptop 000000002 was tagged in Berlin, Germany<br /><img src=\\"/profiles/labdoo/files/pictures/laptop-simple.png\\" style=\\"width: 20px; height: 21px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dooject\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420220853\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'24\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Berlin\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'de\',
          \'latitude\' => \'52.523137\',
          \'longitude\' => \'13.400334\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Germany\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'24\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Berlin\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'de\',
        \'latitude\' => \'52.523137\',
        \'longitude\' => \'13.400334\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Germany\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'68\',
        \'source\' => \'node/46\',
        \'alias\' => \'content/laptop-000000002-was-tagged-berlin-germany\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'55\',
      \'uid\' => \'1\',
      \'title\' => \'000000005\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6288154b-c498-46d6-a98b-0f63486c2f7a\',
      \'nid\' => \'51\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1420221229\',
      \'changed\' => \'1420221244\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6e4158b5-14d7-49af-b9f1-02cb63edc22b\',
      \'revision_timestamp\' => \'1420221244\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_followers\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_amp_hours\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1350\',
          ),
        ),
      ),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1500\',
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
            \'value\' => \'Ubuntu 14.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 14.04\',
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
      \'field_dooject_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2.5\',
          ),
        ),
      ),
      \'field_dootrips\' => array(),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'100\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
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
            \'value\' => \'Dell\',
            \'format\' => NULL,
            \'safe_value\' => \'Dell\',
          ),
        ),
      ),
      \'field_picture\' => array(),
      \'field_serial_number\' => array(
        \'und\' => array(
          array(
            \'value\' => \'234567\',
            \'format\' => NULL,
            \'safe_value\' => \'234567\',
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
      \'field_volts\' => array(
        \'und\' => array(
          array(
            \'value\' => \'18.54\',
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
      \'last_comment_timestamp\' => \'1420221229\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'8\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Antigua\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'gt\',
          \'latitude\' => \'14.551780\',
          \'longitude\' => \'-90.741959\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'14.551780\',
            \'user_longitude\' => \'-90.741959\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Guatemala\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'8\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Antigua\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'gt\',
        \'latitude\' => \'14.551780\',
        \'longitude\' => \'-90.741959\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'14.551780\',
          \'user_longitude\' => \'-90.741959\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Guatemala\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'78\',
        \'source\' => \'node/51\',
        \'alias\' => \'laptop/000000005\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'33\',
      \'uid\' => \'1\',
      \'title\' => \'Nigeria, Ndoni: After hour school - Photo Album\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'91d8e3e4-8bc4-4c72-ac3a-434f12b41a19\',
      \'nid\' => \'33\',
      \'type\' => \'node_gallery_gallery\',
      \'language\' => \'und\',
      \'created\' => \'1420215278\',
      \'changed\' => \'1420215278\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6f910403-96d0-4a0e-a104-9e9be43773ca\',
      \'revision_timestamp\' => \'1420215278\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_photo_album_edoovillage\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'34\',
          ),
        ),
      ),
      \'field_photo_album_hub\' => array(),
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
      \'last_comment_timestamp\' => \'1420215278\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'node_gallery\' => array(
        \'ngid\' => \'33\',
        \'cover_item\' => NULL,
        \'item_count\' => \'0\',
        \'pub_item_count\' => \'0\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'55\',
        \'source\' => \'node/33\',
        \'alias\' => \'content/nigeria-ndoni-after-hour-school-photo-album\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'43\',
      \'uid\' => \'1\',
      \'title\' => \'Hub was created in @Planet Earth, [country not defined]\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4dd69d76-93ac-4cf8-b8fe-e03689d9768f\',
      \'nid\' => \'42\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420216355\',
      \'changed\' => \'1420216355\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'74285d5a-31e0-47b5-9d71-e43fc6468795\',
      \'revision_timestamp\' => \'1420216355\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/41">Hub was created in @Planet Earth, [country not defined]<br><img src="/profiles/labdoo/files/pictures/hub.png" style="width: 34px; height: 28px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/41\\">Hub was created in @Planet Earth, [country not defined]<br /><img src=\\"/profiles/labdoo/files/pictures/hub.png\\" style=\\"width: 34px; height: 28px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Hub\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'41\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420216355\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'19\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'@Planet Earth\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'xx\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'19\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'@Planet Earth\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'xx\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'63\',
        \'source\' => \'node/42\',
        \'alias\' => \'content/hub-was-created-planet-earth-country-not-defined\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'41\',
      \'uid\' => \'1\',
      \'title\' => \'Grassroots - Photo Album\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'afca28af-2d49-4891-a75a-2baa78c5829f\',
      \'nid\' => \'40\',
      \'type\' => \'node_gallery_gallery\',
      \'language\' => \'und\',
      \'created\' => \'1420216355\',
      \'changed\' => \'1420216355\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9351773c-20d6-4ebf-aa36-3550061941dc\',
      \'revision_timestamp\' => \'1420216355\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_photo_album_edoovillage\' => array(),
      \'field_photo_album_hub\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'41\',
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
      \'last_comment_timestamp\' => \'1420216355\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'node_gallery\' => array(
        \'ngid\' => \'40\',
        \'cover_item\' => NULL,
        \'item_count\' => \'0\',
        \'pub_item_count\' => \'0\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'62\',
        \'source\' => \'node/40\',
        \'alias\' => \'content/grassroots-photo-album\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'Hub was created in Barcelona, Spain\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1da5baec-a4c6-4739-b323-fa9a4c6e07c9\',
      \'nid\' => \'26\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420213745\',
      \'changed\' => \'1420213745\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'93e5d911-d3fc-4c18-be11-bc1df9c78645\',
      \'revision_timestamp\' => \'1420213745\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/25">Hub was created in Barcelona, Spain<br><img src="/profiles/labdoo/files/pictures/hub.png" style="width: 34px; height: 28px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/25\\">Hub was created in Barcelona, Spain<br /><img src=\\"/profiles/labdoo/files/pictures/hub.png\\" style=\\"width: 34px; height: 28px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Hub\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420213745\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'5\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'0.000000\',
          \'longitude\' => \'0.000000\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'5\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Barcelona\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'es\',
        \'latitude\' => \'0.000000\',
        \'longitude\' => \'0.000000\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Spain\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'47\',
        \'source\' => \'node/26\',
        \'alias\' => \'content/hub-was-created-barcelona-spain\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'49\',
      \'uid\' => \'1\',
      \'title\' => \'000000003\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c11c9144-409c-40eb-ab6e-a2a395d94142\',
      \'nid\' => \'47\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1420220981\',
      \'changed\' => \'1420220981\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'96328fb7-1d24-4202-9056-c0532cdf2aba\',
      \'revision_timestamp\' => \'1420220981\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_followers\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_amp_hours\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1350\',
          ),
        ),
      ),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1500\',
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
            \'value\' => \'Ubuntu 14.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 14.04\',
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
      \'field_dooject_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_dootrips\' => array(),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'80\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'41\',
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
            \'value\' => \'IBM Thinkpad\',
            \'format\' => NULL,
            \'safe_value\' => \'IBM Thinkpad\',
          ),
        ),
      ),
      \'field_picture\' => array(),
      \'field_serial_number\' => array(
        \'und\' => array(
          array(
            \'value\' => \'098765\',
            \'format\' => NULL,
            \'safe_value\' => \'098765\',
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
      \'field_volts\' => array(
        \'und\' => array(
          array(
            \'value\' => \'10.8\',
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
      \'last_comment_timestamp\' => \'1420220981\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'27\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'San Diego\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'32.715958\',
          \'longitude\' => \'-117.161944\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'27\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'San Diego\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'32.715958\',
        \'longitude\' => \'-117.161944\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'72\',
        \'source\' => \'node/47\',
        \'alias\' => \'laptop/000000003\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'51\',
      \'uid\' => \'1\',
      \'title\' => \'000000004\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e6db2ce9-32b9-4206-a68f-5a2eefd0b011\',
      \'nid\' => \'49\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1420221108\',
      \'changed\' => \'1420221108\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a33a41cb-330d-49f1-b068-d86a66605eaf\',
      \'revision_timestamp\' => \'1420221108\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_followers\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_amp_hours\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1200\',
          ),
        ),
      ),
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
            \'value\' => \'Ubuntu 14.04\',
            \'format\' => NULL,
            \'safe_value\' => \'Ubuntu 14.04\',
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
      \'field_dooject_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_dootrips\' => array(),
      \'field_edoovillage_destination\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'34\',
          ),
        ),
      ),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'100\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'41\',
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
            \'value\' => \'2000\',
          ),
        ),
      ),
      \'field_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dell\',
            \'format\' => NULL,
            \'safe_value\' => \'Dell\',
          ),
        ),
      ),
      \'field_picture\' => array(),
      \'field_serial_number\' => array(
        \'und\' => array(
          array(
            \'value\' => \'345678\',
            \'format\' => NULL,
            \'safe_value\' => \'345678\',
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
      \'field_volts\' => array(
        \'und\' => array(
          array(
            \'value\' => \'10.8\',
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
      \'last_comment_timestamp\' => \'1420221108\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'29\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Rome\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'it\',
          \'latitude\' => \'41.901094\',
          \'longitude\' => \'12.497076\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Italy\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'29\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Rome\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'it\',
        \'latitude\' => \'41.901094\',
        \'longitude\' => \'12.497076\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Italy\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'75\',
        \'source\' => \'node/49\',
        \'alias\' => \'laptop/000000004\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'000000001\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'394c3150-d9d2-4d6b-9244-cc36b3aa5fd3\',
      \'nid\' => \'43\',
      \'type\' => \'laptop\',
      \'language\' => \'en\',
      \'created\' => \'1420216462\',
      \'changed\' => \'1420216987\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a5812115-d7e3-40fc-9147-78aaa471e714\',
      \'revision_timestamp\' => \'1420216987\',
      \'revision_uid\' => \'1\',
      \'field_additional_editors\' => array(),
      \'field_additional_followers\' => array(),
      \'field_additional_notes\' => array(),
      \'field_additional_notification_em\' => array(),
      \'field_amp_hours\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1200\',
          ),
        ),
      ),
      \'field_cpu\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1500\',
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
      \'field_current_operating_system\' => array(),
      \'field_device_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laptop\',
          ),
        ),
      ),
      \'field_dooject_weight\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'field_dootrips\' => array(),
      \'field_edoovillage_destination\' => array(),
      \'field_hard_drive\' => array(
        \'und\' => array(
          array(
            \'value\' => \'60\',
          ),
        ),
      ),
      \'field_hub_laptop\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
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
            \'value\' => \'Dell\',
            \'format\' => NULL,
            \'safe_value\' => \'Dell\',
          ),
        ),
      ),
      \'field_picture\' => array(),
      \'field_serial_number\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1234\',
            \'format\' => NULL,
            \'safe_value\' => \'1234\',
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
      \'field_volts\' => array(
        \'und\' => array(
          array(
            \'value\' => \'18.54\',
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
      \'last_comment_timestamp\' => \'1420216462\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'23\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Los Angeles\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'us\',
          \'latitude\' => \'34.056444\',
          \'longitude\' => \'-118.245265\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'United States\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'23\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Los Angeles\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'us\',
        \'latitude\' => \'34.056444\',
        \'longitude\' => \'-118.245265\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'United States\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'66\',
        \'source\' => \'node/43\',
        \'alias\' => \'laptop/000000001\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'56\',
      \'uid\' => \'1\',
      \'title\' => \'Laptop 000000005 was delivered to an edoovillage in Antigua, Guatemala\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'213c3a93-8a81-443b-8444-9de015748dd5\',
      \'nid\' => \'53\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420221244\',
      \'changed\' => \'1420221244\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b270f5cd-786e-4c21-a39d-66ecec7bbadc\',
      \'revision_timestamp\' => \'1420221244\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/51">Laptop 000000005 was delivered to an edoovillage in Antigua, Guatemala<br><img src="/profiles/labdoo/files/pictures/laptop-delivered.png" style="width: 31px; height: 21px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/51\\">Laptop 000000005 was delivered to an edoovillage in Antigua, Guatemala<br /><img src=\\"/profiles/labdoo/files/pictures/laptop-delivered.png\\" style=\\"width: 31px; height: 21px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dooject\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'31\',
          ),
        ),
      ),
      \'field_hub_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
          ),
        ),
      ),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420221244\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'32\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Antigua\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'gt\',
          \'latitude\' => \'14.551780\',
          \'longitude\' => \'-90.741959\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Guatemala\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'32\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Antigua\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'gt\',
        \'latitude\' => \'14.551780\',
        \'longitude\' => \'-90.741959\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Guatemala\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'80\',
        \'source\' => \'node/53\',
        \'alias\' => \'content/laptop-000000005-was-delivered-edoovillage-antigua-guatemala\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'34\',
      \'uid\' => \'1\',
      \'title\' => \'Nigeria, Ndoni: After hour school\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6ade9261-d3d1-43c0-9bc9-e85961892a50\',
      \'nid\' => \'34\',
      \'type\' => \'edoovillage\',
      \'language\' => \'en\',
      \'created\' => \'1420215278\',
      \'changed\' => \'1420215278\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bb61b03e-05dc-4f36-a449-0f89574dff77\',
      \'revision_timestamp\' => \'1420215278\',
      \'revision_uid\' => \'1\',
      \'field_edoovillage_photo_album\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'33\',
          ),
        ),
      ),
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
            \'target_id\' => \'25\',
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
            \'value\' => \'50\',
          ),
        ),
      ),
      \'field_number_of_students\' => array(
        \'und\' => array(
          array(
            \'value\' => \'300\',
          ),
        ),
      ),
      \'field_number_of_teachers\' => array(
        \'und\' => array(
          array(
            \'value\' => \'10\',
          ),
        ),
      ),
      \'field_on_site_point_of_contact\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Professor Chris\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Professor Chris</p>\\n",
          ),
        ),
      ),
      \'field_project_application\' => array(),
      \'field_project_description\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Implement a computer lab connecting laptops to the Internet.\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Implement a computer lab connecting laptops to the Internet.</p>\\n",
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
            \'value\' => \'After hour school\',
            \'format\' => NULL,
            \'safe_value\' => \'After hour school\',
          ),
        ),
      ),
      \'field_semaphore\' => array(
        \'und\' => array(
          array(
            \'value\' => \'red\',
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
      \'last_comment_timestamp\' => \'1420215278\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'10\',
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
        \'lid\' => \'10\',
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
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'57\',
        \'source\' => \'node/34\',
        \'alias\' => \'content/nigeria-ndoni-after-hour-school\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'Labdoo Hub Barcelona\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'10ceac0c-34f0-4ce7-bfae-5a6cf0024aa0\',
      \'nid\' => \'25\',
      \'type\' => \'hub\',
      \'language\' => \'en\',
      \'created\' => \'1420213745\',
      \'changed\' => \'1420213745\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c9074a6c-324d-4d9f-ac36-ecabe16a53c0\',
      \'revision_timestamp\' => \'1420213745\',
      \'revision_uid\' => \'1\',
      \'field_hub_photo_album\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'24\',
          ),
        ),
      ),
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
      \'last_comment_timestamp\' => \'1420213745\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'6\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'41.389513\',
          \'longitude\' => \'2.147522\',
          \'source\' => \'1\',
          \'is_primary\' => \'0\',
          \'locpick\' => array(
            \'user_latitude\' => \'41.389513\',
            \'user_longitude\' => \'2.147522\',
          ),
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'6\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Barcelona\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'es\',
        \'latitude\' => \'41.389513\',
        \'longitude\' => \'2.147522\',
        \'source\' => \'1\',
        \'is_primary\' => \'0\',
        \'locpick\' => array(
          \'user_latitude\' => \'41.389513\',
          \'user_longitude\' => \'2.147522\',
        ),
        \'province_name\' => \'\',
        \'country_name\' => \'Spain\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'48\',
        \'source\' => \'node/25\',
        \'alias\' => \'content/labdoo-hub-barcelona\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \'Labdoo Hub Barcelona - Photo Album\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0921e9dd-7fbf-48e1-8c75-7ce230f2ba6f\',
      \'nid\' => \'24\',
      \'type\' => \'node_gallery_gallery\',
      \'language\' => \'und\',
      \'created\' => \'1420213745\',
      \'changed\' => \'1420213745\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e2138248-9b5f-49d3-8740-9426823cfd33\',
      \'revision_timestamp\' => \'1420213745\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_photo_album_edoovillage\' => array(),
      \'field_photo_album_hub\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'25\',
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
      \'last_comment_timestamp\' => \'1420213745\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'node_gallery\' => array(
        \'ngid\' => \'24\',
        \'cover_item\' => NULL,
        \'item_count\' => \'0\',
        \'pub_item_count\' => \'0\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'46\',
        \'source\' => \'node/24\',
        \'alias\' => \'content/labdoo-hub-barcelona-photo-album\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'39\',
      \'uid\' => \'1\',
      \'title\' => \'Dootrip from Barcelona (Spain) to Antigua (Guatemala) was created\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3dd9dce1-1da3-4be5-ad35-e53374865a43\',
      \'nid\' => \'39\',
      \'type\' => \'action\',
      \'language\' => \'und\',
      \'created\' => \'1420215635\',
      \'changed\' => \'1420215635\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f307200f-ca07-4467-83be-f71c343b8c0c\',
      \'revision_timestamp\' => \'1420215635\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="/node/38">Dootrip from Barcelona (Spain) to Antigua (Guatemala) was created<br><img src="/profiles/labdoo/files/pictures/dootrip.png" style="width: 34px; height: 26px;" /></a></p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><a href=\\"/node/38\\">Dootrip from Barcelona (Spain) to Antigua (Guatemala) was created<br /><img src=\\"/profiles/labdoo/files/pictures/dootrip.png\\" style=\\"width: 34px; height: 26px;\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_action_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dootrip\',
          ),
        ),
      ),
      \'field_edoovillage_action\' => array(),
      \'field_hub_action\' => array(),
      \'field_labdooer_action\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'last_comment_timestamp\' => \'1420215635\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(
        array(
          \'lid\' => \'16\',
          \'name\' => \'\',
          \'street\' => \'\',
          \'additional\' => \'\',
          \'city\' => \'Barcelona\',
          \'province\' => \'\',
          \'postal_code\' => \'\',
          \'country\' => \'es\',
          \'latitude\' => \'41.380424\',
          \'longitude\' => \'2.169154\',
          \'source\' => \'0\',
          \'is_primary\' => \'0\',
          \'province_name\' => \'\',
          \'country_name\' => \'Spain\',
        ),
      ),
      \'location\' => array(
        \'lid\' => \'16\',
        \'name\' => \'\',
        \'street\' => \'\',
        \'additional\' => \'\',
        \'city\' => \'Barcelona\',
        \'province\' => \'\',
        \'postal_code\' => \'\',
        \'country\' => \'es\',
        \'latitude\' => \'41.380424\',
        \'longitude\' => \'2.169154\',
        \'source\' => \'0\',
        \'is_primary\' => \'0\',
        \'province_name\' => \'\',
        \'country_name\' => \'Spain\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'60\',
        \'source\' => \'node/39\',
        \'alias\' => \'content/dootrip-barcelona-spain-antigua-guatemala-was-created\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

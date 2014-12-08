<?php

/*
 * Labdoo teams rules
 *
 * Note: to refresh rules, you need to run cron
 */
function lbd_teams_default_rules_configuration() {
  $configs = array();

  $rule = '{ "rules_teams_new_content" : {
    "LABEL" : "Teams new content notification",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "og", "rules" ],
    "ON" : { "node_insert" : [] },
    "IF" : [ { "og_entity_is_group_content" : { "entity" : [ "node" ] } } ],
    "DO" : [
      { "og_get_members" : {
          "USING" : { "group_content" : [ "node" ] },
          "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
        }
      },
        { "LOOP" : {
          "USING" : { "list" : [ "group-members" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
              { "mail" : {
                "to" : [ "list-item:mail" ],
                "subject" : "[Labdoo] New post in one of your Labdoo teams",
                "message" : "Hello [list-item:name],\r\n\r\nThere is a new post called \"[node:title]\" that belongs to one of the Labdoo teams you are subscribed to. To access the new post, you can go to the following link:\r\n\r\n[node:url]\r\n\r\nThe Labdoo Team\r\n\r\n#If you don\u0027t want to receive these emails from Labdoo in the future, you can unsubscribe by going to https:\/\/www.labdoo.org\/my-teams",
                "from" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }';

  $configs['rules_teams_new_content'] = rules_import($rule);

  return $configs;
}


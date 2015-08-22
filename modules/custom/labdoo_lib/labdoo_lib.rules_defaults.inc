<?php

/*
 * Note: to refresh rules, you need to run cron
 */
function labdoo_lib_default_rules_configuration() {
  $configs = array();

  $rule = '{ "rules_redirect_edoovillage_to_its_dashboard" : {
      "LABEL" : "Redirect edoovillage to its dashboard",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "node_view--edoovillage" : { "bundle" : "edoovillage" } },
      "IF" : [
        { "php_eval" : { "code" : "if(strpos(request_uri(), \u0022edoovillage?\u0022))\r\n  return FALSE;\r\nreturn TRUE;" } }
      ],
      "DO" : [ { "redirect" : { "url" : "edoovillage?e=[node:nid]", "force" : 0 } } ]
    }
  }';

  $configs['rules_redirect_edoovillage_to_its_dashboard'] = rules_import($rule);

  $rule = '{ "rules_redirect_hub_to_its_dashboard" : {
      "LABEL" : "Redirect hub to its dashboard",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "node_view--hub" : { "bundle" : "hub" } },
      "IF" : [
        { "php_eval" : { "code" : "if(strpos(request_uri(), \u0022hub?\u0022))\r\n  return FALSE;\r\nreturn TRUE;" } }
      ],
      "DO" : [ { "redirect" : { "url" : "hub?h=[node:nid]", "force" : 0 } } ]
    }
  }';

  $configs['rules_redirect_hub_to_its_dashboard'] = rules_import($rule);
  return $configs;
}


/**
 * Implements hook_default_rules_configuration_alter.
 */
function labdoo_lib_default_rules_configuration_alter(&$configs) {
  // These rules are deprecated since they are now implemented
  // programmatically via the labdoo_lib_node_view() using drupal_goto() which is
  // easier to maintain and scale. 
  $configs['rules_redirect_edoovillage_to_its_dashboard']->active = FALSE;
  $configs['rules_redirect_hub_to_its_dashboard']->active = FALSE;
}


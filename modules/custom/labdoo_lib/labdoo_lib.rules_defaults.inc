<?php

/*
 * This rule redirects an edoovillage's node to
 * its own dashboard
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
  return $configs;
}


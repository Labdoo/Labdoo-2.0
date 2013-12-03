<?php
/**
 * @file
 * lbd_webservices.features.inc
 */

/**
 * Implements hook_default_oauth2_server().
 */
function lbd_webservices_default_oauth2_server() {
  $items = array();
  $items['lbd_oauth2_server'] = entity_import('oauth2_server', '{
    "name" : "lbd_oauth2_server",
    "label" : "Labdoo OAuth2 Server",
    "settings" : {
      "enforce_state" : true,
      "default_scope" : "basic",
      "allow_implicit" : 1,
      "grant_types" : {
        "authorization_code" : "authorization_code",
        "refresh_token" : "refresh_token",
        "client_credentials" : 0,
        "password" : 0
      },
      "always_issue_new_refresh_token" : 1,
      "access_lifetime" : "3600",
      "refresh_token_lifetime" : "1209600",
      "require_exact_redirect_uri" : 1
    },
    "rdf_mapping" : [],
    "scopes" : [
      {
        "name" : "basic",
        "description" : "View basic information about your account.",
        "rdf_mapping" : []
      }
    ]
  }');
  return $items;
}

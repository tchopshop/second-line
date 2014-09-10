<?php
/**
 * @file
 * baseline_webform.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function baseline_webform_default_rules_configuration() {
  $items = array();
  $items['rules_take_user_to_webform_create_page'] = entity_import('rules_config', '{ "rules_take_user_to_webform_create_page" : {
      "LABEL" : "Take user to webform create page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "webform" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--webform" : { "bundle" : "webform" } },
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "redirect" : { "url" : "node\\/[node:nid]\\/webform" } }
      ]
    }
  }');
  return $items;
}

<?php
/**
 * @file
 * th_rules_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function th_rules_config_default_rules_configuration() {
  $items = array();
  $items['rules_th_create_question'] = entity_import('rules_config', '{ "rules_th_create_question" : {
      "LABEL" : "TH Create Question",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "TH" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "question" : "question" } }
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "3" : "3", "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "drupal_message" : { "message" : "Your question has been submitted to moderation queue." } }
      ]
    }
  }');
  $items['rules_th_create_video'] = entity_import('rules_config', '{ "rules_th_create_video" : {
      "LABEL" : "TH Create Video",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "TH" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "video" : "video" } } } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_th_question" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-th-question" ] } },
        { "entity_has_field" : { "entity" : [ "node:field-th-question" ], "field" : "field_th_status" } },
        { "data_is_empty" : { "data" : [ "node:field-th-question:field-th-status" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-th-question:field-th-status" ], "value" : 1 } },
        { "data_set" : { "data" : [ "node:field-th-question:comment" ], "value" : "1" } },
        { "drupal_message" : { "message" : "Status of Question \\u003Ca href=\\u0022[node:field-th-question:url]\\u0022\\u003E[node:field-th-question]\\u003C\\/a\\u003E has been set to \\u0022Answered\\u0022 and comments have been disabled." } }
      ]
    }
  }');
  $items['rules_th_update_video'] = entity_import('rules_config', '{ "rules_th_update_video" : {
      "LABEL" : "TH Update Video",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "TH" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "video" : "video" } } } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_th_question" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-th-question" ] } },
        { "entity_has_field" : { "entity" : [ "node:field-th-question" ], "field" : "field_th_status" } },
        { "data_is_empty" : { "data" : [ "node:field-th-question:field-th-status" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-th-question:field-th-status" ], "value" : 1 } },
        { "data_set" : { "data" : [ "node:field-th-question:comment" ], "value" : "2" } },
        { "drupal_message" : { "message" : "Status of Question \\u003Ca href=\\u0022[node:field-th-question:url]\\u0022\\u003E[node:field-th-question]\\u003C\\/a\\u003E has been set to \\u0022Answered\\u0022 and comments have been disabled." } }
      ]
    }
  }');
  return $items;
}

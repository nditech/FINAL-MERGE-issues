<?php
/**
 * @file
 * th_search_db.features.inc
 */

/**
 * Implements hook_views_api().
 */
function th_search_db_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function th_search_db_default_search_api_index() {
  $items = array();
  $items['database_server_index'] = entity_import('search_api_index', '{
    "name" : "Database server index",
    "machine_name" : "database_server_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "views" : { "type" : "integer" },
        "th_share_count" : { "type" : "integer" },
        "field_th_candidate" : { "type" : "integer", "entity_type" : "node" },
        "field_th_question" : { "type" : "integer", "entity_type" : "node" },
        "field_video_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "field_th_candidate:title" : { "type" : "text" },
        "field_th_candidate:field_th_first_name" : { "type" : "text" },
        "field_th_candidate:field_th_last_name" : { "type" : "text" },
        "field_th_candidate:field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_th_candidate:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_question:title" : { "type" : "text" },
        "field_th_question:field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_th_question:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_question:field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_th_video:file" : { "type" : "integer", "entity_type" : "file" },
        "field_th_candidate:field_th_party:nid" : { "type" : "integer" },
        "field_th_candidate:field_th_party:title" : { "type" : "text" },
        "field_th_candidate:field_th_party:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_question:field_th_candidate:title" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_first_name" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_last_name" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_th_question:field_th_candidate:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_question:field_th_party:nid" : { "type" : "integer" },
        "field_th_question:field_th_party:title" : { "type" : "text" },
        "field_th_question:field_th_party:field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_th_question:field_th_party:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_question:field_region:name" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function th_search_db_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "Database server",
    "machine_name" : "database_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "database_server_index" : {
          "type" : {
            "table" : "search_api_db_database_server_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_database_server_index_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "views" : {
            "table" : "search_api_db_database_server_index_views",
            "type" : "integer",
            "boost" : "1.0"
          },
          "th_share_count" : {
            "table" : "search_api_db_database_server_index_th_share_count",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_candidate" : {
            "table" : "search_api_db_database_server_index_field_th_candidate",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question" : {
            "table" : "search_api_db_database_server_index_field_th_question",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_video_tags" : {
            "table" : "search_api_db_database_server_index_field_video_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_party" : {
            "table" : "search_api_db_database_server_index_field_th_party",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_region" : {
            "table" : "search_api_db_database_server_index_field_region",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_database_server_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_th_candidate:field_th_first_name" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_t",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_candidate:field_th_last_name" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_candidate:field_th_party" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_2",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question:title" : {
            "table" : "search_api_db_database_server_index_field_th_question_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_th_party" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_th",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question:field_issue" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_is",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_question:field_region" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_re",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_video:file" : {
            "table" : "search_api_db_database_server_index_field_th_video_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_candidate:field_th_party:nid" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_3",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_candidate:field_th_party:title" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_4",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_th_candidate:field_th_first_name" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_th_candidate:field_th_last_name" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__2",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_th_candidate:field_th_party" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__3",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question:field_th_party:nid" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__4",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question:field_th_party:title" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__5",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_th_party:field_th_party" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__6",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question:field_region:name" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__7",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_candidate:title" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_th_candidate:title" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__8",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_issue" : {
            "table" : "search_api_db_database_server_index_field_issue",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_candidate:field_issue" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_i",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_candidate:field_th_party:field_issue" : {
            "table" : "search_api_db_database_server_index_field_th_candidate_field_5",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_question:field_th_candidate:field_issue" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__9",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_question:field_th_party:field_issue" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_10",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

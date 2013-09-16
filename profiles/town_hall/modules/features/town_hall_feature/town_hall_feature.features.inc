<?php
/**
 * @file
 * town_hall_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function town_hall_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function town_hall_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function town_hall_feature_default_entityform_type() {
  $items = array();
  $items['th_newsletter'] = entity_import('entityform_type', '{
    "type" : "th_newsletter",
    "label" : "TH Newsletter Signup",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : [],
      "validation_rules" : [],
      "submit_button_text" : "Submit",
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0, "5" : 0 },
      "resubmit_action" : "disallow",
      "access_rules" : [],
      "redirect_path" : "[current-page:url]",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function town_hall_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'errors' => array(),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 1,
      'teaser' => 1,
    ),
    'show_as_field' => FALSE,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'town_hall_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Like video".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like video',
    'global' => 0,
    'types' => array(
      0 => 'video',
    ),
    'errors' => array(),
    'flag_short' => 'Like',
    'flag_long' => 'I like this',
    'flag_message' => 'Thank you for supporting [node:field-th-candidate:field_th_first_name] of [node:field-th-question:field-region:name] from [node:field-th-candidate:field-th-party:title]',
    'unflag_short' => 'Cancel like',
    'unflag_long' => 'Cancel your like',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'town_hall_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Like questions".
  $flags['like_questions'] = array(
    'entity_type' => 'node',
    'title' => 'Like questions',
    'global' => 0,
    'types' => array(
      0 => 'question',
    ),
    'errors' => array(),
    'flag_short' => 'Vote up',
    'flag_long' => 'Vote up',
    'flag_message' => '',
    'unflag_short' => 'Cancel vote up',
    'unflag_long' => 'Cancel your vote',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'town_hall_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Dislike video".
  $flags['unlike'] = array(
    'entity_type' => 'node',
    'title' => 'Dislike video',
    'global' => 0,
    'types' => array(
      0 => 'video',
    ),
    'errors' => array(),
    'flag_short' => 'Dislike',
    'flag_long' => 'I dislike this',
    'flag_message' => '',
    'unflag_short' => 'Cancel dislike',
    'unflag_long' => 'Cancel your dislike',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'town_hall_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Unlike questions".
  $flags['unlike_questions'] = array(
    'entity_type' => 'node',
    'title' => 'Unlike questions',
    'global' => 0,
    'types' => array(
      0 => 'question',
    ),
    'errors' => array(),
    'flag_short' => 'Vote down',
    'flag_long' => 'Vote down',
    'flag_message' => '',
    'unflag_short' => 'Cancel vote down',
    'unflag_long' => 'Cancel your vote',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'town_hall_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function town_hall_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'candidate' => array(
      'name' => t('Candidate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'party' => array(
      'name' => t('Party'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Party Name'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Your question'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function town_hall_feature_default_search_api_index() {
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
        "title" : { "type" : "string" },
        "field_video_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_question" : { "type" : "integer", "entity_type" : "node" },
        "field_th_candidate" : { "type" : "integer", "entity_type" : "node" },
        "field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "field_th_question:title" : { "type" : "text" },
        "field_th_question:field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_th_question:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_candidate:field_th_first_name" : { "type" : "text" },
        "field_th_candidate:field_th_last_name" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_th_question:field_th_candidate:field_th_first_name" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_last_name" : { "type" : "text" },
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
  $items['solr_server_index'] = entity_import('search_api_index', '{
    "name" : "Solr Server index",
    "machine_name" : "solr_server_index",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "string" },
        "field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "field_th_question:title" : { "type" : "text" },
        "field_th_question:field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_th_question:field_issue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_th_candidate:field_th_first_name" : { "type" : "text" },
        "field_th_candidate:field_th_last_name" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_party" : { "type" : "integer", "entity_type" : "node" },
        "field_th_question:field_th_candidate:field_th_first_name" : { "type" : "text" },
        "field_th_question:field_th_candidate:field_th_last_name" : { "type" : "text" },
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
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
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
function town_hall_feature_default_search_api_server() {
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
            "type" : "string",
            "boost" : "1.0"
          },
          "field_video_tags" : {
            "table" : "search_api_db_database_server_index_field_video_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_th_question" : {
            "table" : "search_api_db_database_server_index_field_th_question",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_candidate" : {
            "table" : "search_api_db_database_server_index_field_th_candidate",
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
          "field_th_question:title" : {
            "table" : "search_api_db_database_server_index_field_th_question_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_th_question:field_region" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_re",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_th_question:field_issue" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_is",
            "type" : "list\\u003Cinteger\\u003E",
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
          "field_th_question:field_th_candidate:field_th_party" : {
            "table" : "search_api_db_database_server_index_field_th_question_field_th",
            "type" : "integer",
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
          "field_th_question:field_region:name" : {
            "table" : "search_api_db_database_server_index_field_th_question_field__3",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  $items['solr_server'] = entity_import('search_api_server', '{
    "name" : "Solr Server",
    "machine_name" : "solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

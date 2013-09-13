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

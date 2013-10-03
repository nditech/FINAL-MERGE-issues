<?php
/**
 * @file
 * th_content_type_question_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function th_content_type_question__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function th_content_type_question__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function th_content_type_question__flag_default_flags() {
  $flags = array();
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
    'api_version' => 3,
    'module' => 'th_content_type_question_',
    'locked' => array(
      0 => 'name',
    ),
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
    'api_version' => 3,
    'module' => 'th_content_type_question_',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function th_content_type_question__node_info() {
  $items = array(
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Your question'),
      'help' => '',
    ),
  );
  return $items;
}

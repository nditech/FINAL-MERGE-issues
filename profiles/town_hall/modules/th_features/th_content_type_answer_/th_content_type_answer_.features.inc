<?php
/**
 * @file
 * th_content_type_answer_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function th_content_type_answer__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
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
function th_content_type_answer__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function th_content_type_answer__flag_default_flags() {
  $flags = array();
  // Exported flag: "Like video".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like video',
    'global' => 0,
    'types' => array(
      0 => 'video',
    ),
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
    'module' => 'th_content_type_answer_',
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
    'module' => 'th_content_type_answer_',
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
function th_content_type_answer__node_info() {
  $items = array(
    'video' => array(
      'name' => t('answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

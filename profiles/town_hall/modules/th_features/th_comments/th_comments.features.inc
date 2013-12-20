<?php
/**
 * @file
 * th_comments.features.inc
 */

/**
 * Implements hook_views_api().
 */
function th_comments_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function th_comments_flag_default_flags() {
  $flags = array();
  // Exported flag: "Comment Down".
  $flags['comment_down'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment Down',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Down',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Cancel Down',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'th_comments',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Comment Up".
  $flags['comment_up'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment Up',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Up',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Cancel Up',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'th_comments',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

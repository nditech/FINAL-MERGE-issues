<?php
/**
 * @file
 * th_content_type_candidate_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function th_content_type_candidate__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function th_content_type_candidate__node_info() {
  $items = array(
    'candidate' => array(
      'name' => t('Candidate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

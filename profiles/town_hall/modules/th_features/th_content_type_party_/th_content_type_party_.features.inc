<?php
/**
 * @file
 * th_content_type_party_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function th_content_type_party__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function th_content_type_party__node_info() {
  $items = array(
    'party' => array(
      'name' => t('Party'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Party Name'),
      'help' => '',
    ),
  );
  return $items;
}

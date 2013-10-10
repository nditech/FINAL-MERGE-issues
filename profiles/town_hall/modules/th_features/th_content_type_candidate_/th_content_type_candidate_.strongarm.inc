<?php
/**
 * @file
 * th_content_type_candidate_.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function th_content_type_candidate__strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_candidate';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_candidate';
  $strongarm->value = '[node:field-th-first-name] [node:field-th-last-name]';
  $export['auto_entitylabel_pattern_node_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_candidate';
  $strongarm->value = '1';
  $export['comment_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_candidate';
  $strongarm->value = '1';
  $export['comment_default_mode_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_candidate';
  $strongarm->value = '50';
  $export['comment_default_per_page_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_candidate';
  $strongarm->value = '1';
  $export['comment_form_location_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_candidate';
  $strongarm->value = '1';
  $export['comment_preview_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_candidate';
  $strongarm->value = '1';
  $export['comment_subject_field_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__candidate';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => 'false',
      ),
      'rss' => array(
        'custom_settings' => 'false',
      ),
      'search_index' => array(
        'custom_settings' => 'false',
      ),
      'search_result' => array(
        'custom_settings' => 'false',
      ),
      'token' => array(
        'custom_settings' => 'false',
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_candidate';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_candidate';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_candidate';
  $strongarm->value = '1';
  $export['node_preview_candidate'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * th_content_type_candidate_.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function th_content_type_candidate__ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|candidate|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'candidate';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|candidate|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function th_content_type_candidate__ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|candidate|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'candidate';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
        3 => 'field_th_party',
        4 => 'field_th_fb_page',
        5 => 'field_th_website',
        6 => 'field_fb_social_networks',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title' => 'right',
      'body' => 'right',
      'field_th_party' => 'right',
      'field_th_fb_page' => 'right',
      'field_th_website' => 'right',
      'field_fb_social_networks' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|candidate|full'] = $ds_layout;

  return $export;
}

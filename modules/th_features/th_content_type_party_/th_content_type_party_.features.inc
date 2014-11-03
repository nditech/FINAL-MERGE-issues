<?php
/**
 * @file
 * th_content_type_party_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function th_content_type_party__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function th_content_type_party__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function th_content_type_party__image_default_styles() {
  $styles = array();

  // Exported image style: party_logo.
  $styles['party_logo'] = array(
    'name' => 'party_logo',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 168,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'party_logo',
  );

  return $styles;
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

<?php
/**
 * @file
 * th_comments.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function th_comments_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_th_comments_display'
  $field_bases['field_th_comments_display'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_th_comments_display',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  return $field_bases;
}

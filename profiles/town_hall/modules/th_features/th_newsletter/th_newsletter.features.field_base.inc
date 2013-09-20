<?php
/**
 * @file
 * th_newsletter.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function th_newsletter_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_th_email'
  $field_bases['field_th_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_th_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  return $field_bases;
}

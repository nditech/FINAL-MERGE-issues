<?php
/**
 * @file
 * th_newsletter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function th_newsletter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-th_newsletter-field_th_email'
  $field_instances['entityform-th_newsletter-field_th_email'] = array(
    'bundle' => 'th_newsletter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_th_email',
    'label' => 'Sign up for the newsletter',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sign up for the newsletter');

  return $field_instances;
}

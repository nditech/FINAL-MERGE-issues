<?php
/**
 * @file
 * th_demo_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function th_demo_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_party';
  $strongarm->value = 0;
  $export['comment_anonymous_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_party';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_party'] = $strongarm;

  return $export;
}

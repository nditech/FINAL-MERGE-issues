<?php
/**
 * @file
 * town_hall_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function town_hall_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'most_shared_watched_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Most Shared/Watched tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'most_watched',
      'display' => 'block',
      'args' => '',
      'title' => 'Most Watched ',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'most_shared',
      'display' => 'block',
      'args' => '',
      'title' => 'Most Shared',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Most Shared');
  t('Most Shared/Watched tabs');
  t('Most Watched ');

  $export['most_shared_watched_tabs'] = $quicktabs;

  return $export;
}

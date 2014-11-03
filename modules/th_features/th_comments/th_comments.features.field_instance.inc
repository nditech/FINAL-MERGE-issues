<?php
/**
 * @file
 * th_comments.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function th_comments_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-video-field_th_comments_display'
  $field_instances['node-video-field_th_comments_display'] = array(
    'bundle' => 'video',
    'default_value' => array(
      0 => array(
        'vname' => 'comments_display|block',
        'vargs' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_th_comments_display',
    'label' => 'Comments',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'all_questions' => 0,
        'all_questions_block' => 0,
        'all_questions_by_issue' => 0,
        'candidates' => 0,
        'candidates_videos' => 0,
        'comments_display' => 'comments_display',
        'entityform_type_list' => 0,
        'entityforms' => 0,
        'home_page_videos' => 0,
        'issues_videos' => 0,
        'media_default' => 0,
        'most_shared' => 0,
        'most_watched' => 0,
        'parties' => 0,
        'questions_bulk_operations' => 0,
        'rss_candidate' => 0,
        'rss_issue' => 0,
        'rss_party' => 0,
        'search' => 0,
        'th_candidates_home' => 0,
        'th_ef_newsletter_signup' => 0,
        'th_flag_content' => 0,
        'th_parties_home' => 0,
        'th_party_page_videos' => 0,
        'th_taxonomy_terms' => 0,
        'user_entityforms' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comments');

  return $field_instances;
}

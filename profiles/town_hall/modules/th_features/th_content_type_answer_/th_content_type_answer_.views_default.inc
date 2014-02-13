<?php
/**
 * @file
 * th_content_type_answer_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function th_content_type_answer__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'candidates_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos: Candidate page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'ops' => 'ops',
    'ops_1' => 'ops_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['required'] = TRUE;
  /* Relationship: Flags: like */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Flag (Like Video)';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Flag (Dislike Video)';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'unlike';
  /* Relationship: Flags: like counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'likes counter';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'dislikes counter';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'unlike';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Party video */
  $handler->display->display_options['fields']['field_th_video']['id'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['table'] = 'field_data_field_th_video';
  $handler->display->display_options['fields']['field_th_video']['field'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['label'] = '';
  $handler->display->display_options['fields']['field_th_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_th_video']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Views';
  $handler->display->display_options['fields']['totalcount']['element_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['separator'] = '';
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_region']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['element_label_type'] = 'span';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['path'] = 'th/videos/[field_video_tags-tid]';
  $handler->display->display_options['fields']['field_video_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
  /* Field: Content: Service links */
  $handler->display->display_options['fields']['service_links']['id'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['table'] = 'node';
  $handler->display->display_options['fields']['service_links']['field'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['label'] = '';
  $handler->display->display_options['fields']['service_links']['element_label_colon'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Contextual filter: Content: Candidate (field_th_candidate) */
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['id'] = 'field_th_candidate_target_id';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['field'] = 'field_th_candidate_target_id';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_th_candidate_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Issue (field_issue) */
  $handler->display->display_options['filters']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['filters']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['filters']['field_issue_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator_id'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['label'] = 'Issue';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['identifier'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_issue_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_tid']['vocabulary'] = 'th_issues';
  $handler->display->display_options['filters']['field_issue_tid']['hierarchy'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['candidates_videos'] = $view;

  $view = new view();
  $view->name = 'issues_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos: Question page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'ops' => 'ops',
    'ops_1' => 'ops_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Flags: like */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Flag (Like)';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Flag (Dislike)';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'unlike';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['id'] = 'field_th_candidate_target_id';
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['field'] = 'field_th_candidate_target_id';
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['label'] = 'Candidate';
  /* Relationship: Flags: like counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Likes Counter';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Dislikes counter';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'unlike';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Party video */
  $handler->display->display_options['fields']['field_th_video']['id'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['table'] = 'field_data_field_th_video';
  $handler->display->display_options['fields']['field_th_video']['field'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['label'] = '';
  $handler->display->display_options['fields']['field_th_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_th_video']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Likes counter';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = 'Dislikes counter';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '';
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'views';
  /* Field: Content: Service links */
  $handler->display->display_options['fields']['service_links']['id'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['table'] = 'node';
  $handler->display->display_options['fields']['service_links']['field'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['label'] = '';
  $handler->display->display_options['fields']['service_links']['element_label_colon'] = FALSE;
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_region']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['hide_empty'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['path'] = 'th/videos/[field_video_tags-tid]';
  $handler->display->display_options['fields']['field_video_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
  /* Field: Content: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_th_candidate']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_th_candidate']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Party */
  $handler->display->display_options['fields']['field_th_party']['id'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['table'] = 'field_data_field_th_party';
  $handler->display->display_options['fields']['field_th_party']['field'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['relationship'] = 'field_th_candidate_target_id';
  $handler->display->display_options['fields']['field_th_party']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_th_party']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_th_party']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Question (field_th_question) */
  $handler->display->display_options['arguments']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['arguments']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['arguments']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['arguments']['field_th_question_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_th_question_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_th_question_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_th_question_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_th_question_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['issues_videos'] = $view;

  $view = new view();
  $view->name = 'most_shared';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos: Most shared';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Most Shared';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Social Stats: Total social shares */
  $handler->display->display_options['fields']['total_virality']['id'] = 'total_virality';
  $handler->display->display_options['fields']['total_virality']['table'] = 'social_stats_total';
  $handler->display->display_options['fields']['total_virality']['field'] = 'total_virality';
  $handler->display->display_options['fields']['total_virality']['label'] = 'Shares';
  $handler->display->display_options['fields']['total_virality']['separator'] = ' ';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['th_share_count_value']['id'] = 'th_share_count_value';
  $handler->display->display_options['sorts']['th_share_count_value']['table'] = 'field_data_th_share_count';
  $handler->display->display_options['sorts']['th_share_count_value']['field'] = 'th_share_count_value';
  $handler->display->display_options['sorts']['th_share_count_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['th_share_count_value']['id'] = 'th_share_count_value';
  $handler->display->display_options['filters']['th_share_count_value']['table'] = 'field_data_th_share_count';
  $handler->display->display_options['filters']['th_share_count_value']['field'] = 'th_share_count_value';
  $handler->display->display_options['filters']['th_share_count_value']['operator'] = 'not empty';
  /* Filter criterion: Social Stats: Total social shares */
  $handler->display->display_options['filters']['total_virality']['id'] = 'total_virality';
  $handler->display->display_options['filters']['total_virality']['table'] = 'social_stats_total';
  $handler->display->display_options['filters']['total_virality']['field'] = 'total_virality';
  $handler->display->display_options['filters']['total_virality']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'share_count' => 'share_count',
  );
  $handler->display->display_options['style_options']['default'] = 'share_count';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'share_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['path'] = 'th/admin/most-shared';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Most Shared';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['most_shared'] = $view;

  $view = new view();
  $view->name = 'most_watched';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos: Most watched';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Most Watched';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Views';
  $handler->display->display_options['fields']['totalcount']['element_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['separator'] = '';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content statistics: Total views */
  $handler->display->display_options['filters']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['filters']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['filters']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['filters']['totalcount']['operator'] = '!=';
  $handler->display->display_options['filters']['totalcount']['value']['value'] = '0';
  /* Filter criterion: Content statistics: Total views */
  $handler->display->display_options['filters']['totalcount_1']['id'] = 'totalcount_1';
  $handler->display->display_options['filters']['totalcount_1']['table'] = 'node_counter';
  $handler->display->display_options['filters']['totalcount_1']['field'] = 'totalcount';
  $handler->display->display_options['filters']['totalcount_1']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'totalcount' => 'totalcount',
  );
  $handler->display->display_options['style_options']['default'] = 'totalcount';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['separator'] = '';
  $handler->display->display_options['path'] = 'th/admin/most-watched';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Most watched';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['most_watched'] = $view;

  $view = new view();
  $view->name = 'th_flag_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TH Flag content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: like */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Flag Like video';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like';
  /* Relationship: Flags: like counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Counter Like video';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Flag Dislike video';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'unlike';
  /* Relationship: Flags: unlike counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Counter Dislike video';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'unlike';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_type'] = 'span';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'views';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_wrapper_class'] = 'right';
  /* Field: Content: Service links */
  $handler->display->display_options['fields']['service_links']['id'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['table'] = 'node';
  $handler->display->display_options['fields']['service_links']['field'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['label'] = '';
  $handler->display->display_options['fields']['service_links']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'if (arg(0) == \'node\' && is_numeric(arg(1))) {return arg(1); }';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['th_flag_content'] = $view;

  $view = new view();
  $view->name = 'th_party_page_videos';
  $view->description = '';
  $view->tag = 'TH';
  $view->base_table = 'node';
  $view->human_name = 'Videos: Party page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'ops' => 'ops',
    'ops_1' => 'ops_1',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['id'] = 'field_th_candidate_target_id';
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['field'] = 'field_th_candidate_target_id';
  $handler->display->display_options['relationships']['field_th_candidate_target_id']['label'] = 'Candidate';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  /* Relationship: Flags: like */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Flag (Like)';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Flag (Dislike)';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'unlike';
  /* Relationship: Flags: like counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'likes counter';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like';
  /* Relationship: Flags: unlike counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'dislike counter';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'unlike';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Party video */
  $handler->display->display_options['fields']['field_th_video']['id'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['table'] = 'field_data_field_th_video';
  $handler->display->display_options['fields']['field_th_video']['field'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['label'] = '';
  $handler->display->display_options['fields']['field_th_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_th_video']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'views';
  /* Field:  Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_region']['ui_name'] = ' Region';
  $handler->display->display_options['fields']['field_region']['alter']['text'] = '[field_region], ';
  $handler->display->display_options['fields']['field_region']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['hide_empty'] = TRUE;
  /* Field: Issues */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['ui_name'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['alter']['text'] = '[field_issue], ';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Tags */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['ui_name'] = 'Tags';
  $handler->display->display_options['fields']['field_video_tags']['alter']['text'] = '[field_video_tags]';
  $handler->display->display_options['fields']['field_video_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
  /* Field: Content: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_th_candidate']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_th_candidate']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Service links */
  $handler->display->display_options['fields']['service_links']['id'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['table'] = 'node';
  $handler->display->display_options['fields']['service_links']['field'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['label'] = '';
  $handler->display->display_options['fields']['service_links']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Party (field_th_party) */
  $handler->display->display_options['arguments']['field_th_party_target_id']['id'] = 'field_th_party_target_id';
  $handler->display->display_options['arguments']['field_th_party_target_id']['table'] = 'field_data_field_th_party';
  $handler->display->display_options['arguments']['field_th_party_target_id']['field'] = 'field_th_party_target_id';
  $handler->display->display_options['arguments']['field_th_party_target_id']['relationship'] = 'field_th_candidate_target_id';
  $handler->display->display_options['arguments']['field_th_party_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_th_party_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_th_party_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_th_party_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_th_party_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_th_party_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_th_party_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_th_party_target_id']['validate_options']['types'] = array(
    'party' => 'party',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Issue (field_issue) */
  $handler->display->display_options['filters']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['filters']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['filters']['field_issue_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator_id'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['label'] = 'Issue';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['identifier'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_tid']['vocabulary'] = 'th_issues';
  $handler->display->display_options['filters']['field_issue_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'th_regions';
  $handler->display->display_options['filters']['field_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Candidate (field_th_candidate) */
  $handler->display->display_options['filters']['field_th_candidate_target_id']['id'] = 'field_th_candidate_target_id';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['field'] = 'field_th_candidate_target_id';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_th_candidate_target_id']['expose']['operator_id'] = 'field_th_candidate_target_id_op';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['expose']['label'] = 'Candidate';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['expose']['operator'] = 'field_th_candidate_target_id_op';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['expose']['identifier'] = 'field_th_candidate_target_id';
  $handler->display->display_options['filters']['field_th_candidate_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['th_party_page_videos'] = $view;

  $view = new view();
  $view->name = 'th_taxonomy_terms';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'TH';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videos by Issue/Region';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'view' => 'view',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Party video */
  $handler->display->display_options['fields']['field_th_video']['id'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['table'] = 'field_data_field_th_video';
  $handler->display->display_options['fields']['field_th_video']['field'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['label'] = '';
  $handler->display->display_options['fields']['field_th_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_th_video']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_region']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_region']['hide_empty'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['path'] = 'th/videos/[field_video_tags-tid]';
  $handler->display->display_options['fields']['field_video_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Contextual filter: Content: Issue (field_issue) */
  $handler->display->display_options['arguments']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['arguments']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['arguments']['field_issue_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_issue_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_issue_tid']['title'] = 'Issue: %1';
  $handler->display->display_options['arguments']['field_issue_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_issue_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_issue_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_issue_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_issue_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_issue_tid']['validate_options']['vocabularies'] = array(
    'th_issues' => 'th_issues',
    'th_regions' => 'th_regions',
  );
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: (Page) Question terms */
  $handler = $view->new_display('page', '(Page) Question terms', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Videos for: %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'th_issues' => 'th_issues',
    'th_regions' => 'th_regions',
  );
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = TRUE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: (Page) VIdeo terms */
  $handler = $view->new_display('page', '(Page) VIdeo terms', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos by Tag';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Tags (field_video_tags) */
  $handler->display->display_options['arguments']['field_video_tags_tid']['id'] = 'field_video_tags_tid';
  $handler->display->display_options['arguments']['field_video_tags_tid']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['arguments']['field_video_tags_tid']['field'] = 'field_video_tags_tid';
  $handler->display->display_options['arguments']['field_video_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_video_tags_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_video_tags_tid']['title'] = 'Videos tagged with: %1';
  $handler->display->display_options['arguments']['field_video_tags_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_video_tags_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_video_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_video_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_video_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_video_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_video_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_video_tags_tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['path'] = 'th/videos/%';
  $export['th_taxonomy_terms'] = $view;

  return $export;
}

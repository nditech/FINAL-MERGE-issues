<?php
/**
 * @file
 * th_search_db.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function th_search_db_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['id'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['field'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['label'] = 'Candidate';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_region']['element_type'] = 'span';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['element_type'] = 'span';
  /* Field: Content: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_th_candidate']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Party */
  $handler->display->display_options['fields']['field_th_party']['id'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['table'] = 'field_data_field_th_party';
  $handler->display->display_options['fields']['field_th_party']['field'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Content statistics: Most recent view */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Most recent view';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['totalcount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['totalcount']['expose']['label'] = 'Total views';
  /* Sort criterion: Content statistics: Views today */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['daycount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['daycount']['expose']['label'] = 'Views today';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_issue' => 'field_issue',
    'field_region' => 'field_region',
    'field_th_candidate' => 'field_th_candidate',
    'field_th_party' => 'field_th_party',
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'thd_search';
  $export['search'] = $view;

  return $export;
}

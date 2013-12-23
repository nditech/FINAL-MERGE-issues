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
  $view->base_table = 'search_api_index_database_server_index';
  $view->human_name = 'TH DB Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_th_candidate_field_th_first_name' => 'field_th_candidate_field_th_first_name',
    'field_th_candidate_field_th_last_name' => 'field_th_candidate_field_th_last_name',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nothing found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: Share count */
  $handler->display->display_options['fields']['th_share_count']['id'] = 'th_share_count';
  $handler->display->display_options['fields']['th_share_count']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['th_share_count']['field'] = 'th_share_count';
  $handler->display->display_options['fields']['th_share_count']['label'] = '';
  $handler->display->display_options['fields']['th_share_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['th_share_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['th_share_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Indexed Node: VIdeo */
  $handler->display->display_options['fields']['field_th_video']['id'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_video']['field'] = 'field_th_video';
  $handler->display->display_options['fields']['field_th_video']['label'] = '';
  $handler->display->display_options['fields']['field_th_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_th_video']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Question: Issue (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_question_field_issue']['field'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['label'] = 'Issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_issue']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_th_question_field_issue']['bypass_access'] = 0;
  /* Field: Question: Region (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_question_field_region']['field'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['label'] = 'Region';
  $handler->display->display_options['fields']['field_th_question_field_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_th_question_field_region']['bypass_access'] = 0;
  /* Field: Candidate: First name (indexed) */
  $handler->display->display_options['fields']['field_th_candidate_field_th_first_name']['id'] = 'field_th_candidate_field_th_first_name';
  $handler->display->display_options['fields']['field_th_candidate_field_th_first_name']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_candidate_field_th_first_name']['field'] = 'field_th_candidate_field_th_first_name';
  $handler->display->display_options['fields']['field_th_candidate_field_th_first_name']['label'] = 'Candidate';
  /* Field: Candidate: Last name (indexed) */
  $handler->display->display_options['fields']['field_th_candidate_field_th_last_name']['id'] = 'field_th_candidate_field_th_last_name';
  $handler->display->display_options['fields']['field_th_candidate_field_th_last_name']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_candidate_field_th_last_name']['field'] = 'field_th_candidate_field_th_last_name';
  $handler->display->display_options['fields']['field_th_candidate_field_th_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_th_candidate_field_th_last_name']['element_label_colon'] = FALSE;
  /* Field: Candidate » Party: Title (indexed) */
  $handler->display->display_options['fields']['field_th_candidate_field_th_party_title']['id'] = 'field_th_candidate_field_th_party_title';
  $handler->display->display_options['fields']['field_th_candidate_field_th_party_title']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_candidate_field_th_party_title']['field'] = 'field_th_candidate_field_th_party_title';
  $handler->display->display_options['fields']['field_th_candidate_field_th_party_title']['label'] = 'Party';
  $handler->display->display_options['fields']['field_th_candidate_field_th_party_title']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Most recent';
  /* Sort criterion: Indexed Node: Share count */
  $handler->display->display_options['sorts']['th_share_count']['id'] = 'th_share_count';
  $handler->display->display_options['sorts']['th_share_count']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['sorts']['th_share_count']['field'] = 'th_share_count';
  $handler->display->display_options['sorts']['th_share_count']['order'] = 'DESC';
  $handler->display->display_options['sorts']['th_share_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['th_share_count']['expose']['label'] = 'Most shared';
  /* Sort criterion: Indexed Node: Number of views */
  $handler->display->display_options['sorts']['views']['id'] = 'views';
  $handler->display->display_options['sorts']['views']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['sorts']['views']['field'] = 'views';
  $handler->display->display_options['sorts']['views']['order'] = 'DESC';
  $handler->display->display_options['sorts']['views']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['views']['expose']['label'] = 'Most viewed';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_th_candidate:field_th_first_name' => 'field_th_candidate:field_th_first_name',
    'field_th_candidate:field_th_last_name' => 'field_th_candidate:field_th_last_name',
    'field_th_question:title' => 'field_th_question:title',
    'field_th_candidate:field_th_party:title' => 'field_th_candidate:field_th_party:title',
    'field_th_question:field_th_candidate:field_th_first_name' => 'field_th_question:field_th_candidate:field_th_first_name',
    'field_th_question:field_th_candidate:field_th_last_name' => 'field_th_question:field_th_candidate:field_th_last_name',
    'field_th_question:field_th_party:title' => 'field_th_question:field_th_party:title',
    'field_th_question:field_region:name' => 'field_th_question:field_region:name',
  );
  /* Filter criterion: Question: Issue (indexed) */
  $handler->display->display_options['filters']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['filters']['field_th_question_field_issue']['field'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['value'] = array();
  $handler->display->display_options['filters']['field_th_question_field_issue']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['operator_id'] = 'field_th_question_field_issue_op';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['label'] = 'Issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['operator'] = 'field_th_question_field_issue_op';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['identifier'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_th_question_field_issue']['group_info']['label'] = 'Issue (indexed)';
  $handler->display->display_options['filters']['field_th_question_field_issue']['group_info']['identifier'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_th_question_field_issue']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Question: Region (indexed) */
  $handler->display->display_options['filters']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['filters']['field_th_question_field_region']['field'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['value'] = array();
  $handler->display->display_options['filters']['field_th_question_field_region']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['operator_id'] = 'field_th_question_field_region_op';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['operator'] = 'field_th_question_field_region_op';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['identifier'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'thd_search';
  $export['search'] = $view;

  return $export;
}

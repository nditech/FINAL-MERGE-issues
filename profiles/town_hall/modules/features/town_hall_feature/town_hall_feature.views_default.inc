<?php
/**
 * @file
 * town_hall_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function town_hall_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions: Submitted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['id'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['field'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['label'] = 'Videos';
  /* Relationship: Flags: like_questions counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Like questions';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like_questions';
  /* Relationship: Flags: unlike_questions counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Unlike questions';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'unlike_questions';
  /* Relationship: Flags: unlike_questions */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Unlike questions';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'unlike_questions';
  /* Relationship: Flags: like_questions */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Like questions';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'like_questions';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_th_question_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '[count] | [ops_1]';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count_1']['alter']['text'] = '[count_1] | [ops]';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['path'] = 'node/[nid]#comments';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 response';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count responses';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_th_question_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-questions';
  $export['all_questions'] = $view;

  $view = new view();
  $view->name = 'all_questions_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Issues: Sidebar Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Questions block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'all-questions/issue/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'th_issues' => 'th_issues',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['all_questions_block'] = $view;

  $view = new view();
  $view->name = 'all_questions_by_issue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions: Submitted questions by issue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['id'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['field'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['label'] = 'Videos';
  /* Relationship: Flags: like_questions counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Like questions';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like_questions';
  /* Relationship: Flags: unlike_questions counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Unlike questions';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'unlike_questions';
  /* Relationship: Flags: unlike_questions */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Unlike questions';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'unlike_questions';
  /* Relationship: Flags: like_questions */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Like questions';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'like_questions';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_th_question_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['separator'] = '';
  $handler->display->display_options['fields']['nid_1']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['format_plural_singular'] = '1 response';
  $handler->display->display_options['fields']['nid_1']['format_plural_plural'] = '@count responses';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Likes';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = 'Dislakes';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['link_type'] = 'toggle';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'question' => 'question',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-questions/issue/%';
  $export['all_questions_by_issue'] = $view;

  $view = new view();
  $view->name = 'candidates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Candidates: Jump Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Candidates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
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
    'candidate' => 'candidate',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Candidates selector';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['choose'] = '- Candidates -';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_th_last_name) */
  $handler->display->display_options['sorts']['field_th_last_name_value']['id'] = 'field_th_last_name_value';
  $handler->display->display_options['sorts']['field_th_last_name_value']['table'] = 'field_data_field_th_last_name';
  $handler->display->display_options['sorts']['field_th_last_name_value']['field'] = 'field_th_last_name_value';
  /* Sort criterion: Content: First name (field_th_first_name) */
  $handler->display->display_options['sorts']['field_th_first_name_value']['id'] = 'field_th_first_name_value';
  $handler->display->display_options['sorts']['field_th_first_name_value']['table'] = 'field_data_field_th_first_name';
  $handler->display->display_options['sorts']['field_th_first_name_value']['field'] = 'field_th_first_name_value';
  $handler->display->display_options['block_description'] = 'Jump Menu: Candidates Selector';
  $export['candidates'] = $view;

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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
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
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Views';
  $handler->display->display_options['fields']['totalcount']['element_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['separator'] = '';
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sort criterion: Content: Share count (share_count) */
  $handler->display->display_options['sorts']['share_count_value']['id'] = 'share_count_value';
  $handler->display->display_options['sorts']['share_count_value']['table'] = 'field_data_share_count';
  $handler->display->display_options['sorts']['share_count_value']['field'] = 'share_count_value';
  $handler->display->display_options['sorts']['share_count_value']['order'] = 'DESC';
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
  $view->name = 'database';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_database_server_index';
  $view->human_name = 'Search: Result page (database)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['label'] = '';
  $handler->display->display_options['fields']['field_th_candidate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_candidate']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_candidate']['view_mode'] = 'full';
  /* Field: Indexed Node: Party */
  $handler->display->display_options['fields']['field_th_party']['id'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_party']['field'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['label'] = '';
  $handler->display->display_options['fields']['field_th_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_party']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_party']['view_mode'] = 'full';
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'search_video';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Question: Issue (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_question_field_issue']['field'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_th_question_field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_question_field_issue']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_issue']['view_mode'] = 'full';
  /* Field: Question: Region (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['field_th_question_field_region']['field'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['label'] = '';
  $handler->display->display_options['fields']['field_th_question_field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_question_field_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_region']['view_mode'] = 'full';
  /* Field: Indexed Node: Share count */
  $handler->display->display_options['fields']['share_count']['id'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['fields']['share_count']['field'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['share_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_th_question:title' => 'field_th_question:title',
    'field_th_candidate:field_th_first_name' => 'field_th_candidate:field_th_first_name',
    'field_th_candidate:field_th_last_name' => 'field_th_candidate:field_th_last_name',
    'field_th_question:field_th_candidate:field_th_first_name' => 'field_th_question:field_th_candidate:field_th_first_name',
    'field_th_question:field_th_candidate:field_th_last_name' => 'field_th_question:field_th_candidate:field_th_last_name',
    'field_th_question:field_region:name' => 'field_th_question:field_region:name',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_database_server_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
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
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['reduce'] = 0;
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
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'thd_search';
  $export['database'] = $view;

  $view = new view();
  $view->name = 'home_page_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions: Answered questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions by issue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no questions tagged with this Issue.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['id'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['field'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['label'] = 'Videos';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: View (Videos) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Videos)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'issues_videos';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Learn more about the candidates';
  $handler->display->display_options['fields']['view_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_wrapper_class'] = 'th-candidates';
  $handler->display->display_options['fields']['view_1']['view'] = 'th_candidates_home';
  $handler->display->display_options['fields']['view_1']['display'] = 'block';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = 'Learn more about the parties';
  $handler->display->display_options['fields']['view_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_2']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_2']['element_wrapper_class'] = 'th-parties';
  $handler->display->display_options['fields']['view_2']['view'] = 'th_parties_home';
  $handler->display->display_options['fields']['view_2']['display'] = 'block';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Issue (field_issue) */
  $handler->display->display_options['filters']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['filters']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator_id'] = 'field_issue_tid_op';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['id'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['field'] = 'reverse_field_th_question_node';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['label'] = 'Videos';
  $handler->display->display_options['relationships']['reverse_field_th_question_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: View (Videos) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Videos)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'issues_videos';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Learn more about the candidates';
  $handler->display->display_options['fields']['view_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_wrapper_class'] = 'th-candidates';
  $handler->display->display_options['fields']['view_1']['view'] = 'th_candidates_home';
  $handler->display->display_options['fields']['view_1']['display'] = 'block';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = 'Learn more about the parties';
  $handler->display->display_options['fields']['view_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_2']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_2']['element_wrapper_class'] = 'th-parties';
  $handler->display->display_options['fields']['view_2']['view'] = 'th_parties_home';
  $handler->display->display_options['fields']['view_2']['display'] = 'block';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Issue (field_issue) */
  $handler->display->display_options['arguments']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['arguments']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_issue_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_issue_tid']['title'] = 'Issue: %1';
  $handler->display->display_options['arguments']['field_issue_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_issue_tid']['default_argument_options']['code'] = 'return issue_random_get_tids();';
  $handler->display->display_options['arguments']['field_issue_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_issue_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_issue_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_issue_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_issue_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_issue_tid']['validate_options']['vocabularies'] = array(
    'th_issues' => 'th_issues',
  );
  $handler->display->display_options['arguments']['field_issue_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Issue (field_issue) */
  $handler->display->display_options['filters']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['filters']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator_id'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['identifier'] = 'issue';
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
  $handler->display->display_options['path'] = 'questions';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'questions.rss';
  $export['home_page_videos'] = $view;

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
  $handler->display->display_options['row_options']['separator'] = ' | ';
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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
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
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
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
  /* Field: Content: Share count */
  $handler->display->display_options['fields']['share_count']['id'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['table'] = 'field_data_share_count';
  $handler->display->display_options['fields']['share_count']['field'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['label'] = 'Shares';
  $handler->display->display_options['fields']['share_count']['element_type'] = 'span';
  $handler->display->display_options['fields']['share_count']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['share_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: Content: Share count (share_count) */
  $handler->display->display_options['sorts']['share_count_value']['id'] = 'share_count_value';
  $handler->display->display_options['sorts']['share_count_value']['table'] = 'field_data_share_count';
  $handler->display->display_options['sorts']['share_count_value']['field'] = 'share_count_value';
  $handler->display->display_options['sorts']['share_count_value']['order'] = 'DESC';
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
  /* Field: Content: Share count */
  $handler->display->display_options['fields']['share_count']['id'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['table'] = 'field_data_share_count';
  $handler->display->display_options['fields']['share_count']['field'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
  $view->name = 'parties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Parties: Jump menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Parties selector';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'party' => 'party',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['choose'] = '- Political Parties -';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Jump Menu: Parties Selector';
  $export['parties'] = $view;

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
  /* Field: Content: Body */
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
  $handler->display->display_options['fields']['field_issue']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'field_th_question_target_id';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  /* Field: Content: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
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
  /* Sort criterion: Content: Share count (share_count) */
  $handler->display->display_options['sorts']['share_count_value']['id'] = 'share_count_value';
  $handler->display->display_options['sorts']['share_count_value']['table'] = 'field_data_share_count';
  $handler->display->display_options['sorts']['share_count_value']['field'] = 'share_count_value';
  $handler->display->display_options['sorts']['share_count_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['share_count_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['share_count_value']['expose']['label'] = 'Most shared';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search';
  $export['search'] = $view;

  $view = new view();
  $view->name = 'search_learn_more_about_the_candidates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search : Learn more about the candidates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Learn more about the candidates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'candidate' => 'candidate',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['search_learn_more_about_the_candidates'] = $view;

  $view = new view();
  $view->name = 'search_learn_more_about_the_parties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search : Learn more about the parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Learn more about the parties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'party' => 'party',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['search_learn_more_about_the_parties'] = $view;

  $view = new view();
  $view->name = 'search_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search: Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search: Video';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['search_video'] = $view;

  $view = new view();
  $view->name = 'solr2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_server_index';
  $view->human_name = 'Search: Result page';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@end out of @total';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Learn more about the candidates';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<h3 class="views-label">Learn more about the candidates</h3>';
  /* Footer: Global: View (Views field view) */
  $handler->display->display_options['footer']['view_field']['id'] = 'view_field';
  $handler->display->display_options['footer']['view_field']['table'] = 'views';
  $handler->display->display_options['footer']['view_field']['field'] = 'view_field';
  $handler->display->display_options['footer']['view_field']['label'] = 'Learn more about the candidates';
  $handler->display->display_options['footer']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['footer']['view_field']['view'] = 'search_learn_more_about_the_candidates';
  $handler->display->display_options['footer']['view_field']['display'] = 'block';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom_1']['id'] = 'area_text_custom_1';
  $handler->display->display_options['footer']['area_text_custom_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom_1']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom_1']['content'] = '<h3 class="views-label">Learn more about the parties</h3>';
  /* Footer: Global: View (Views field view) */
  $handler->display->display_options['footer']['view_field_1']['id'] = 'view_field_1';
  $handler->display->display_options['footer']['view_field_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_field_1']['field'] = 'view_field';
  $handler->display->display_options['footer']['view_field_1']['label'] = 'Learn more about the parties';
  $handler->display->display_options['footer']['view_field_1']['view'] = 'search_learn_more_about_the_parties';
  $handler->display->display_options['footer']['view_field_1']['display'] = 'block';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['label'] = '';
  $handler->display->display_options['fields']['field_th_candidate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_candidate']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_candidate']['view_mode'] = 'full';
  /* Field: Indexed Node: Party */
  $handler->display->display_options['fields']['field_th_party']['id'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_party']['field'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['label'] = '';
  $handler->display->display_options['fields']['field_th_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_party']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_party']['view_mode'] = 'full';
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'search_video';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Question: Issue (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_question_field_issue']['field'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_th_question_field_issue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_th_question_field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_question_field_issue']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_issue']['view_mode'] = 'full';
  /* Field: Question: Region (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_question_field_region']['field'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_th_question_field_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_region']['view_mode'] = 'full';
  /* Field: Indexed Node: Share count */
  $handler->display->display_options['fields']['share_count']['id'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['share_count']['field'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['share_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'search_api_viewed' => 'search_api_viewed',
    'field_th_question:title' => 'field_th_question:title',
    'field_th_candidate:field_th_first_name' => 'field_th_candidate:field_th_first_name',
    'field_th_candidate:field_th_last_name' => 'field_th_candidate:field_th_last_name',
    'field_th_question:field_th_candidate:field_th_first_name' => 'field_th_question:field_th_candidate:field_th_first_name',
    'field_th_question:field_th_candidate:field_th_last_name' => 'field_th_question:field_th_candidate:field_th_last_name',
    'field_th_question:field_region:name' => 'field_th_question:field_region:name',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Question: Issue (indexed) */
  $handler->display->display_options['filters']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['table'] = 'search_api_index_solr_server_index';
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
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['reduce'] = 0;
  /* Filter criterion: Question: Region (indexed) */
  $handler->display->display_options['filters']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['table'] = 'search_api_index_solr_server_index';
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
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ths_search';
  $export['solr2'] = $view;

  $view = new view();
  $view->name = 'test_solr1';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'test solr1';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test solr1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['access__all']['id'] = 'access__all';
  $handler->display->display_options['fields']['access__all']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['access__all']['field'] = 'access__all';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sm_field_th_party']['id'] = 'sm_field_th_party';
  $handler->display->display_options['fields']['sm_field_th_party']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_field_th_party']['field'] = 'sm_field_th_party';
  $handler->display->display_options['fields']['sm_field_th_party']['label'] = 'sm_field_th_party';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-solr1';
  $export['test_solr1'] = $view;

  $view = new view();
  $view->name = 'th_candidates_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Candidates: Question page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Candidates for home page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['id'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['field'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['label'] = 'Video';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['relationship'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_th_first_name']['id'] = 'field_th_first_name';
  $handler->display->display_options['fields']['field_th_first_name']['table'] = 'field_data_field_th_first_name';
  $handler->display->display_options['fields']['field_th_first_name']['field'] = 'field_th_first_name';
  $handler->display->display_options['fields']['field_th_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_th_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_th_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_th_last_name']['id'] = 'field_th_last_name';
  $handler->display->display_options['fields']['field_th_last_name']['table'] = 'field_data_field_th_last_name';
  $handler->display->display_options['fields']['field_th_last_name']['field'] = 'field_th_last_name';
  $handler->display->display_options['fields']['field_th_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_th_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_th_last_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Last name (field_th_last_name) */
  $handler->display->display_options['sorts']['field_th_last_name_value']['id'] = 'field_th_last_name_value';
  $handler->display->display_options['sorts']['field_th_last_name_value']['table'] = 'field_data_field_th_last_name';
  $handler->display->display_options['sorts']['field_th_last_name_value']['field'] = 'field_th_last_name_value';
  /* Sort criterion: Content: First name (field_th_first_name) */
  $handler->display->display_options['sorts']['field_th_first_name_value']['id'] = 'field_th_first_name_value';
  $handler->display->display_options['sorts']['field_th_first_name_value']['table'] = 'field_data_field_th_first_name';
  $handler->display->display_options['sorts']['field_th_first_name_value']['field'] = 'field_th_first_name_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'candidate' => 'candidate',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['th_candidates_home'] = $view;

  $view = new view();
  $view->name = 'th_ef_newsletter_signup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform_type';
  $view->human_name = 'EF NEwsletter Signup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EF NEwsletter Signup';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Entityform Type: Rendered Entityform Type */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform_type';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['th_ef_newsletter_signup'] = $view;

  $view = new view();
  $view->name = 'th_issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Issues: Jump Menu';
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
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['style_options']['choose'] = '- Issues -';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '/questions/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'th_issues' => 'th_issues',
  );

  /* Display: Issues selector */
  $handler = $view->new_display('block', 'Issues selector', 'block_1');
  $handler->display->display_options['block_description'] = 'Jump Menu: Issues Selector';
  $export['th_issues'] = $view;

  $view = new view();
  $view->name = 'th_parties_home';
  $view->description = '';
  $view->tag = 'TH';
  $view->base_table = 'node';
  $view->human_name = 'Parties: Question page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Candidates for home page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Candidate */
  $handler->display->display_options['relationships']['reverse_field_th_party_node']['id'] = 'reverse_field_th_party_node';
  $handler->display->display_options['relationships']['reverse_field_th_party_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_party_node']['field'] = 'reverse_field_th_party_node';
  $handler->display->display_options['relationships']['reverse_field_th_party_node']['ui_name'] = 'Candidate';
  $handler->display->display_options['relationships']['reverse_field_th_party_node']['label'] = 'Candidate';
  /* Relationship: VIdeo */
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['id'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['field'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['relationship'] = 'reverse_field_th_party_node';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['ui_name'] = 'VIdeo';
  $handler->display->display_options['relationships']['reverse_field_th_candidate_node']['label'] = 'Video';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['relationship'] = 'reverse_field_th_candidate_node';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'party' => 'party',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['th_parties_home'] = $view;

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
  $handler->display->display_options['title'] = 'Party page videos';
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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  /* Field: Content: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'field_data_field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['label'] = '';
  $handler->display->display_options['fields']['field_th_candidate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_candidate']['settings'] = array(
    'link' => 1,
  );
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
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'views';
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
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

  $view = new view();
  $view->name = 'th_video_details';
  $view->description = '';
  $view->tag = 'TH';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy terms: Video page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video details: tags';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_th_question_target_id']['id'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['table'] = 'field_data_field_th_question';
  $handler->display->display_options['relationships']['field_th_question_target_id']['field'] = 'field_th_question_target_id';
  $handler->display->display_options['relationships']['field_th_question_target_id']['label'] = 'Question';
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['relationship'] = 'field_th_question_target_id';
  $handler->display->display_options['fields']['field_issue']['label'] = 'Issues';
  $handler->display->display_options['fields']['field_issue']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['alter']['path'] = 'questions/[field_issue-tid]';
  $handler->display->display_options['fields']['field_issue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_issue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
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
  $handler->display->display_options['fields']['field_video_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_video_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'video' => 'video',
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Video details: tags';
  $export['th_video_details'] = $view;

  $view = new view();
  $view->name = 'veiw_video_on';
  $view->description = '';
  $view->tag = 'TH';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Issues: Related videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View videos on';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['arguments']['machine_name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['machine_name']['default_argument_options']['argument'] = 'th_issues';
  $handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['machine_name']['limit'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['veiw_video_on'] = $view;

  return $export;
}

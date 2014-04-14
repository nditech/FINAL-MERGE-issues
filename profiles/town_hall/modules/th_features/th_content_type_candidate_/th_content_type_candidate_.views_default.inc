<?php
/**
 * @file
 * th_content_type_candidate_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function th_content_type_candidate__views_default_views() {
  $export = array();

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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Candidates';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Description */
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
  $handler->display->display_options['style_plugin'] = 'list';
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

  return $export;
}

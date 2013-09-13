<?php
/**
 * @file
 * town_hall_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function town_hall_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'th_home_page';
  $page->task = 'page';
  $page->admin_title = 'Town HAll home page';
  $page->admin_description = '';
  $page->path = 'thhome';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'TH Home Panel',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_th_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'th_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'temp_layout' => 'twocol_bricks',
    'did' => '1',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['th_home_page'] = $page;

  return $pages;

}

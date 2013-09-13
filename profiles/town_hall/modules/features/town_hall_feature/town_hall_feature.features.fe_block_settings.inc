<?php
/**
 * @file
 * town_hall_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function town_hall_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['hybridauth-hybridauth'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'hybridauth',
    'module' => 'hybridauth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['main_menu-main_menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main_menu',
    'module' => 'main_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['profile-author-information'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'author-information',
    'module' => 'profile',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['questions_block-questions_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'questions_block',
    'module' => 'questions_block',
    'node_types' => array(),
    'pages' => '<front>
node/*
questions*',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['questions_block-questions_block_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'questions_block_user',
    'module' => 'questions_block',
    'node_types' => array(),
    'pages' => 'all-questions
all-questions/issue/*',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['quicktabs-most_shared_watched_tabs'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'most_shared_watched_tabs',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '<front>
search
th/admin/most-shared
th/admin/most-watched
questions*
sl_search',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sharethis-sharethis_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['statistics-popular'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popular',
    'module' => 'statistics',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['town_hall_blocks-th_block_partners'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'th_block_partners',
    'module' => 'town_hall_blocks',
    'node_types' => array(),
    'pages' => '<front>
home
node/*
thd_search
ths_search
',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['town_hall_blocks-th_block_search'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'th_block_search',
    'module' => 'town_hall_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['town_hall_blocks-th_block_share_this'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'th_block_share_this',
    'module' => 'town_hall_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['town_hall_blocks-th_block_social_links'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'th_block_social_links',
    'module' => 'town_hall_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['town_hall_blocks-th_block_social_links_footer'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'th_block_social_links_footer',
    'module' => 'town_hall_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-334bfb6bb6ebe20f6f05f0304e212f59'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '334bfb6bb6ebe20f6f05f0304e212f59',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-all_questions_block-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'all_questions_block-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'all-questions
all-questions/issue/*',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => 'Issues',
    'visibility' => 1,
  );

  $export['views-b902a109c6205b63b2775cfee2f381bb'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'b902a109c6205b63b2775cfee2f381bb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-candidates-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'candidates-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-candidates_videos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'candidates_videos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-issues_videos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'issues_videos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-most_shared-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'most_shared-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-most_watched-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'most_watched-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-parties-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'parties-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-search_video-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search_video-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-th_candidates_home-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'th_candidates_home-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-th_ef_newsletter_signup-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'th_ef_newsletter_signup-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-th_parties_home-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'th_parties_home-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-th_party_page_videos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'th_party_page_videos-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'party',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-th_video_details-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'th_video_details-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'video',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'townhalltheme',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-veiw_video_on-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'veiw_video_on-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'candidate',
      1 => 'party',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'townhalltheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'townhalltheme',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

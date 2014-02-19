<?php

function townhalltheme_preprocess_html(&$variables){
  if (module_exists('th_permissions_register_mode') && $variables['logged_in'] == FALSE){
    $variables['classes_array'][] = 'blende';
  }
}

function townhalltheme_preprocess_node(&$variables) {
  if($variables['comment'] == 0 || $variables['comment'] == 1){
    $variables['content']['field_th_comments_display']['#access'] = FALSE;
  }
}
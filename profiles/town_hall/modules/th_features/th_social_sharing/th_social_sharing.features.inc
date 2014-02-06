<?php
/**
 * @file
 * th_social_sharing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function th_social_sharing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

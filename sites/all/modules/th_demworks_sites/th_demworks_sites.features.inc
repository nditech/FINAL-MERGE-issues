<?php
/**
 * @file
 * th_demworks_sites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function th_demworks_sites_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

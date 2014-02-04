<?php
/**
 * @file
 * th_permissions_register_mode.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function th_permissions_register_mode_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Administer Social Stats'.
  $permissions['Administer Social Stats'] = array(
    'name' => 'Administer Social Stats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'social_stats',
  );

  // Exported permission: 'access service links'.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'service_links',
  );

  // Exported permission: 'use PHP for service visibility'.
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'service_links',
  );

  return $permissions;
}

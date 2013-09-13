<?php
/**
 * @file
 * town_hall_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function town_hall_feature_user_default_roles() {
  $roles = array();

  // Exported role: TH Admin.
  $roles['TH Admin'] = array(
    'name' => 'TH Admin',
    'weight' => 3,
  );

  // Exported role: TH Citizen.
  $roles['TH Citizen'] = array(
    'name' => 'TH Citizen',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}

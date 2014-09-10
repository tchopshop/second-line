<?php
/**
 * @file
 * baseline_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function baseline_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}

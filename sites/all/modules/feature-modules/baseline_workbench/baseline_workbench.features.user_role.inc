<?php
/**
 * @file
 * baseline_workbench.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function baseline_workbench_user_default_roles() {
  $roles = array();

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 2,
  );

  return $roles;
}

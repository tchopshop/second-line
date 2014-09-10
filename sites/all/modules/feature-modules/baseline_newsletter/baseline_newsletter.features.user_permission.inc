<?php
/**
 * @file
 * baseline_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function baseline_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node simplenews choice'.
  $permissions['administer panelizer node simplenews choice'] = array(
    'name' => 'administer panelizer node simplenews choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}

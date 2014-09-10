<?php
/**
 * @file
 * baseline_admin.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function baseline_admin_defaultconfig_features() {
  return array(
    'baseline_admin' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function baseline_admin_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  return $export;
}

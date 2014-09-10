<?php
/**
 * @file
 * baseline_webform.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function baseline_webform_defaultconfig_features() {
  return array(
    'baseline_webform' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function baseline_webform_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publish_button_content_type_webform';
  $strongarm->value = 1;
  $export['publish_button_content_type_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_disabled_components';
  $strongarm->value = array(
    0 => 'hidden',
    1 => 'pagebreak',
    2 => 'time',
  );
  $export['webform_disabled_components'] = $strongarm;

  return $export;
}

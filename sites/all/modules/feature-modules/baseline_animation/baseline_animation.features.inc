<?php
/**
 * @file
 * baseline_animation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_animation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function baseline_animation_paragraphs_info() {
  $items = array(
    'advanced' => array(
      'name' => 'Advanced',
      'bundle' => 'advanced',
      'locked' => '1',
    ),
    'animation_slide' => array(
      'name' => 'Animation Slide',
      'bundle' => 'animation_slide',
      'locked' => '1',
    ),
  );
  return $items;
}

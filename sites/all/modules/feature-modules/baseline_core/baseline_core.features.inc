<?php
/**
 * @file
 * baseline_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_core_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function baseline_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_name_default_formats().
 */
function baseline_core_name_default_formats() {
  $formats = array();

  // Exported format: Default
  $formats['default'] = array(
    'default_format' => '((((t+ig)+im)+if)+is)+jc',
    'sep1' => ' ',
    'sep2' => ', ',
    'sep3' => '',
    'machine_name' => 'default',
    'name' => 'Default',
  );

  // Exported format: Family
  $formats['family'] = array(
    'name' => 'Family',
    'machine_name' => 'family',
    'format' => 'f',
  );

  // Exported format: Title Family
  $formats['formal'] = array(
    'name' => 'Title Family',
    'machine_name' => 'formal',
    'format' => 't+if',
  );

  // Exported format: Full
  $formats['full'] = array(
    'name' => 'Full',
    'machine_name' => 'full',
    'format' => '((((t+ig)+im)+if)+is)+jc',
  );

  // Exported format: Given
  $formats['given'] = array(
    'name' => 'Given',
    'machine_name' => 'given',
    'format' => 'g',
  );

  // Exported format: Given Family
  $formats['short_full'] = array(
    'name' => 'Given Family',
    'machine_name' => 'short_full',
    'format' => 'g+if',
  );

  return $formats;
}

/**
 * Implements hook_node_info().
 */
function baseline_core_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Basic pages in the menu system and/or unique landing pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

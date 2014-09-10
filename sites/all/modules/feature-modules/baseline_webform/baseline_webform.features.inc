<?php
/**
 * @file
 * baseline_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_webform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function baseline_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('To create a webform first enter a title, then save or publish. Then click on the webform tab and create your actual form. You can view results on the Results tab.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

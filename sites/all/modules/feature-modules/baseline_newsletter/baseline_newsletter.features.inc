<?php
/**
 * @file
 * baseline_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function baseline_newsletter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function baseline_newsletter_node_info() {
  $items = array(
    'simplenews' => array(
      'name' => t('Newsletter issue'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function baseline_newsletter_paragraphs_info() {
  $items = array(
    'sub_columns_email' => array(
      'name' => 'Sub-columns Email',
      'bundle' => 'sub_columns_email',
      'locked' => '1',
    ),
    'text_email' => array(
      'name' => 'Text Email',
      'bundle' => 'text_email',
      'locked' => '1',
    ),
  );
  return $items;
}

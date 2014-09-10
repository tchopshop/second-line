<?php
/**
 * @file
 * baseline_text_edits.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_text_edits_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

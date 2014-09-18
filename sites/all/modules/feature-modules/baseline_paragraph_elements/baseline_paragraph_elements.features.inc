<?php
/**
 * @file
 * baseline_paragraph_elements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_paragraph_elements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "formatter_field_preset" && $api == "formatter_field_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function baseline_paragraph_elements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_paragraphs_info().
 */
function baseline_paragraph_elements_paragraphs_info() {
  $items = array(
    '2_column_flow' => array(
      'name' => '2 Column Flow',
      'bundle' => '2_column_flow',
      'locked' => '1',
    ),
    '3_column_flow' => array(
      'name' => '3 Column Flow',
      'bundle' => '3_column_flow',
      'locked' => '1',
    ),
    '4_column_flow' => array(
      'name' => '4 Column Flow',
      'bundle' => '4_column_flow',
      'locked' => '1',
    ),
    'aatext' => array(
      'name' => 'Text',
      'bundle' => 'aatext',
      'locked' => '1',
    ),
    'accordian' => array(
      'name' => 'FAQ',
      'bundle' => 'accordian',
      'locked' => '1',
    ),
    'basic_table' => array(
      'name' => 'Basic Table',
      'bundle' => 'basic_table',
      'locked' => '1',
    ),
    'boxes_2_up' => array(
      'name' => '2-up Boxes',
      'bundle' => 'boxes_2_up',
      'locked' => '1',
    ),
    'boxes_3_up' => array(
      'name' => '3-up Boxes',
      'bundle' => 'boxes_3_up',
      'locked' => '1',
    ),
    'boxes_4_up' => array(
      'name' => '4-up Boxes',
      'bundle' => 'boxes_4_up',
      'locked' => '1',
    ),
    'collage' => array(
      'name' => 'Collage',
      'bundle' => 'collage',
      'locked' => '1',
    ),
    'content_boxes' => array(
      'name' => 'Content Grids',
      'bundle' => 'content_boxes',
      'locked' => '1',
    ),
    'file_list' => array(
      'name' => 'File List',
      'bundle' => 'file_list',
      'locked' => '1',
    ),
    'flowing_text_columns' => array(
      'name' => 'Flowing Columns',
      'bundle' => 'flowing_text_columns',
      'locked' => '1',
    ),
    'google_map' => array(
      'name' => 'Google Map',
      'bundle' => 'google_map',
      'locked' => '1',
    ),
    'grid_2_across' => array(
      'name' => 'Grid 2 Across (Landscape)',
      'bundle' => 'grid_2_across',
      'locked' => '1',
    ),
    'grid_2_across_portrait' => array(
      'name' => 'Grid 2 Across (Portrait)',
      'bundle' => 'grid_2_across_portrait',
      'locked' => '1',
    ),
    'grid_3_across' => array(
      'name' => 'Grid 3 Across (Landscape)',
      'bundle' => 'grid_3_across',
      'locked' => '1',
    ),
    'grid_3_across_portrait' => array(
      'name' => 'Grid 3 Across (Portrait)',
      'bundle' => 'grid_3_across_portrait',
      'locked' => '1',
    ),
    'grid_4_across' => array(
      'name' => 'Grid 4 Across (Landscape)',
      'bundle' => 'grid_4_across',
      'locked' => '1',
    ),
    'grid_4_across_portrait' => array(
      'name' => 'Grid 4 Across (Portrait)',
      'bundle' => 'grid_4_across_portrait',
      'locked' => '1',
    ),
    'grid_5_across' => array(
      'name' => 'Grid 5 Across (Landscape)',
      'bundle' => 'grid_5_across',
      'locked' => '1',
    ),
    'grid_5_across_portrait' => array(
      'name' => 'Grid 5 Across (Portrait)',
      'bundle' => 'grid_5_across_portrait',
      'locked' => '1',
    ),
    'grids' => array(
      'name' => 'Image Grids',
      'bundle' => 'grids',
      'locked' => '1',
    ),
    'h2' => array(
      'name' => 'H2',
      'bundle' => 'h2',
      'locked' => '1',
    ),
    'h3' => array(
      'name' => 'H3',
      'bundle' => 'h3',
      'locked' => '1',
    ),
    'h4' => array(
      'name' => 'H4',
      'bundle' => 'h4',
      'locked' => '1',
    ),
    'h5' => array(
      'name' => 'H5',
      'bundle' => 'h5',
      'locked' => '1',
    ),
    'h6' => array(
      'name' => 'H6',
      'bundle' => 'h6',
      'locked' => '1',
    ),
    'headline' => array(
      'name' => 'Headlines',
      'bundle' => 'headline',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'links' => array(
      'name' => 'Links',
      'bundle' => 'links',
      'locked' => '1',
    ),
    'pricing_table' => array(
      'name' => 'Pricing Table',
      'bundle' => 'pricing_table',
      'locked' => '1',
    ),
    'quotation' => array(
      'name' => 'Quotation',
      'bundle' => 'quotation',
      'locked' => '1',
    ),
    'slideshow' => array(
      'name' => 'Slideshow',
      'bundle' => 'slideshow',
      'locked' => '1',
    ),
    'statistics' => array(
      'name' => 'Statistics',
      'bundle' => 'statistics',
      'locked' => '1',
    ),
    'table' => array(
      'name' => 'Tables',
      'bundle' => 'table',
      'locked' => '1',
    ),
    'text_text_file' => array(
      'name' => 'Text | Text | File',
      'bundle' => 'text_text_file',
      'locked' => '1',
    ),
    'tweet' => array(
      'name' => 'Tweet',
      'bundle' => 'tweet',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}

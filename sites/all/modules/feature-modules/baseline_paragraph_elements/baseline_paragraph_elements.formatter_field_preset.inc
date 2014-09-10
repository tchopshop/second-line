<?php
/**
 * @file
 * baseline_paragraph_elements.formatter_field_preset.inc
 */

/**
 * Implements hook_formatter_field_preset_settings_info().
 */
function baseline_paragraph_elements_formatter_field_preset_settings_info() {
  $export = array();

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '10_columns';
  $formatter_field_preset->name = '10 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '10_column',
  );
  $export['10_columns'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '11_columns';
  $formatter_field_preset->name = '11 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '11_column',
  );
  $export['11_columns'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '12_columns';
  $formatter_field_preset->name = '12 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '12_column',
  );
  $export['12_columns'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '1_column';
  $formatter_field_preset->name = '1 Column';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '1_column',
  );
  $export['1_column'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '2_column';
  $formatter_field_preset->name = '2 Column';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '2_column',
  );
  $export['2_column'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '3_column';
  $formatter_field_preset->name = '3 Column';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '3_column',
  );
  $export['3_column'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '4_column';
  $formatter_field_preset->name = '4 Column';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '4_column',
  );
  $export['4_column'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '5_column';
  $formatter_field_preset->name = '5 Column';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '5_column',
  );
  $export['5_column'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '6_columns';
  $formatter_field_preset->name = '6 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '6_column',
  );
  $export['6_columns'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '7_columns';
  $formatter_field_preset->name = '7 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '7_column',
  );
  $export['7_columns'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '8_columns';
  $formatter_field_preset->name = '8 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '8_column',
  );
  $export['8_columns'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->machine_name = '9_columns';
  $formatter_field_preset->name = '9 Columns';
  $formatter_field_preset->field = 'field_paragraph_image';
  $formatter_field_preset->format = 'file_rendered';
  $formatter_field_preset->settings = array(
    'file_view_mode' => '9_column',
  );
  $export['9_columns'] = $formatter_field_preset;

  return $export;
}

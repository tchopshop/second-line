<?php
/**
 * @file
 * baseline_images.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function baseline_images_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '10_column';
  $ds_view_mode->label = '10 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['10_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '11_column';
  $ds_view_mode->label = '11 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['11_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '12_column';
  $ds_view_mode->label = '12 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['12_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '1_column';
  $ds_view_mode->label = '1 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['1_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '2_column';
  $ds_view_mode->label = '2 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['2_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '3_column';
  $ds_view_mode->label = '3 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['3_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '4_column';
  $ds_view_mode->label = '4 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['4_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '5_column';
  $ds_view_mode->label = '5 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['5_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '6_column';
  $ds_view_mode->label = '6 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['6_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '7_column';
  $ds_view_mode->label = '7 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['7_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '8_column';
  $ds_view_mode->label = '8 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['8_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '9_column';
  $ds_view_mode->label = '9 Column';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['9_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'flexslider';
  $ds_view_mode->label = 'Flexslider';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['flexslider'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_2_across';
  $ds_view_mode->label = 'Grid 2 Across';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_2_across'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_2_across_vertical';
  $ds_view_mode->label = 'Grid 2 Across Vertical';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_2_across_vertical'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_3_across';
  $ds_view_mode->label = 'Grid 3 Across';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_3_across'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_3_across_vertical';
  $ds_view_mode->label = 'Grid 3 Across Vertical';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_3_across_vertical'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_4_across';
  $ds_view_mode->label = 'Grid 4 Across';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_4_across'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_4_across_vertical';
  $ds_view_mode->label = 'Grid 4 Across Vertical';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_4_across_vertical'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_5_across';
  $ds_view_mode->label = 'Grid 5 Across';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_5_across'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid_5_across_vertical';
  $ds_view_mode->label = 'Grid 5 Across Vertical';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['grid_5_across_vertical'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'huge';
  $ds_view_mode->label = 'Huge';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['huge'] = $ds_view_mode;

  return $export;
}

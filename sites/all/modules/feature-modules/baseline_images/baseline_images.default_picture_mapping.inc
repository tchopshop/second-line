<?php
/**
 * @file
 * baseline_images.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function baseline_images_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '10_columns';
  $picture_mapping->breakpoint_group = '10_columns';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '5_columns',
      '2x' => '10_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '8_columns',
      '2x' => 'huge',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => '9_columns',
      '2x' => 'huge',
    ),
  );
  $export['10_columns'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '11_columns';
  $picture_mapping->breakpoint_group = '11_columns';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '5_columns',
      '2x' => '10_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '8_columns',
      '2x' => 'huge',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => '10_columns',
      '2x' => 'huge',
    ),
  );
  $export['11_columns'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '12_columns';
  $picture_mapping->breakpoint_group = '12_columns';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '5_columns',
      '2x' => '10_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '8_columns',
      '2x' => 'huge',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => '11_columns',
      '2x' => 'huge',
    ),
  );
  $export['12_columns'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '1_column';
  $picture_mapping->breakpoint_group = '1_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '2_columns',
      '2x' => '4_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '3_columns',
      '2x' => '6_columns',
    ),
  );
  $export['1_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '2_column';
  $picture_mapping->breakpoint_group = '2_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '3_columns',
      '2x' => '6_columns',
    ),
  );
  $export['2_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '3_column';
  $picture_mapping->breakpoint_group = '3_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '2_columns',
      '2x' => '4_columns',
    ),
  );
  $export['3_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '4_column';
  $picture_mapping->breakpoint_group = '4_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '2_columns',
      '2x' => '4_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '3_columns',
      '2x' => '6_columns',
    ),
  );
  $export['4_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '5_col';
  $picture_mapping->breakpoint_group = '5_col';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '2_columns',
      '2x' => '4_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '3_columns',
      '2x' => '6_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
  );
  $export['5_col'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '6_column';
  $picture_mapping->breakpoint_group = '6_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '2_columns',
      '2x' => '4_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '3_columns',
      '2x' => '6_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
  );
  $export['6_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '7_column';
  $picture_mapping->breakpoint_group = '7_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '5_columns',
      '2x' => '10_columns',
    ),
    'breakpoints.theme.baseline.tablet' => array(
      '1x' => '6_columns',
      '2x' => '12_columns',
    ),
  );
  $export['7_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '8_column';
  $picture_mapping->breakpoint_group = '8_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '6_columns',
      '2x' => '12_columns',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => '7_columns',
      '2x' => 'huge',
    ),
  );
  $export['8_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = '9_column';
  $picture_mapping->breakpoint_group = '9_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => '4_columns',
      '2x' => '8_columns',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => '5_columns',
      '2x' => '10_columns',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => '6_columns',
      '2x' => '12_columns',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => '8_columns',
      '2x' => 'huge',
    ),
  );
  $export['9_column'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'grid_2_across';
  $picture_mapping->breakpoint_group = 'grid_2_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => 'grid-160x160',
      '2x' => 'grid-300x200',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => 'grid-240x240',
      '2x' => 'grid-500x300',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => 'grid-400x240',
      '2x' => 'grid-800x480',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => 'grid-500x300',
      '2x' => 'grid-1000x600',
    ),
  );
  $export['grid_2_across'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'grid_3_across';
  $picture_mapping->breakpoint_group = 'grid_3_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => 'grid-120x120',
      '2x' => 'grid-200x200',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => 'grid-160x160',
      '2x' => 'grid-300x200',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => 'grid-300x200',
      '2x' => 'grid-500x300',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => 'grid-400x240',
      '2x' => 'grid-800x480',
    ),
  );
  $export['grid_3_across'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'grid_4_across';
  $picture_mapping->breakpoint_group = 'grid_4_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => 'grid-160x160',
      '2x' => 'grid-300x200',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => 'grid-240x240',
      '2x' => 'grid-500x300',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => 'grid-200x200',
      '2x' => 'grid-400x240',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => 'grid-240x240',
      '2x' => 'grid-500x300',
    ),
  );
  $export['grid_4_across'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'grid_5_across';
  $picture_mapping->breakpoint_group = 'grid_5_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => 'grid-160x160',
      '2x' => 'grid-300x200',
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => 'grid-240x240',
      '2x' => 'grid-500x300',
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => 'grid-240x240',
      '2x' => 'grid-500x300',
    ),
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => 'grid-200x200',
      '2x' => 'grid-400x240',
    ),
  );
  $export['grid_5_across'] = $picture_mapping;

  return $export;
}

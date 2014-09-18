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

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '10_columns';
  $picture_mapping->machine_name = '10_columns';
  $picture_mapping->breakpoint_group = '10_columns';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '9_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '5_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '10_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
  );
  $export['10_columns'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '11_columns';
  $picture_mapping->machine_name = '11_columns';
  $picture_mapping->breakpoint_group = '11_columns';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '10_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '5_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '10_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
  );
  $export['11_columns'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '12_columns';
  $picture_mapping->machine_name = '12_columns';
  $picture_mapping->breakpoint_group = '12_columns';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '11_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '5_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '10_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
  );
  $export['12_columns'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '1_column';
  $picture_mapping->machine_name = '1_column';
  $picture_mapping->breakpoint_group = '1_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '3_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '2_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
    ),
  );
  $export['1_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '2_column';
  $picture_mapping->machine_name = '2_column';
  $picture_mapping->breakpoint_group = '2_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '3_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
    ),
  );
  $export['2_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '3_column';
  $picture_mapping->machine_name = '3_column';
  $picture_mapping->breakpoint_group = '3_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '2_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
    ),
  );
  $export['3_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '4_column';
  $picture_mapping->machine_name = '4_column';
  $picture_mapping->breakpoint_group = '4_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '3_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '2_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
    ),
  );
  $export['4_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '5_col';
  $picture_mapping->machine_name = '5_col';
  $picture_mapping->breakpoint_group = '5_col';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '3_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '2_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
    ),
  );
  $export['5_col'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '6_column';
  $picture_mapping->machine_name = '6_column';
  $picture_mapping->breakpoint_group = '6_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '3_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '2_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
    ),
  );
  $export['6_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '7_column';
  $picture_mapping->machine_name = '7_column';
  $picture_mapping->breakpoint_group = '7_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '12_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '5_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '10_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
  );
  $export['7_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '8_column';
  $picture_mapping->machine_name = '8_column';
  $picture_mapping->breakpoint_group = '8_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '7_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '12_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
  );
  $export['8_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '9_column';
  $picture_mapping->machine_name = '9_column';
  $picture_mapping->breakpoint_group = '9_column';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'huge',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '6_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '12_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '5_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '10_columns',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '4_columns',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '8_columns',
      ),
    ),
  );
  $export['9_column'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_2_across';
  $picture_mapping->machine_name = 'grid_2_across';
  $picture_mapping->breakpoint_group = 'grid_2_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-1000x600',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-800x480',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x160',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x200',
      ),
    ),
  );
  $export['grid_2_across'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Grid 2 Across no crop';
  $picture_mapping->machine_name = 'grid_2_across_no_crop';
  $picture_mapping->breakpoint_group = 'grid_2_across_no_crop';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300-no-crop',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-1000x600-no-crop',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x240-no-crop',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-800x480-no-crop',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-24x240-no-crop',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300-no-crop',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x160-no-crop',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x200-no-crop',
      ),
    ),
  );
  $export['grid_2_across_no_crop'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_2_across_vertical';
  $picture_mapping->machine_name = 'grid_2_across_vertical';
  $picture_mapping->breakpoint_group = 'grid_2_across_vertical';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-800x1000',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x480',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-800x1000',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x320',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x360',
      ),
    ),
  );
  $export['grid_2_across_vertical'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_3_across';
  $picture_mapping->machine_name = 'grid_3_across';
  $picture_mapping->breakpoint_group = 'grid_3_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-800x480',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x160',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x200',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-120x120',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-200x200',
      ),
    ),
  );
  $export['grid_3_across'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_3_across_vertical';
  $picture_mapping->machine_name = 'grid_3_across_vertical';
  $picture_mapping->breakpoint_group = 'grid_3_across_vertical';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x480',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-800x1000',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x360',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x360',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-120x160',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-200x260',
      ),
    ),
  );
  $export['grid_3_across_vertical'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_4_across';
  $picture_mapping->machine_name = 'grid_4_across';
  $picture_mapping->breakpoint_group = 'grid_4_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-200x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x240',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x160',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x200',
      ),
    ),
  );
  $export['grid_4_across'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_4_across_vertical';
  $picture_mapping->machine_name = 'grid_4_across_vertical';
  $picture_mapping->breakpoint_group = 'grid_4_across_vertical';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x320',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-200x260',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x480',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x320',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x360',
      ),
    ),
  );
  $export['grid_4_across_vertical'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_5_across';
  $picture_mapping->machine_name = 'grid_5_across';
  $picture_mapping->breakpoint_group = 'grid_5_across';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-200x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x240',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x240',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x300',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x160',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x200',
      ),
    ),
  );
  $export['grid_5_across'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'grid_5_across_vertical';
  $picture_mapping->machine_name = 'grid_5_across_vertical';
  $picture_mapping->breakpoint_group = 'grid_5_across_vertical';
  $picture_mapping->mapping = array(
    'breakpoints.theme.baseline.tablet-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-200x260',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-400x480',
      ),
    ),
    'breakpoints.theme.baseline.tablet-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x320',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-240x320',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-500x640',
      ),
    ),
    'breakpoints.theme.baseline.smalltouch-portrait' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-160x200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid-300x360',
      ),
    ),
  );
  $export['grid_5_across_vertical'] = $picture_mapping;

  return $export;
}

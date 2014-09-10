<?php
/**
 * @file
 * baseline_images.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function baseline_images_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '10_columns';
  $breakpoint_group->name = '10 Columns';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['10_columns'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '11_columns';
  $breakpoint_group->name = '11 Columns';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['11_columns'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '12_columns';
  $breakpoint_group->name = '12 Columns';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['12_columns'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '1_column';
  $breakpoint_group->name = '1 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['1_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '2_column';
  $breakpoint_group->name = '2 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['2_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '3_column';
  $breakpoint_group->name = '3 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['3_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '4_column';
  $breakpoint_group->name = '4 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['4_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '5_col';
  $breakpoint_group->name = '5 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['5_col'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '6_column';
  $breakpoint_group->name = '6 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['6_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '7_column';
  $breakpoint_group->name = '7 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['7_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '8_column';
  $breakpoint_group->name = '8 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['8_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = '9_column';
  $breakpoint_group->name = '9 Column';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['9_column'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_2_across';
  $breakpoint_group->name = 'Grid 2 Across';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['grid_2_across'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_3_across';
  $breakpoint_group->name = 'Grid 3 Across';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['grid_3_across'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_4_across';
  $breakpoint_group->name = 'Grid 4 Across';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['grid_4_across'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoints[] = 'breakpoints.theme.baseline.tablet-landscape';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_5_across';
  $breakpoint_group->name = 'Grid 5 Across';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['grid_5_across'] = $breakpoint_group;

  return $export;
}

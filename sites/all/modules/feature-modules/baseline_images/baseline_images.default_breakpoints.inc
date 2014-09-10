<?php
/**
 * @file
 * baseline_images.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function baseline_images_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.smalltouch';
  $breakpoint->name = 'smalltouch';
  $breakpoint->breakpoint = 'only screen and (max-width:480px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.theme.baseline.smalltouch'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.smalltouch-landscape';
  $breakpoint->name = 'smalltouch-landscape';
  $breakpoint->breakpoint = 'only screen and (min-width:321px) and (max-width:480px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.theme.baseline.smalltouch-landscape'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.smalltouch-portrait';
  $breakpoint->name = 'smalltouch-portrait';
  $breakpoint->breakpoint = 'only screen and (max-width:320px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.theme.baseline.smalltouch-portrait'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.standard';
  $breakpoint->name = 'standard';
  $breakpoint->breakpoint = 'only screen and (min-width:1025px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 6;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.baseline.standard'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.tablet';
  $breakpoint->name = 'tablet';
  $breakpoint->breakpoint = 'only screen and (min-width:481px) and (max-width:1024px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.theme.baseline.tablet'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.tablet-landscape';
  $breakpoint->name = 'tablet-landscape';
  $breakpoint->breakpoint = 'only screen and (min-width:801px) and (max-width:1024px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.theme.baseline.tablet-landscape'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.baseline.tablet-portrait';
  $breakpoint->name = 'tablet-portrait';
  $breakpoint->breakpoint = 'only screen and (min-width:481px) and (max-width:800px)';
  $breakpoint->source = 'baseline';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.theme.baseline.tablet-portrait'] = $breakpoint;

  return $export;
}

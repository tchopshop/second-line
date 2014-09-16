<?php
/**
 * @file
 * baseline_images.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function baseline_images_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      '10_column' => array(
        'custom_settings' => TRUE,
      ),
      '11_column' => array(
        'custom_settings' => TRUE,
      ),
      '12_column' => array(
        'custom_settings' => TRUE,
      ),
      '1_column' => array(
        'custom_settings' => TRUE,
      ),
      '2_column' => array(
        'custom_settings' => TRUE,
      ),
      '3_column' => array(
        'custom_settings' => TRUE,
      ),
      '4_column' => array(
        'custom_settings' => TRUE,
      ),
      '5_column' => array(
        'custom_settings' => TRUE,
      ),
      '6_column' => array(
        'custom_settings' => TRUE,
      ),
      '7_column' => array(
        'custom_settings' => TRUE,
      ),
      '8_column' => array(
        'custom_settings' => TRUE,
      ),
      '9_column' => array(
        'custom_settings' => TRUE,
      ),
      'grid_2_across' => array(
        'custom_settings' => TRUE,
      ),
      'grid_3_across' => array(
        'custom_settings' => TRUE,
      ),
      'grid_4_across' => array(
        'custom_settings' => TRUE,
      ),
      'grid_5_across' => array(
        'custom_settings' => TRUE,
      ),
      'huge' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'flexslider' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'grid_2_across_vertical' => array(
        'custom_settings' => TRUE,
      ),
      'grid_3_across_vertical' => array(
        'custom_settings' => TRUE,
      ),
      'grid_4_across_vertical' => array(
        'custom_settings' => TRUE,
      ),
      'grid_5_across_vertical' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '10_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '11_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '12_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '1_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '2_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '3_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '4_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '5_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '6_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '7_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '8_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '9_column' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_2_across' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_3_across' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_4_across' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_5_across' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'huge' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'flexslider' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'grid_2_across_vertical' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_3_across_vertical' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_4_across_vertical' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid_5_across_vertical' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'focus';
  $strongarm->value = 1;
  $export['focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_dialog_theme';
  $strongarm->value = 'adminimal';
  $export['media_dialog_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__dialog_theme';
  $strongarm->value = 'seven';
  $export['media__dialog_theme'] = $strongarm;

  return $export;
}

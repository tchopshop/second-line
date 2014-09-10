<?php
/**
 * @file
 * baseline_animation.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function baseline_animation_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|advanced|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'advanced';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_slides',
      ),
    ),
    'fields' => array(
      'field_paragraphs_slides' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|advanced|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_animation|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_animation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_text_animation',
      ),
    ),
    'fields' => array(
      'field_text_animation' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|text_animation|default'] = $ds_layout;

  return $export;
}

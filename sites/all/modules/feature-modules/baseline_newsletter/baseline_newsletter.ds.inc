<?php
/**
 * @file
 * baseline_newsletter.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function baseline_newsletter_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_subcolumns_paragraphs|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_subcolumns_paragraphs';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['field_collection_item|field_subcolumns_paragraphs|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function baseline_newsletter_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_subcolumns_paragraphs|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_subcolumns_paragraphs';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_image',
        1 => 'field_paragraph_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_image' => 'ds_content',
      'field_paragraph_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_subcolumns_paragraphs|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'simplenews_newsletter',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'simplenews_newsletter' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|simplenews|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|email_html';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'email_html';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_email_header_paragraphs',
        1 => 'body',
        2 => 'field_email_content_paragraphs',
        3 => 'field_email_sidebar_paragraphs',
        4 => 'field_email_footer_paragraphs',
      ),
    ),
    'fields' => array(
      'field_email_header_paragraphs' => 'ds_content',
      'body' => 'ds_content',
      'field_email_content_paragraphs' => 'ds_content',
      'field_email_sidebar_paragraphs' => 'ds_content',
      'field_email_footer_paragraphs' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|simplenews|email_html'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|sub_columns_email|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'sub_columns_email';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subcolumns_paragraphs',
      ),
    ),
    'fields' => array(
      'field_subcolumns_paragraphs' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|sub_columns_email|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_email|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_email';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|text_email|default'] = $ds_layout;

  return $export;
}

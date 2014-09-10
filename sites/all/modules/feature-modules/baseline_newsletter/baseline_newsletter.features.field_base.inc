<?php
/**
 * @file
 * baseline_newsletter.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function baseline_newsletter_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_additional_classes'
  $field_bases['field_additional_classes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_additional_classes',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'center' => 'Center',
        'panel' => 'Panel',
        'center panel' => 'Center inside Panel',
        'text-pad' => 'Padding on left & right',
        'left-text-pad' => 'Padding on left',
        'right-text-pad' => 'Padding on right',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_columns'
  $field_bases['field_columns'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_columns',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'twelve columns' => 'Twelve Columns',
        'eleven columns' => 'Eleven Columns',
        'ten columns' => 'Ten Columns',
        'nine columns' => 'Nine Columns',
        'eight columns' => 'Eight Columns',
        'seven columns' => 'Seven Columns',
        'six columns' => 'Six Columns',
        'five columns' => 'Five Columns',
        'four columns' => 'Four Columns',
        'three columns' => 'Three Columns',
        'two columns' => 'Two Columns',
        'one column' => 'One Column',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_email_content_paragraphs'
  $field_bases['field_email_content_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_content_paragraphs',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_email_footer_paragraphs'
  $field_bases['field_email_footer_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_footer_paragraphs',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_email_header_paragraphs'
  $field_bases['field_email_header_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_header_paragraphs',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_email_sidebar_paragraphs'
  $field_bases['field_email_sidebar_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_sidebar_paragraphs',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_subcolumns'
  $field_bases['field_subcolumns'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subcolumns',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'one sub-column' => 'One Sub-Column',
        'two sub-columns' => 'Two Sub-Columns',
        'three sub-columns' => 'Three Sub-Columns',
        'four sub-columns' => 'Four Sub-Columns',
        'five sub-columns' => 'Five Sub-Columns',
        'six sub-columns' => 'Six Sub-Columns',
        'seven sub-columns' => 'Seven Sub-Columns',
        'eight sub-columns' => 'Eight Sub-Columns',
        'nine sub-columns' => 'Nine Sub-Columns',
        'ten sub-columns' => 'Ten Sub-Columns',
        'eleven sub-columns' => 'Eleven Sub-Columns',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_subcolumns_paragraphs'
  $field_bases['field_subcolumns_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subcolumns_paragraphs',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'simplenews_handler'
  $field_bases['simplenews_handler'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'simplenews_handler',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'simplenews_handler_field_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'simplenews_handler_settings'
  $field_bases['simplenews_handler_settings'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_formatter' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'simplenews_handler_settings',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'simplenews_issue_status'
  $field_bases['simplenews_issue_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'simplenews_issue_status',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'simplenews_newsletter'
  $field_bases['simplenews_newsletter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'simplenews_newsletter',
    'foreign keys' => array(
      'simplenews_newsletter' => array(
        'columns' => array(
          'target_id' => 'newsletter_id',
        ),
        'table' => 'simplenews_newsletter',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'weight',
          'type' => 'property',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'simplenews_newsletter',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'simplenews_sent_count'
  $field_bases['simplenews_sent_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'simplenews_sent_count',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}

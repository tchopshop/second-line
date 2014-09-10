<?php
/**
 * @file
 * baseline_newsletter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function baseline_newsletter_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|simplenews|form';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '8',
    'children' => array(
      0 => 'field_email_footer_paragraphs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Footer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_footer|node|simplenews|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|simplenews|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '5',
    'children' => array(
      0 => 'field_email_header_paragraphs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_header|node|simplenews|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|simplenews|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '6',
    'children' => array(
      0 => 'field_email_content_paragraphs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_main_content|node|simplenews|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|simplenews|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '7',
    'children' => array(
      0 => 'field_email_sidebar_paragraphs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sidebar|node|simplenews|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser|node|simplenews|form';
  $field_group->group_name = 'group_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser',
    'weight' => '3',
    'children' => array(
      0 => 'field_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teaser',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_teaser|node|simplenews|form'] = $field_group;

  return $export;
}

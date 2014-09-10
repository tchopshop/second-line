<?php
/**
 * @file
 * baseline_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function baseline_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|page|featured';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'featured';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_subhead',
      1 => 'field_teaser',
      2 => 'title',
      3 => 'node_link',
      4 => 'group_meta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => 'info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|page|featured'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|page|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraphs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Content',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Construct your news or blog by adding text, images, media, links, quotes each of which will display in succession. You can rearrange elements by using the draggable handle on the left side of each paragraph element. Each paragraph element will follow each other. Images will float left, right or center.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|page|featured';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'featured';
  $field_group->parent_name = 'group_info';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '18',
    'children' => array(
      0 => 'field_tags',
      1 => 'comment_count',
      2 => 'view_count',
      3 => 'author',
      4 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'classes' => 'meta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta|node|page|featured'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|page|full';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '0',
    'children' => array(
      0 => 'field_tags',
      1 => 'view_count',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'classes' => 'meta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_info|node|page|teaser';
  $field_group->group_name = 'group_news_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '10',
    'children' => array(
      0 => 'field_subhead',
      1 => 'field_teaser',
      2 => 'title_field',
      3 => 'title',
      4 => 'group_meta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => 'info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_news_info|node|page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser|node|page|form';
  $field_group->group_name = 'group_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Intro Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Intro Text',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_teaser|node|page|form'] = $field_group;

  return $export;
}

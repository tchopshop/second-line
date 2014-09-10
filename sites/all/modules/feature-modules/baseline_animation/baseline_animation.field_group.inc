<?php
/**
 * @file
 * baseline_animation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function baseline_animation_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|animation_slide|default';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'animation_slide';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_content_animation',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'classes' => 'hsContainer',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_container|paragraphs_item|animation_slide|default'] = $field_group;

  return $export;
}

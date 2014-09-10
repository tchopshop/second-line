<?php
/**
 * @file
 * baseline_images.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function baseline_images_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|10_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '10_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 large-10 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|10_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|11_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '11_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 large-11 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|11_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|12_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '12_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|12_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|1_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '1_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-6 medium-3 large-1 column',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|1_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|2_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '2_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-6 medium-3 large-2 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|2_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|3_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '3_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-6 medium-4 large-3 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|3_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|4_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '4_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-6 large-4 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|4_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|5_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '5_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-6 large-5 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|5_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|6_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '6_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-6 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|6_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|7_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '7_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 medium-9 large-7 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|7_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|8_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '8_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 medium-9 large-8 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|8_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|9_column';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = '9_column';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 medium-9 large-9 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|9_column'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_viewmode|file|image|flexslider';
  $field_group->group_name = 'group_viewmode';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'flexslider';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'View mode',
      'instance_settings' => array(
        'classes' => 'small-12 columns',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_viewmode|file|image|flexslider'] = $field_group;

  return $export;
}

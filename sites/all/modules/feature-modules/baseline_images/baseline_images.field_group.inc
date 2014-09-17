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
  $field_group->identifier = 'group_flexslider|paragraphs_item|carousel|default';
  $field_group->group_name = 'group_flexslider';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_slides',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'wrapper',
      'instance_settings' => array(
        'classes' => 'row flexslider',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_flexslider|paragraphs_item|carousel|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|grid_2_across_portrait|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_2_across_portrait';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_grid_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row block-grid-2',
        'element' => 'ul',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|grid_2_across_portrait|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|grid_3_across_portrait|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_3_across_portrait';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_grid_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row block-grid-3',
        'element' => 'ul',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|grid_3_across_portrait|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|grid_4_across_portrait|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_4_across_portrait';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_grid_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row block-grid-4',
        'element' => 'ul',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|grid_4_across_portrait|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|grid_5_across_portrait|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_5_across_portrait';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_grid_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row block-grid-5',
        'element' => 'ul',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|grid_5_across_portrait|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slides|paragraphs_item|carousel|default';
  $field_group->group_name = 'group_slides';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_flexslider';
  $field_group->data = array(
    'label' => 'slides',
    'weight' => '1',
    'children' => array(
      0 => 'field_paragraph_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'slides',
      'instance_settings' => array(
        'classes' => 'slides',
        'element' => 'ul',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_slides|paragraphs_item|carousel|default'] = $field_group;

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
        'id' => 'file_image_10_column_group_viewmode',
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
        'id' => 'file_image_11_column_group_viewmode',
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
        'id' => 'file_image_12_column_group_viewmode',
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
        'id' => 'file_image_1_column_group_viewmode',
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
        'id' => 'file_image_2_column_group_viewmode',
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
        'id' => 'file_image_3_column_group_viewmode',
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
        'id' => 'file_image_4_column_group_viewmode',
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
        'id' => 'file_image_5_column_group_viewmode',
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
        'id' => 'file_image_6_column_group_viewmode',
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
        'id' => 'file_image_7_column_group_viewmode',
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
        'id' => 'file_image_8_column_group_viewmode',
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
        'id' => 'file_image_9_column_group_viewmode',
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
        'id' => 'file_image_flexslider_group_viewmode',
      ),
    ),
  );
  $export['group_viewmode|file|image|flexslider'] = $field_group;

  return $export;
}

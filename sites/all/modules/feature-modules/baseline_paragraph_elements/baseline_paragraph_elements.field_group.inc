<?php
/**
 * @file
 * baseline_paragraph_elements.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function baseline_paragraph_elements_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blockquote|paragraphs_item|quotation|default';
  $field_group->group_name = 'group_blockquote';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'quotation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'blockquote',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_quote',
      1 => 'group_footer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'blockquote',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'blockquote',
        'attributes' => '',
      ),
    ),
  );
  $export['group_blockquote|paragraphs_item|quotation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_break|paragraphs_item|quotation|default';
  $field_group->group_name = 'group_break';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'quotation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_footer';
  $field_group->data = array(
    'label' => 'break',
    'weight' => '4',
    'children' => array(
      0 => 'field_paragraph_attribution2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'break',
      'instance_settings' => array(
        'classes' => 'second-line',
        'element' => 'span',
        'attributes' => '',
      ),
    ),
  );
  $export['group_break|paragraphs_item|quotation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collapsible|paragraphs_item|accordian|default';
  $field_group->group_name = 'group_collapsible';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'accordian';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collapsible',
    'weight' => '0',
    'children' => array(
      0 => 'paragraph_accordion_entity_view_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Collapsible',
      'instance_settings' => array(
        'classes' => 'collapsible-panels',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_collapsible|paragraphs_item|accordian|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|paragraphs_item|pricing_table|default';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pricing_table';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '1',
    'children' => array(
      0 => 'field_pricing_table',
      1 => 'field_qty_price_tables',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columns',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_columns|paragraphs_item|pricing_table|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_definition_list|paragraphs_item|links|default';
  $field_group->group_name = 'group_definition_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'links';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Definition List',
    'weight' => '1',
    'children' => array(
      0 => 'field_paragraph_links',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Definition List',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'dl',
        'attributes' => '',
      ),
    ),
  );
  $export['group_definition_list|paragraphs_item|links|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex_list|paragraphs_item|slideshow|default';
  $field_group->group_name = 'group_flex_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_flexslider';
  $field_group->data = array(
    'label' => 'list Group',
    'weight' => '1',
    'children' => array(
      0 => 'field_grid_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'list Group',
      'instance_settings' => array(
        'classes' => 'slides',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_flex_list|paragraphs_item|slideshow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexslider|paragraphs_item|slideshow|default';
  $field_group->group_name = 'group_flexslider';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'flexslider',
    'weight' => '0',
    'children' => array(
      0 => 'group_flex_list',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'flexslider',
      'instance_settings' => array(
        'classes' => 'row flexslider',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_flexslider|paragraphs_item|slideshow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|paragraphs_item|quotation|default';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'quotation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_blockquote';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '4',
    'children' => array(
      0 => 'field_paragraph_attribution',
      1 => 'group_break',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Footer',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'footer',
        'attributes' => '',
      ),
    ),
  );
  $export['group_footer|paragraphs_item|quotation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|field_collection_item|field_pricing_table|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_pricing_table';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_price_description',
      1 => 'field_price_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_header|field_collection_item|field_pricing_table|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|field_collection_item|field_pricing_table|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_pricing_table';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List Group',
    'weight' => '2',
    'children' => array(
      0 => 'field_features',
      1 => 'field_price_button',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List Group',
      'instance_settings' => array(
        'classes' => 'list-group',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|field_collection_item|field_pricing_table|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|boxes_2_up|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'boxes_2_up';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_boxes',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row content-grid-2',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|boxes_2_up|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|boxes_3_up|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'boxes_3_up';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_boxes',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row content-grid-3',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|boxes_3_up|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|boxes_4_up|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'boxes_4_up';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_boxes',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List',
      'instance_settings' => array(
        'classes' => 'row content-grid-4',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|boxes_4_up|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|paragraphs_item|statistics|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'statistics';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List Group',
      'instance_settings' => array(
        'classes' => 'inline-stats',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_group|paragraphs_item|statistics|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_item|file|image|grid_4_across';
  $field_group->group_name = 'group_list_item';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'grid_4_across';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List item',
    'weight' => '1',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'List item',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'li',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $export['group_list_item|file|image|grid_4_across'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_item|paragraphs_item|grid_3_across|default';
  $field_group->group_name = 'group_list_item';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_3_across';
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
        'attributes' => '',
      ),
    ),
  );
  $export['group_list_item|paragraphs_item|grid_3_across|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|paragraphs_item|grid_2_across|default';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_2_across';
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
        'attributes' => '',
      ),
    ),
  );
  $export['group_list|paragraphs_item|grid_2_across|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|paragraphs_item|grid_4_across|default';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_4_across';
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
        'attributes' => '',
      ),
    ),
  );
  $export['group_list|paragraphs_item|grid_4_across|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|paragraphs_item|grid_5_across|default';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'grid_5_across';
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
        'attributes' => '',
      ),
    ),
  );
  $export['group_list|paragraphs_item|grid_5_across|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_price|field_collection_item|field_pricing_table|default';
  $field_group->group_name = 'group_price';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_pricing_table';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Price',
    'weight' => '1',
    'children' => array(
      0 => 'field_price',
      1 => 'field_frequency',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Price',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_price|field_collection_item|field_pricing_table|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|paragraphs_item|image|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_image',
      1 => 'field_image_alignment',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row|paragraphs_item|image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|paragraphs_item|statistics|default';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'statistics';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_list_group';
  $field_group->data = array(
    'label' => 'stat-wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_paragraph_statistics',
      1 => 'field_number_of_stats',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'stat-wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_wrapper|paragraphs_item|statistics|default'] = $field_group;

  return $export;
}

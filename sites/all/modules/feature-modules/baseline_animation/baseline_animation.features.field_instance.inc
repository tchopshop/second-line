<?php
/**
 * @file
 * baseline_animation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function baseline_animation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_content_animation-field_animation_attributes'
  $field_instances['field_collection_item-field_content_animation-field_animation_attributes'] = array(
    'bundle' => 'field_content_animation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add class="hsContent"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_animation_attributes',
    'label' => 'Animation attributes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'email' => 'email',
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_content_animation-field_image_animation'
  $field_instances['field_collection_item-field_content_animation-field_image_animation'] = array(
    'bundle' => 'field_content_animation',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_image_animation',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'animations',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'focus_required' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_content_animation-field_text_animation'
  $field_instances['field_collection_item-field_content_animation-field_text_animation'] = array(
    'bundle' => 'field_content_animation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_text_animation',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-advanced-field_paragraphs_slides'
  $field_instances['paragraphs_item-advanced-field_paragraphs_slides'] = array(
    'bundle' => 'advanced',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraphs_slides',
    'label' => 'Slides',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'aatext' => 0,
        'accordian' => 0,
        'advanced' => 0,
        'animation_slide' => 'animation_slide',
        'basic_table' => 0,
        'boxes_2_up' => 0,
        'boxes_3_up' => 0,
        'boxes_4_up' => 0,
        'collage' => 0,
        'content_boxes' => 0,
        'file_list' => 0,
        'flowing_text_columns' => 0,
        'google_map' => 0,
        'grid_2_across' => 0,
        'grid_3_across' => 0,
        'grid_4_across' => 0,
        'grid_5_across' => 0,
        'grids' => 0,
        'h2' => 0,
        'h3' => 0,
        'h4' => 0,
        'h5' => 0,
        'h6' => 0,
        'headline' => 0,
        'image' => 0,
        'links' => 0,
        'pricing_table' => 0,
        'quotation' => 0,
        'slideshow' => 0,
        'statistics' => 0,
        'sub_columns_email' => 0,
        'table' => 0,
        'text' => 0,
        'text_animation' => 0,
        'text_email' => 0,
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Slide',
      'title_multiple' => 'Slides',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-animation_slide-field_bgd_image_attribute'
  $field_instances['paragraphs_item-animation_slide-field_bgd_image_attribute'] = array(
    'bundle' => 'animation_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add class="bcg".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_bgd_image_attribute',
    'label' => 'Background Image Attributes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'email' => 'email',
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-animation_slide-field_content_animation'
  $field_instances['paragraphs_item-animation_slide-field_content_animation'] = array(
    'bundle' => 'animation_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_content_animation',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-animation_slide-field_slide_attributes'
  $field_instances['paragraphs_item-animation_slide-field_slide_attributes'] = array(
    'bundle' => 'animation_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add skrollr attributes for the slide element. Should contain a unique id and the class "homeSlide".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_slide_attributes',
    'label' => 'Slide Attributes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'email' => 'email',
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add class="bcg".');
  t('Add class="hsContent"');
  t('Add skrollr attributes for the slide element. Should contain a unique id and the class "homeSlide".');
  t('Animation attributes');
  t('Background Image Attributes');
  t('Content');
  t('Image');
  t('Slide Attributes');
  t('Slides');
  t('Text');

  return $field_instances;
}

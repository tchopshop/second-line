<?php
/**
 * @file
 * baseline_paragraph_elements.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function baseline_paragraph_elements_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_3_field_file_table-field_column_1'
  $field_instances['field_collection_item-field_3_field_file_table-field_column_1'] = array(
    'bundle' => 'field_3_field_file_table',
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
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_column_1',
    'label' => 'Column 1',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 0,
          'filtered_html' => 0,
          'full' => 0,
          'full_html' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_3_field_file_table-field_column_2'
  $field_instances['field_collection_item-field_3_field_file_table-field_column_2'] = array(
    'bundle' => 'field_3_field_file_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_column_2',
    'label' => 'Column 2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 0,
          'filtered_html' => 0,
          'full' => 0,
          'full_html' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_3_field_file_table-field_downloadable_file'
  $field_instances['field_collection_item-field_3_field_file_table-field_downloadable_file'] = array(
    'bundle' => 'field_3_field_file_table',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'text' => 'Download',
        ),
        'type' => 'file_download_link',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_downloadable_file',
    'label' => 'Downloadable File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'files/[current-page:title]',
      'file_extensions' => 'txt rtf doc docx pages tex wps odt xls xlsx wks ods ppt pptx pps ppsx odp pdf bmp tif png gif jpg jpeg',
      'max_filesize' => '',
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
          'document' => 'document',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_accordian-field_accordian_text'
  $field_instances['field_collection_item-field_accordian-field_accordian_text'] = array(
    'bundle' => 'field_accordian',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_accordian_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_accordian-field_title_question'
  $field_instances['field_collection_item-field_accordian-field_title_question'] = array(
    'bundle' => 'field_accordian',
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
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_title_question',
    'label' => 'Title/Question',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 0,
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_boxes-field_featured_image'
  $field_instances['field_collection_item-field_paragraph_boxes-field_featured_image'] = array(
    'bundle' => 'field_paragraph_boxes',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_2_across_no_crop',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_featured_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'focus_required' => 0,
      'max_filesize' => '',
      'max_resolution' => '1200x800',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_boxes-field_link'
  $field_instances['field_collection_item-field_paragraph_boxes-field_link'] = array(
    'bundle' => 'field_paragraph_boxes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link',
    'label' => 'Read more',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Read more',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_boxes-field_paragraph_text'
  $field_instances['field_collection_item-field_paragraph_boxes-field_paragraph_text'] = array(
    'bundle' => 'field_paragraph_boxes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_paragraph_text',
    'label' => 'Text',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_boxes-title_field'
  $field_instances['field_collection_item-field_paragraph_boxes-title_field'] = array(
    'bundle' => 'field_paragraph_boxes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'title_field',
    'label' => 'Headline',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_links-field_description'
  $field_instances['field_collection_item-field_paragraph_links-field_description'] = array(
    'bundle' => 'field_paragraph_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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

  // Exported field_instance: 'field_collection_item-field_paragraph_links-field_link'
  $field_instances['field_collection_item-field_paragraph_links-field_link'] = array(
    'bundle' => 'field_paragraph_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_statistics-field_paragraph_text'
  $field_instances['field_collection_item-field_paragraph_statistics-field_paragraph_text'] = array(
    'bundle' => 'field_paragraph_statistics',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_paragraph_text',
    'label' => 'Text Paragraph',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_paragraph_statistics-field_statistic'
  $field_instances['field_collection_item-field_paragraph_statistics-field_statistic'] = array(
    'bundle' => 'field_paragraph_statistics',
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
    'field_name' => 'field_statistic',
    'label' => 'Statistic',
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

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_features'
  $field_instances['field_collection_item-field_pricing_table-field_features'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_features',
    'label' => 'Features',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_frequency'
  $field_instances['field_collection_item-field_pricing_table-field_frequency'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_frequency',
    'label' => 'Frequency',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_price'
  $field_instances['field_collection_item-field_pricing_table-field_price'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_price',
    'label' => 'Price',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_price_button'
  $field_instances['field_collection_item-field_pricing_table-field_price_button'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_price_button',
    'label' => 'Button',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 60,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_price_description'
  $field_instances['field_collection_item-field_pricing_table-field_price_description'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_price_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_price_featured'
  $field_instances['field_collection_item-field_pricing_table-field_price_featured'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_price_featured',
    'label' => 'Featured?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_pricing_table-field_price_title'
  $field_instances['field_collection_item-field_pricing_table-field_price_title'] = array(
    'bundle' => 'field_pricing_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_price_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_column_flow-field_paragraph_text'
  $field_instances['paragraphs_item-2_column_flow-field_paragraph_text'] = array(
    'bundle' => '2_column_flow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_two_column_text',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_text',
    'label' => '2 Columns',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 0,
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3_column_flow-field_paragraph_text'
  $field_instances['paragraphs_item-3_column_flow-field_paragraph_text'] = array(
    'bundle' => '3_column_flow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_three_column_text',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_text',
    'label' => '3 Columns',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 0,
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4_column_flow-field_paragraph_text'
  $field_instances['paragraphs_item-4_column_flow-field_paragraph_text'] = array(
    'bundle' => '4_column_flow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_four_column_text',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_text',
    'label' => '4 Columns',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 0,
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-aatext-field_paragraph_text'
  $field_instances['paragraphs_item-aatext-field_paragraph_text'] = array(
    'bundle' => 'aatext',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text',
    'label' => 'Text Paragraph',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-accordian-field_accordian'
  $field_instances['paragraphs_item-accordian-field_accordian'] = array(
    'bundle' => 'accordian',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_accordian',
    'label' => 'Accordion',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic_table-field_paragraphs_basic_table'
  $field_instances['paragraphs_item-basic_table-field_paragraphs_basic_table'] = array(
    'bundle' => 'basic_table',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => '',
          'cell_0_1' => '',
          'cell_0_2' => '',
          'cell_0_3' => '',
          'cell_0_4' => '',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => '',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'cell_4_0' => '',
          'cell_4_1' => '',
          'cell_4_2' => '',
          'cell_4_3' => '',
          'cell_4_4' => '',
          'import' => array(
            'rebuild_field_paragraphs_basic_table_0' => 'Upload CSV',
            'tablefield_csv_field_paragraphs_basic_table_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 5,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraphs_basic_table',
    'label' => 'Basic Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-boxes_2_up-field_paragraph_boxes'
  $field_instances['paragraphs_item-boxes_2_up-field_paragraph_boxes'] = array(
    'bundle' => 'boxes_2_up',
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
    'field_name' => 'field_paragraph_boxes',
    'label' => 'Boxes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-boxes_3_up-field_paragraph_boxes'
  $field_instances['paragraphs_item-boxes_3_up-field_paragraph_boxes'] = array(
    'bundle' => 'boxes_3_up',
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
    'field_name' => 'field_paragraph_boxes',
    'label' => 'Boxes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-boxes_4_up-field_paragraph_boxes'
  $field_instances['paragraphs_item-boxes_4_up-field_paragraph_boxes'] = array(
    'bundle' => 'boxes_4_up',
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
    'field_name' => 'field_paragraph_boxes',
    'label' => 'Boxes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-collage-field_paragraph_collage_image'
  $field_instances['paragraphs_item-collage-field_paragraph_collage_image'] = array(
    'bundle' => 'collage',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'collageformatter',
        'settings' => array(
          'border_color' => '#000000',
          'border_size' => 0,
          'collage_border_color' => '#ffffff',
          'collage_border_size' => 0,
          'collage_number' => 1,
          'collage_orientation' => 0,
          'collage_width' => 900,
          'gap_color' => '#ffffff',
          'gap_size' => 3,
          'image_link' => '',
          'image_link_class' => '',
          'image_link_image_style' => '',
          'image_link_modal' => '',
          'image_link_rel' => '',
          'images_per_collage' => '',
          'images_to_skip' => 0,
        ),
        'type' => 'collageformatter',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'figure',
    'field_name' => 'field_paragraph_collage_image',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '[current-page:title]',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-content_boxes-field_content_boxes'
  $field_instances['paragraphs_item-content_boxes-field_content_boxes'] = array(
    'bundle' => 'content_boxes',
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
    'field_name' => 'field_content_boxes',
    'label' => 'Boxes',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'aatext' => 0,
        'accordian' => 0,
        'advanced' => 0,
        'basic_table' => 0,
        'boxes_2_up' => 'boxes_2_up',
        'boxes_3_up' => 'boxes_3_up',
        'boxes_4_up' => 'boxes_4_up',
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
        'image' => 0,
        'links' => 0,
        'pricing_table' => 0,
        'quotation' => 0,
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
      'title' => 'Box',
      'title_multiple' => 'Boxes',
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

  // Exported field_instance: 'paragraphs_item-file_list-field_downloadable_file'
  $field_instances['paragraphs_item-file_list-field_downloadable_file'] = array(
    'bundle' => 'file_list',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_downloadable_file',
    'label' => 'Downloadable File',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/[current-page:title]',
      'file_extensions' => 'txt rtf doc docx pages tex wps odt xls xlsx wks ods ppt pptx pps ppsx odp pdf bmp tif png gif jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'allowed_types' => array(
          0 => 'image',
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-flowing_text_columns-field_flowing_text_columns'
  $field_instances['paragraphs_item-flowing_text_columns-field_flowing_text_columns'] = array(
    'bundle' => 'flowing_text_columns',
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
    'field_name' => 'field_flowing_text_columns',
    'label' => 'Flowing Columns',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => '2_column_flow',
        '3_column_flow' => '3_column_flow',
        '4_column_flow' => '4_column_flow',
        'accordian' => 0,
        'basic_table' => 0,
        'collage' => 0,
        'file_list' => 0,
        'flowing_text_columns' => 0,
        'google_map' => 0,
        'grid_2_across' => 0,
        'grid_3_across' => 0,
        'grid_4_across' => 0,
        'grid_5_across' => 0,
        'grids' => 0,
        'image' => 0,
        'links' => 0,
        'quotation' => 0,
        'sub_columns_email' => 0,
        'table' => 0,
        'text' => 0,
        'text_email' => 0,
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Column',
      'title_multiple' => 'Columns',
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

  // Exported field_instance: 'paragraphs_item-google_map-field_alignment'
  $field_instances['paragraphs_item-google_map-field_alignment'] = array(
    'bundle' => 'google_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_alignment',
    'label' => 'Alignment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-google_map-field_column_width'
  $field_instances['paragraphs_item-google_map-field_column_width'] = array(
    'bundle' => 'google_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_column_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-google_map-field_paragraph_address'
  $field_instances['paragraphs_item-google_map-field_paragraph_address'] = array(
    'bundle' => 'google_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'simple_gmap',
        'settings' => array(
          'iframe_height' => '',
          'iframe_width' => '100%',
          'include_link' => 0,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 1,
          'information_bubble' => 1,
          'langcode' => 'en',
          'link_text' => 'View larger map',
          'map_type' => 'm',
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'figure',
    'field_name' => 'field_paragraph_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_2_across-field_grid_images'
  $field_instances['paragraphs_item-grid_2_across-field_grid_images'] = array(
    'bundle' => 'grid_2_across',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_2_across',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'li',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_2_across_portrait-field_grid_images'
  $field_instances['paragraphs_item-grid_2_across_portrait-field_grid_images'] = array(
    'bundle' => 'grid_2_across_portrait',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_2_across_vertical',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_3_across-field_grid_images'
  $field_instances['paragraphs_item-grid_3_across-field_grid_images'] = array(
    'bundle' => 'grid_3_across',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_3_across',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'li',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_3_across_portrait-field_grid_images'
  $field_instances['paragraphs_item-grid_3_across_portrait-field_grid_images'] = array(
    'bundle' => 'grid_3_across_portrait',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_3_across_vertical',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_4_across-field_grid_images'
  $field_instances['paragraphs_item-grid_4_across-field_grid_images'] = array(
    'bundle' => 'grid_4_across',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_4_across',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'li',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_4_across_portrait-field_grid_images'
  $field_instances['paragraphs_item-grid_4_across_portrait-field_grid_images'] = array(
    'bundle' => 'grid_4_across_portrait',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_4_across_vertical',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_5_across-field_grid_images'
  $field_instances['paragraphs_item-grid_5_across-field_grid_images'] = array(
    'bundle' => 'grid_5_across',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_5_across',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'li',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grid_5_across_portrait-field_grid_images'
  $field_instances['paragraphs_item-grid_5_across_portrait-field_grid_images'] = array(
    'bundle' => 'grid_5_across_portrait',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'grid_5_across_vertical',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-grids-field_paragraph_grids'
  $field_instances['paragraphs_item-grids-field_paragraph_grids'] = array(
    'bundle' => 'grids',
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
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_grids',
    'label' => 'Grids',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'aatext' => 0,
        'accordian' => 0,
        'advanced' => 0,
        'animation_slide' => 0,
        'basic_table' => 0,
        'boxes_2_up' => 0,
        'boxes_3_up' => 0,
        'boxes_4_up' => 0,
        'collage' => 0,
        'content_boxes' => 0,
        'file_list' => 0,
        'flowing_text_columns' => 0,
        'google_map' => 0,
        'grid_2_across' => 'grid_2_across',
        'grid_2_across_portrait' => 'grid_2_across_portrait',
        'grid_3_across' => 'grid_3_across',
        'grid_3_across_portrait' => 'grid_3_across_portrait',
        'grid_4_across' => 'grid_4_across',
        'grid_4_across_portrait' => 'grid_4_across_portrait',
        'grid_5_across' => 'grid_5_across',
        'grid_5_across_portrait' => 'grid_5_across_portrait',
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
        'text_email' => 0,
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Grid',
      'title_multiple' => 'Grids',
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

  // Exported field_instance: 'paragraphs_item-h2-field_paragraph_text_headline'
  $field_instances['paragraphs_item-h2-field_paragraph_text_headline'] = array(
    'bundle' => 'h2',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
          'full' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-h3-field_paragraph_text_headline'
  $field_instances['paragraphs_item-h3-field_paragraph_text_headline'] = array(
    'bundle' => 'h3',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
          'full' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-h4-field_paragraph_text_headline'
  $field_instances['paragraphs_item-h4-field_paragraph_text_headline'] = array(
    'bundle' => 'h4',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
          'full' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-h5-field_paragraph_text_headline'
  $field_instances['paragraphs_item-h5-field_paragraph_text_headline'] = array(
    'bundle' => 'h5',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
          'full' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-h6-field_paragraph_text_headline'
  $field_instances['paragraphs_item-h6-field_paragraph_text_headline'] = array(
    'bundle' => 'h6',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
          'full' => 0,
          'panopoly_html_text' => 0,
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-headline-field_paragraph_headline'
  $field_instances['paragraphs_item-headline-field_paragraph_headline'] = array(
    'bundle' => 'headline',
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
    'field_name' => 'field_paragraph_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'aatext' => 0,
        'accordian' => 0,
        'advanced' => 0,
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
        'h2' => 'h2',
        'h3' => 'h3',
        'h4' => 'h4',
        'h5' => 'h5',
        'h6' => 'h6',
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
      'title' => 'Headline',
      'title_multiple' => 'Headlines',
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

  // Exported field_instance: 'paragraphs_item-image-field_alignment'
  $field_instances['paragraphs_item-image-field_alignment'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_key',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_alignment',
    'label' => 'Image Alignment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image-field_image_alignment'
  $field_instances['paragraphs_item-image-field_image_alignment'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_formatter_css_class',
        'settings' => array(
          'depth' => 0,
          'hidden' => 1,
          'target' => 'field_group',
        ),
        'type' => 'cssclass_formatter',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image_alignment',
    'label' => 'Image Alignment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image-field_paragraph_image'
  $field_instances['paragraphs_item-image-field_paragraph_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'formatter_field',
        'settings' => array(),
        'type' => 'from_field',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'formatter_field',
        'settings' => array(
          'grid_field_formatter' => array(
            'columns' => 1,
            'grid_enable' => FALSE,
          ),
        ),
        'type' => 'from_field',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'figure',
    'field_name' => 'field_paragraph_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'images/[current-page:title]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image-field_paragraph_image_layout'
  $field_instances['paragraphs_item-image-field_paragraph_image_layout'] = array(
    'bundle' => 'image',
    'default_value' => array(
      0 => array(
        'type' => 'file_rendered',
        'settings' => 'a:2:{s:14:"file_view_mode";s:8:"6_column";s:24:"__formatter_field_preset";s:9:"6_columns";}',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_image_layout',
    'label' => 'Image Layout',
    'required' => 0,
    'settings' => array(
      'field_name' => 'field_paragraph_image',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'formatter_field_preset',
      'settings' => array(),
      'type' => 'formatter_preset_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_column_width'
  $field_instances['paragraphs_item-links-field_column_width'] = array(
    'bundle' => 'links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_column_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_intro'
  $field_instances['paragraphs_item-links-field_intro'] = array(
    'bundle' => 'links',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_intro',
    'label' => 'Intro',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_links'
  $field_instances['paragraphs_item-links-field_links'] = array(
    'bundle' => 'links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_links',
    'label' => 'links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => 'nofollow',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_paragraph_links'
  $field_instances['paragraphs_item-links-field_paragraph_links'] = array(
    'bundle' => 'links',
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
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-pricing_table-field_pricing_table'
  $field_instances['paragraphs_item-pricing_table-field_pricing_table'] = array(
    'bundle' => 'pricing_table',
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
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_pricing_table',
    'label' => 'Pricing Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-pricing_table-field_pricing_title'
  $field_instances['paragraphs_item-pricing_table-field_pricing_title'] = array(
    'bundle' => 'pricing_table',
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
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_pricing_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-pricing_table-field_qty_price_tables'
  $field_instances['paragraphs_item-pricing_table-field_qty_price_tables'] = array(
    'bundle' => 'pricing_table',
    'default_value' => array(
      0 => array(
        'value' => 'price-three',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_formatter_css_class',
        'settings' => array(
          'depth' => 0,
          'hidden' => 1,
          'target' => 'field_group',
        ),
        'type' => 'cssclass_formatter',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_qty_price_tables',
    'label' => 'Number of Price Tables',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quotation-field_attribution'
  $field_instances['paragraphs_item-quotation-field_attribution'] = array(
    'bundle' => 'quotation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'cite',
    'field_name' => 'field_attribution',
    'label' => 'Attribution',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
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

  // Exported field_instance: 'paragraphs_item-quotation-field_paragraph_attribution'
  $field_instances['paragraphs_item-quotation-field_paragraph_attribution'] = array(
    'bundle' => 'quotation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_attribution',
    'label' => 'Attribution',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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

  // Exported field_instance: 'paragraphs_item-quotation-field_paragraph_attribution2'
  $field_instances['paragraphs_item-quotation-field_paragraph_attribution2'] = array(
    'bundle' => 'quotation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_attribution2',
    'label' => 'Attribution2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full' => 'full',
          'full_html' => 'full_html',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full' => array(
              'weight' => -7,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'panopoly_html_text' => array(
              'weight' => -8,
            ),
            'panopoly_wysiwyg_text' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quotation-field_paragraph_quote'
  $field_instances['paragraphs_item-quotation-field_paragraph_quote'] = array(
    'bundle' => 'quotation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'blockquote',
    'field_name' => 'field_paragraph_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-slideshow-field_grid_images'
  $field_instances['paragraphs_item-slideshow-field_grid_images'] = array(
    'bundle' => 'slideshow',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'flexslider',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grid_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'slideshow',
      'file_extensions' => 'jpg gif png jpeg',
      'max_filesize' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-statistics-field_number_of_stats'
  $field_instances['paragraphs_item-statistics-field_number_of_stats'] = array(
    'bundle' => 'statistics',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Make sure to match the number of stat to the amount entered',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_formatter_css_class',
        'settings' => array(
          'depth' => 0,
          'hidden' => 1,
          'target' => 'field_group',
        ),
        'type' => 'cssclass_formatter',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_number_of_stats',
    'label' => 'Number of Stats',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-statistics-field_paragraph_statistics'
  $field_instances['paragraphs_item-statistics-field_paragraph_statistics'] = array(
    'bundle' => 'statistics',
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
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_statistics',
    'label' => 'Statistics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-table-field_table_types'
  $field_instances['paragraphs_item-table-field_table_types'] = array(
    'bundle' => 'table',
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
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_table_types',
    'label' => 'Table Types',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'aatext' => 0,
        'accordian' => 0,
        'basic_table' => 'basic_table',
        'collage' => 0,
        'file_list' => 'file_list',
        'flowing_text_columns' => 0,
        'google_map' => 0,
        'grid_2_across' => 0,
        'grid_3_across' => 0,
        'grid_4_across' => 0,
        'grid_5_across' => 0,
        'grids' => 0,
        'image' => 0,
        'links' => 0,
        'pricing_table' => 'pricing_table',
        'quotation' => 0,
        'sub_columns_email' => 0,
        'table' => 0,
        'text_email' => 0,
        'text_text_file' => 'text_text_file',
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Table',
      'title_multiple' => 'Tables',
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

  // Exported field_instance: 'paragraphs_item-text-field_paragraph_text'
  $field_instances['paragraphs_item-text-field_paragraph_text'] = array(
    'bundle' => 'text',
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
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_text',
    'label' => 'Text Paragraph',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'full' => 'full',
          'panopoly_html_text' => 'panopoly_html_text',
          'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_text_file-field_3_field_file_table'
  $field_instances['paragraphs_item-text_text_file-field_3_field_file_table'] = array(
    'bundle' => 'text_text_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_3_field_file_table',
    'label' => '3 Field File Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_text_file-field_table_col1_header'
  $field_instances['paragraphs_item-text_text_file-field_table_col1_header'] = array(
    'bundle' => 'text_text_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_table_col1_header',
    'label' => 'Column 1 Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
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

  // Exported field_instance: 'paragraphs_item-text_text_file-field_table_col2_header'
  $field_instances['paragraphs_item-text_text_file-field_table_col2_header'] = array(
    'bundle' => 'text_text_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_table_col2_header',
    'label' => 'Column 2 Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_text_file-field_table_col3_header'
  $field_instances['paragraphs_item-text_text_file-field_table_col3_header'] = array(
    'bundle' => 'text_text_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_table_col3_header',
    'label' => 'Column 3 Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tweet-field_paragraph_tweet'
  $field_instances['paragraphs_item-tweet-field_paragraph_tweet'] = array(
    'bundle' => 'tweet',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Find the status number for the tweet you\'d like to display. Do this by More > Embed Tweet and copying the code. Inside look for the long number inside the URL after ..."statuses/"',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_tweet',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_tweet',
    'label' => 'Tweet ID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
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

  // Exported field_instance: 'paragraphs_item-video-field_paragraph_video'
  $field_instances['paragraphs_item-video-field_paragraph_video'] = array(
    'bundle' => 'video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'figure',
    'field_name' => 'field_paragraph_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 0,
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'upload' => 0,
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2 Columns');
  t('3 Columns');
  t('3 Field File Table');
  t('4 Columns');
  t('Accordion');
  t('Address');
  t('Alignment');
  t('Attribution');
  t('Attribution2');
  t('Basic Table');
  t('Boxes');
  t('Button');
  t('Column 1');
  t('Column 1 Header');
  t('Column 2');
  t('Column 2 Header');
  t('Column 3 Header');
  t('Description');
  t('Downloadable File');
  t('Featured?');
  t('Features');
  t('Find the status number for the tweet you\'d like to display. Do this by More > Embed Tweet and copying the code. Inside look for the long number inside the URL after ..."statuses/"');
  t('Flowing Columns');
  t('Frequency');
  t('Grids');
  t('Headline');
  t('Image');
  t('Image Alignment');
  t('Image Layout');
  t('Images');
  t('Intro');
  t('Link');
  t('Links');
  t('Make sure to match the number of stat to the amount entered');
  t('Number of Price Tables');
  t('Number of Stats');
  t('Price');
  t('Pricing Table');
  t('Quote');
  t('Read more');
  t('Statistic');
  t('Statistics');
  t('Table Types');
  t('Text');
  t('Text Paragraph');
  t('Title');
  t('Title/Question');
  t('Tweet ID');
  t('Video');
  t('Width');
  t('links');

  return $field_instances;
}

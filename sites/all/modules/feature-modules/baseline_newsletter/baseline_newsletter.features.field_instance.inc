<?php
/**
 * @file
 * baseline_newsletter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function baseline_newsletter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_subcolumns_paragraphs-field_paragraph_image'
  $field_instances['field_collection_item-field_subcolumns_paragraphs-field_paragraph_image'] = array(
    'bundle' => 'field_subcolumns_paragraphs',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => '5_column',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'newsletter/images',
      'file_extensions' => 'png jpg jpeg gif',
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

  // Exported field_instance: 'field_collection_item-field_subcolumns_paragraphs-field_paragraph_text'
  $field_instances['field_collection_item-field_subcolumns_paragraphs-field_paragraph_text'] = array(
    'bundle' => 'field_subcolumns_paragraphs',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_paragraph_text',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_subcolumns_paragraphs-field_subcolumns'
  $field_instances['field_collection_item-field_subcolumns_paragraphs-field_subcolumns'] = array(
    'bundle' => 'field_subcolumns_paragraphs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'All subcolumns must add up to twelve.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_subcolumns',
    'label' => 'Subcolumns',
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

  // Exported field_instance: 'node-simplenews-field_email_content_paragraphs'
  $field_instances['node-simplenews-field_email_content_paragraphs'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 8,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'email_plain' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_content_paragraphs',
    'label' => 'Main Content Elements',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'accordian' => 0,
        'advanced' => 0,
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
        'sub_columns_email' => 'sub_columns_email',
        'table' => 0,
        'text' => 0,
        'text_animation' => 0,
        'text_email' => 'text_email',
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-simplenews-field_email_footer_paragraphs'
  $field_instances['node-simplenews-field_email_footer_paragraphs'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 10,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'email_plain' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_email_footer_paragraphs',
    'label' => 'Footer Elements',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'accordian' => 0,
        'advanced' => 0,
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
        'sub_columns_email' => 'sub_columns_email',
        'table' => 0,
        'text' => 0,
        'text_animation' => 0,
        'text_email' => 'text_email',
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-simplenews-field_email_header_paragraphs'
  $field_instances['node-simplenews-field_email_header_paragraphs'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'email_plain' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_email_header_paragraphs',
    'label' => 'Header Elements',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'accordian' => 0,
        'advanced' => 0,
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
        'sub_columns_email' => 'sub_columns_email',
        'table' => 0,
        'text' => 0,
        'text_animation' => 0,
        'text_email' => 'text_email',
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-simplenews-field_email_sidebar_paragraphs'
  $field_instances['node-simplenews-field_email_sidebar_paragraphs'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 9,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'email_plain' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_email_sidebar_paragraphs',
    'label' => 'Sidebar Elements',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        '2_column_flow' => 0,
        '3_column_flow' => 0,
        '4_column_flow' => 0,
        'accordian' => 0,
        'advanced' => 0,
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
        'sub_columns_email' => 'sub_columns_email',
        'table' => 0,
        'text' => 0,
        'text_animation' => 0,
        'text_email' => 'text_email',
        'text_text_file' => 0,
        'tweet' => 0,
        'video' => 0,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-simplenews-field_teaser'
  $field_instances['node-simplenews-field_teaser'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_plain' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_teaser',
    'label' => 'Teaser Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
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

  // Exported field_instance: 'node-simplenews-simplenews_handler'
  $field_instances['node-simplenews-simplenews_handler'] = array(
    'bundle' => 'simplenews',
    'default_value' => array(
      0 => array(
        'value' => 'simplenews_subscription',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_handler',
    'label' => 'Recipient Handler',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_handler_settings'
  $field_instances['node-simplenews-simplenews_handler_settings'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_handler_settings',
    'label' => 'Recipient Handle Settings',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_issue_status'
  $field_instances['node-simplenews-simplenews_issue_status'] = array(
    'bundle' => 'simplenews',
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
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_issue_status',
    'label' => 'Status',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_newsletter'
  $field_instances['node-simplenews-simplenews_newsletter'] = array(
    'bundle' => 'simplenews',
    'default_value' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_newsletter',
    'label' => 'Newsletter',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_sent_count'
  $field_instances['node-simplenews-simplenews_sent_count'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_sent_count',
    'label' => 'Sent subscriber count',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-simplenews-title_field'
  $field_instances['node-simplenews-title_field'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'email_plain' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'title_field',
    'label' => 'Headline',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
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
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
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

  // Exported field_instance: 'paragraphs_item-sub_columns_email-field_additional_classes'
  $field_instances['paragraphs_item-sub_columns_email-field_additional_classes'] = array(
    'bundle' => 'sub_columns_email',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_additional_classes',
    'label' => 'Additional Classes',
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

  // Exported field_instance: 'paragraphs_item-sub_columns_email-field_columns'
  $field_instances['paragraphs_item-sub_columns_email-field_columns'] = array(
    'bundle' => 'sub_columns_email',
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
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_columns',
    'label' => 'Columns',
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

  // Exported field_instance: 'paragraphs_item-sub_columns_email-field_subcolumns_paragraphs'
  $field_instances['paragraphs_item-sub_columns_email-field_subcolumns_paragraphs'] = array(
    'bundle' => 'sub_columns_email',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_subcolumns_paragraphs',
    'label' => 'Subcolumns',
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

  // Exported field_instance: 'paragraphs_item-text_email-field_additional_classes'
  $field_instances['paragraphs_item-text_email-field_additional_classes'] = array(
    'bundle' => 'text_email',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These classes go on the td element.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_additional_classes',
    'label' => 'Additional Classes',
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

  // Exported field_instance: 'paragraphs_item-text_email-field_columns'
  $field_instances['paragraphs_item-text_email-field_columns'] = array(
    'bundle' => 'text_email',
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
    'field_name' => 'field_columns',
    'label' => 'Columns',
    'required' => 0,
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

  // Exported field_instance: 'paragraphs_item-text_email-field_paragraph_text'
  $field_instances['paragraphs_item-text_email-field_paragraph_text'] = array(
    'bundle' => 'text_email',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_paragraph_text',
    'label' => 'Text Paragraph',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'email' => 0,
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Classes');
  t('All subcolumns must add up to twelve.');
  t('Columns');
  t('Footer Elements');
  t('Header Elements');
  t('Headline');
  t('Image');
  t('Main Content Elements');
  t('Newsletter');
  t('Recipient Handle Settings');
  t('Recipient Handler');
  t('Sent subscriber count');
  t('Sidebar Elements');
  t('Status');
  t('Subcolumns');
  t('Teaser Text');
  t('Text');
  t('Text Paragraph');
  t('These classes go on the td element.');

  return $field_instances;
}

<?php
/**
 * @file
 * baseline_images.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function baseline_images_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '10_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '10_columns',
  );
  $export['image__10_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__11_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '11_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '11_columns',
  );
  $export['image__11_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__12_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '12_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '12_columns',
  );
  $export['image__12_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__1_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '1_column',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '1_column',
  );
  $export['image__1_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__2_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '2_columns',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '2_column',
  );
  $export['image__2_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__3_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '3_columns',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '3_column',
  );
  $export['image__3_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__4_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '4_columns',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '4_column',
  );
  $export['image__4_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__5_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '5_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '5_col',
  );
  $export['image__5_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__6_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '6_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '6_column',
  );
  $export['image__6_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__7_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '7_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '7_column',
  );
  $export['image__7_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__8_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '8_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '8_column',
  );
  $export['image__8_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__9_column__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '9_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '9_column',
  );
  $export['image__9_column__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__carousel__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_mapping' => '4_column',
    'fallback_image_style' => '4_columns',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__carousel__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__flexslider__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => '12_columns',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => '12_columns',
  );
  $export['image__flexslider__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__flexslider__file_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_group' => '1_column',
    'fallback_image_style' => '',
    'alt' => '',
    'title' => '',
  );
  $export['image__flexslider__file_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_2_across__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-600x360',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_2_across',
  );
  $export['image__grid_2_across__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_2_across_vertical__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-600x760',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_2_across_vertical',
  );
  $export['image__grid_2_across_vertical__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_3_across__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-400x240',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_3_across',
  );
  $export['image__grid_3_across__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_3_across_vertical__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-400x480',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_3_across_vertical',
  );
  $export['image__grid_3_across_vertical__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_4_across__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-300x200',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_4_across',
  );
  $export['image__grid_4_across__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_4_across_vertical__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-300x360',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_4_across_vertical',
  );
  $export['image__grid_4_across_vertical__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_5_across__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-240x240',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_5_across',
  );
  $export['image__grid_5_across__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__grid_5_across_vertical__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'fallback_image_style' => 'grid-240x320',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => '12_columns',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'picture_mapping' => 'grid_5_across_vertical',
  );
  $export['image__grid_5_across_vertical__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  $export['image__preview__file_field_image'] = $file_display;

  return $export;
}

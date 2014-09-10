<?php
/**
 * @file
 * baseline_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseline_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function baseline_images_image_default_styles() {
  $styles = array();

  // Exported image style: 10_columns.
  $styles['10_columns'] = array(
    'name' => '10_columns',
    'label' => '10 Columns',
    'effects' => array(
      28 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      29 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 11_columns.
  $styles['11_columns'] = array(
    'name' => '11_columns',
    'label' => '11 Columns',
    'effects' => array(
      30 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      31 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1100,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 12_columns.
  $styles['12_columns'] = array(
    'name' => '12_columns',
    'label' => '12 Columns',
    'effects' => array(
      32 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      33 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 1_column.
  $styles['1_column'] = array(
    'name' => '1_column',
    'label' => '1 Column',
    'effects' => array(
      10 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2_columns.
  $styles['2_columns'] = array(
    'name' => '2_columns',
    'label' => '2 Columns',
    'effects' => array(
      12 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      13 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 3_columns.
  $styles['3_columns'] = array(
    'name' => '3_columns',
    'label' => '3 Columns',
    'effects' => array(
      14 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 4_columns.
  $styles['4_columns'] = array(
    'name' => '4_columns',
    'label' => '4 Columns',
    'effects' => array(
      16 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      17 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5_columns.
  $styles['5_columns'] = array(
    'name' => '5_columns',
    'label' => '5 Columns',
    'effects' => array(
      18 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      19 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 6_columns.
  $styles['6_columns'] = array(
    'name' => '6_columns',
    'label' => '6 Columns',
    'effects' => array(
      20 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      21 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 7_columns.
  $styles['7_columns'] = array(
    'name' => '7_columns',
    'label' => '7 Columns',
    'effects' => array(
      22 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      23 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 8_columns.
  $styles['8_columns'] = array(
    'name' => '8_columns',
    'label' => '8 Columns',
    'effects' => array(
      24 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      25 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 9_columns.
  $styles['9_columns'] = array(
    'name' => '9_columns',
    'label' => '9 Columns',
    'effects' => array(
      26 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => 1,
      ),
      27 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-1000x600.
  $styles['grid-1000x600'] = array(
    'name' => 'grid-1000x600',
    'label' => 'Grid-1000x600',
    'effects' => array(
      45 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 600,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-1200x720.
  $styles['grid-1200x720'] = array(
    'name' => 'grid-1200x720',
    'label' => 'Grid-1200x720',
    'effects' => array(
      44 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 720,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-120x120.
  $styles['grid-120x120'] = array(
    'name' => 'grid-120x120',
    'label' => 'Grid-120x120',
    'effects' => array(
      53 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-160x160.
  $styles['grid-160x160'] = array(
    'name' => 'grid-160x160',
    'label' => 'Grid-160x160',
    'effects' => array(
      54 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-200x200.
  $styles['grid-200x200'] = array(
    'name' => 'grid-200x200',
    'label' => 'Grid-200x200',
    'effects' => array(
      52 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-240x240.
  $styles['grid-240x240'] = array(
    'name' => 'grid-240x240',
    'label' => 'Grid-240x240',
    'effects' => array(
      51 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 240,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-300x200.
  $styles['grid-300x200'] = array(
    'name' => 'grid-300x200',
    'label' => 'Grid-300x200',
    'effects' => array(
      50 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-400x240.
  $styles['grid-400x240'] = array(
    'name' => 'grid-400x240',
    'label' => 'Grid-400x240',
    'effects' => array(
      49 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 240,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-500x300.
  $styles['grid-500x300'] = array(
    'name' => 'grid-500x300',
    'label' => 'Grid-500x300',
    'effects' => array(
      48 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 300,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-600x360.
  $styles['grid-600x360'] = array(
    'name' => 'grid-600x360',
    'label' => 'Grid-600x360',
    'effects' => array(
      47 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 360,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-800x480.
  $styles['grid-800x480'] = array(
    'name' => 'grid-800x480',
    'label' => 'Grid-800x480',
    'effects' => array(
      46 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 480,
          'maintain_size' => 1,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: huge.
  $styles['huge'] = array(
    'name' => 'huge',
    'label' => 'Huge',
    'effects' => array(
      37 => array(
        'label' => 'Quality',
        'help' => 'Define the image quality for JPEG manipulations. Ranges from 0 to 100. Higher values mean better image quality but bigger files.',
        'effect callback' => '_image_style_quality_apply',
        'form callback' => 'image_style_quality_style_form',
        'dimensions passthrough' => TRUE,
        'summary theme' => 'image_style_quality_summary',
        'module' => 'image_style_quality',
        'name' => 'image_style_quality',
        'data' => array(
          'quality' => 25,
        ),
        'weight' => -10,
      ),
      34 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => -9,
      ),
      35 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2880,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -8,
      ),
      36 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => -7,
      ),
    ),
  );

  return $styles;
}

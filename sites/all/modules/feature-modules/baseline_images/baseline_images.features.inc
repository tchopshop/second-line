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
    return array("version" => "2");
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

  // Exported image style: grid-1000x1240.
  $styles['grid-1000x1240'] = array(
    'name' => 'grid-1000x1240',
    'label' => 'grid-1000x1240',
    'effects' => array(
      75 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 1240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-1000x600.
  $styles['grid-1000x600'] = array(
    'name' => 'grid-1000x600',
    'label' => 'Grid-1000x600',
    'effects' => array(
      55 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 600,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-1200x1600.
  $styles['grid-1200x1600'] = array(
    'name' => 'grid-1200x1600',
    'label' => 'grid-1200x1600',
    'effects' => array(
      76 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 1600,
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
      56 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 720,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-120x120.
  $styles['grid-120x120'] = array(
    'name' => 'grid-120x120',
    'label' => 'Grid-120x120',
    'effects' => array(
      57 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-120x160.
  $styles['grid-120x160'] = array(
    'name' => 'grid-120x160',
    'label' => 'grid-120x160',
    'effects' => array(
      66 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 160,
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
      58 => array(
        'label' => 'Focal Point Crop',
        'help' => 'Crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'focal_point_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-160x200.
  $styles['grid-160x200'] = array(
    'name' => 'grid-160x200',
    'label' => 'grid-160x200',
    'effects' => array(
      67 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 200,
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
      59 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-200x260.
  $styles['grid-200x260'] = array(
    'name' => 'grid-200x260',
    'label' => 'grid-200x260',
    'effects' => array(
      68 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 260,
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
      60 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 240,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-240x320.
  $styles['grid-240x320'] = array(
    'name' => 'grid-240x320',
    'label' => 'grid-240x320',
    'effects' => array(
      69 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 320,
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
      61 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-300x360.
  $styles['grid-300x360'] = array(
    'name' => 'grid-300x360',
    'label' => 'grid-300x360',
    'effects' => array(
      70 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 360,
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
      62 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 240,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-400x480.
  $styles['grid-400x480'] = array(
    'name' => 'grid-400x480',
    'label' => 'grid-400x480',
    'effects' => array(
      71 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 480,
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
      63 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-500x640.
  $styles['grid-500x640'] = array(
    'name' => 'grid-500x640',
    'label' => 'grid-500x640',
    'effects' => array(
      72 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 640,
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
      64 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 360,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: grid-600x760.
  $styles['grid-600x760'] = array(
    'name' => 'grid-600x760',
    'label' => 'grid-600x760',
    'effects' => array(
      73 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 760,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-800x1000.
  $styles['grid-800x1000'] = array(
    'name' => 'grid-800x1000',
    'label' => 'grid-800x1000',
    'effects' => array(
      74 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 1000,
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
      65 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 480,
        ),
        'weight' => 2,
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

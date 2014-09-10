<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 3x33'),
    'category' => t('Baseline - 3 column'),
    'icon'     => 'base_three_3x33.png',
    'theme'    => 'base_three_3x33',
    'admin css' => 'base_three_3x33.admin.css',
    'regions' => array(
      'three_33_top'    => t('Top (conditional)'),
      'three_33_first'  => t('Left'),
      'three_33_second' => t('Center'),
      'three_33_third'  => t('Right'),
      'three_33_bottom' => t('Bottom (conditional)'),
    ),
);
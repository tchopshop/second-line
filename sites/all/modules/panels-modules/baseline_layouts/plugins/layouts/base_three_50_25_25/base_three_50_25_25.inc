<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 50/25/25'),
    'category' => t('Baseline - 3 column'),
    'icon'     => 'base_three_50_25_25.png',
    'theme'    => 'base_three_50_25_25',
    'admin css' => 'base_three_50_25_25.admin.css',
    'regions' => array(
      'three_50_25_25_top'    => t('Top (conditional)'),
      'three_50_25_25_first'  => t('Left'),
      'three_50_25_25_second' => t('Center'),
      'three_50_25_25_third'  => t('Right'),
      'three_50_25_25_bottom' => t('Bottom (conditional)'),
    ),
);
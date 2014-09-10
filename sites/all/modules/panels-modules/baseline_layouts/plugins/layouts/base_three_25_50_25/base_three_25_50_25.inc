<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 25/50/25'),
    'category' => t('Baseline - 3 column'),
    'icon'     => 'base_three_25_50_25.png',
    'theme'    => 'base_three_25_50_25',
    'admin css' => 'base_three_25_50_25.admin.css',
    'regions' => array(
      'three_25_50_25_top'    => t('Top (conditional)'),
      'three_25_50_25_first'  => t('Left'),
      'three_25_50_25_second' => t('Center'),
      'three_25_50_25_third'  => t('Right'),
      'three_25_50_25_bottom' => t('Bottom (conditional)'),
    ),
);
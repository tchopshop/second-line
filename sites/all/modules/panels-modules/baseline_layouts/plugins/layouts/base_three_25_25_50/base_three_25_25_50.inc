<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 25/25/50'),
    'category' => t('Baseline - 3 column'),
    'icon'     => 'base_three_25_25_50.png',
    'theme'    => 'base_three_25_25_50',
    'admin css' => 'base_three_25_25_50.admin.css',
    'regions' => array(
      'three_25_25_50_top'    => t('Top (conditional)'),
      'three_25_25_50_first'  => t('Left'),
      'three_25_25_50_second' => t('Center'),
      'three_25_25_50_third'  => t('Right'),
      'three_25_25_50_bottom' => t('Bottom (conditional)'),
    ),
);
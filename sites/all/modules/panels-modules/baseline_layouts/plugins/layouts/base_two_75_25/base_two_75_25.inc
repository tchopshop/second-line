<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('Baseline 75/25'),
    'category' => t('Baseline - 2 column'),
    'icon' => 'base_two_75_25.png',
    'theme' => 'base_two_75_25',
    'admin css' => 'base_two_75_25.admin.css',
    'regions' => array(
      'two_75_25_top'    => t('Top (conditional)'),
      'two_75_25_first'  => t('Left'),
      'two_75_25_second' => t('Right'),
      'two_75_25_bottom' => t('Bottom (conditional)'),
    ),
);
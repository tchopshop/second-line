<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('Baseline 25/75'),
    'category' => t('Baseline - 2 column'),
    'icon' => 'base_two_25_75.png',
    'theme' => 'base_two_25_75',
    'admin css' => 'base_two_25_75.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'two_25_75_top'    => t('Top (conditional)'),
      'two_25_75_first'  => t('Left'),
      'two_25_75_second' => t('Right'),
      'two_25_75_bottom' => t('Bottom (conditional)'),
    ),
);
<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 50/50'),
    'category' => t('Baseline - 2 column'),
    'icon'     => 'base_two_50.png',
    'theme'    => 'base_two_50',
    'admin css' => 'base_two_50.admin.css',
    'regions' => array(
      'two_50_top'    => t('Top (conditional)'),
      'two_50_first'  => t('Left'),
      'two_50_second' => t('Right'),
      'two_50_bottom' => t('Bottom (conditional)'),
    ),
);
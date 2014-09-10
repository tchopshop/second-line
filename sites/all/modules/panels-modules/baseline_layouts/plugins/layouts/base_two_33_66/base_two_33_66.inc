<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('Baseline 33/66'),
    'category' => t('Baseline - 2 column'),
    'icon' => 'base_two_33_66.png',
    'theme' => 'base_two_33_66',
    'admin css' => 'base_two_33_66.admin.css',
    'regions' => array(
      'two_33_66_top'    => t('Top (conditional)'),
      'two_33_66_first'  => t('Left'),
      'two_33_66_second' => t('Right'),
      'two_33_66_bottom' => t('Bottom (conditional)'),
    ),
);
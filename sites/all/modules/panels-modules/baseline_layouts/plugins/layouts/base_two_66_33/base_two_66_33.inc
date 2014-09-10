<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('Baseline 66/33'),
    'category' => t('Baseline - 2 column'),
    'icon' => 'base_two_66_33.png',
    'theme' => 'base_two_66_33',
    'admin css' => 'base_two_66_33.admin.css',
    'regions' => array(
      'two_66_33_top'    => t('Top (conditional)'),
      'two_66_33_first'  => t('Left'),
      'two_66_33_second' => t('Right'),
      'two_66_33_bottom' => t('Bottom (conditional)'),
    ),
);
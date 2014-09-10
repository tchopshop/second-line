<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline Inset right'),
    'category' => t('Baseline - Inset'),
    'icon'     => 'base_three_inset_right.png',
    'theme'    => 'base_three_inset_right',
    'admin css' => 'base_three_inset_right.admin.css',
    'regions' => array(
      'three_inset_right_sidebar' => t('Sidebar'),
      'three_inset_right_top'     => t('Top (conditional)'),
      'three_inset_right_middle'  => t('Middle'),
      'three_inset_right_inset'   => t('Inset'),
      'three_inset_right_bottom'  => t('Bottom (conditional)'),
    ),
);
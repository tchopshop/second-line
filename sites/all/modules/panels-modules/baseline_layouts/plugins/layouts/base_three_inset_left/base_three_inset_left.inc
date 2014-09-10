<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('Baseline Inset left'),
    'category' => t('Baseline - Inset'),
    'icon' => 'base_three_inset_left.png',
    'theme' => 'base_three_inset_left',
    'admin css' => 'base_three_inset_left.admin.css',
    'regions' => array(
      'three_inset_left_sidebar' => t('Sidebar'),
      'three_inset_left_top'     => t('Top (conditional)'),
      'three_inset_left_middle'  => t('Middle'),
      'three_inset_left_inset'   => t('Inset'),
      'three_inset_left_bottom'  => t('Bottom (conditional)'),
    ),
);
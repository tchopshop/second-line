<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 4x25'),
    'category' => t('Baseline - 4,5,6 column'),
    'icon'     => 'base_four_4x25.png',
    'theme'    => 'base_four_4x25',
    'admin css' => 'base_four_4x25.admin.css',
    'regions' => array(
      'four_first'  => t('Column 1'),
      'four_second' => t('Column 2'),
      'four_third'  => t('Column 3'),
      'four_fourth' => t('Column 4'),
    ),
);
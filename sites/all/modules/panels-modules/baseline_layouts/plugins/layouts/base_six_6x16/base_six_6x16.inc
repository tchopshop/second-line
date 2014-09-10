<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('Baseline 6x16'),
    'category' => t('Baseline - 4,5,6 column'),
    'icon'     => 'base_six_6x16.png',
    'theme'    => 'base_six_6x16',
    'admin css' => 'base_six_6x16.admin.css',
    'regions' => array(
      'six_first'  => t('Column 1'),
      'six_second' => t('Column 2'),
      'six_third'  => t('Column 3'),
      'six_fourth' => t('Column 4'),
      'six_fifth'  => t('Column 5'),
      'six_sixth'  => t('Column 6'),
    ),
);
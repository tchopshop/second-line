<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('One column'),
    'category' => t('Baseline - 1 Column Full Width'),
    'icon'     => 'base_one_fullwidth.png',
    'theme'    => 'base_one_fullwidth',
    'admin css' => 'base_one_fullwidth.admin.css',
    'regions' => array(
      'one_main'  => t('Main'),
    ),
);
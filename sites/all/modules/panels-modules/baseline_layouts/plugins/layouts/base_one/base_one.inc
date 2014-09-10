<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title'    => t('One column'),
    'category' => t('Baseline - 1 Column'),
    'icon'     => 'base_one.png',
    'theme'    => 'base_one',
    'admin css' => 'base_one.admin.css',
    'regions' => array(
      'one_main'  => t('Main'),
    ),
);
<?php

$plugin = array(
    'title'    => t('Baseline 5x20'),
    'category' => t('Baseline - 4,5,6 column'),
    'icon'     => 'base_five_5x20.png', // Used in Panels Admin only. AT Core uses a CSS sprite for the icons in theme settings.
    'theme'    => 'base_five_5x20',
    'admin css' => 'base_five_5x20.admin.css', // This holds a basic layout for Panels Admin and the CSS for theme settings sprite. Sprite icons must be 40px by 40px.
    'regions' => array(
      'five_first'  => t('Column 1'),
      'five_second' => t('Column 2'),
      'five_third'  => t('Column 3'),
      'five_fourth' => t('Column 4'),
      'five_fifth'  => t('Column 5'),
    ),
);
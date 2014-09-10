<?php
// Plugin definition
$plugin = array(
  'title' => t('Email Layout 50-50'),
  'icon' => 'email-50-50.png',
  'category' => t('Email Layouts'),
  'theme' => 'email_50_50',
  'regions' => array(
    'header' => t('Header'),
    'column1' => t('First Column'),
    'column2' => t('Second Column'),
    'footer' => t('Footer'),
  ),
);
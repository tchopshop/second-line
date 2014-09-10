<?php
// Plugin definition
$plugin = array(
  'title' => t('1 Email Column'),
  'icon' => 'email-1col.png',
  'category' => t('Email Layouts'),
  'admin css' => 'email_1_col.admin.css',
  'theme' => 'email_1col',
  'regions' => array(
      'header'    => t('Header (conditional)'),
      'content'  => t('Content'),
      'footer' => t('Footer (conditional)'),
  ),
);

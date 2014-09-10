<?php
/**
 * @file
 * baseline_newsletter.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function baseline_newsletter_filter_default_formats() {
  $formats = array();

  // Exported format: Email.
  $formats['email'] = array(
    'format' => 'email',
    'name' => 'Email',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_emogrifier' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'transliteration' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'no_known_transliteration' => '?',
        ),
      ),
      'filter_url' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'pathologic' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(
          'local_paths' => '/',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}

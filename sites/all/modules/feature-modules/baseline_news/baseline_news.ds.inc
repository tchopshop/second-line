<?php
/**
 * @file
 * baseline_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function baseline_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_post_date_panopoly_day',
    ),
  );
  $export['node|news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'comment_count' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:13:"comment_count";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'view_count' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:10:"view_count";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => 'read-more',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'read-more',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'author',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_panopoly_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_subhead' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h5',
          'fi-cl' => 'subhead',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_teaser_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'figure',
          'ow-cl' => 'media',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news|featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_panopoly_day',
    ),
  );
  $export['node|news|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_panopoly_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'date',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news|list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'comment_count' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:13:"comment_count";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'view_count' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:10:"view_count";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'title',
      ),
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'read-more',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'author',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'ds_post_date_panopoly_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_subhead' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h5',
          'fi-cl' => 'subhead',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_teaser_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'figure',
          'ow-cl' => 'media',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function baseline_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subhead',
        1 => 'group_news_info',
        2 => 'field_teaser',
        3 => 'field_paragraphs',
        4 => 'author',
        5 => 'field_webform',
        6 => 'post_date',
        7 => 'comments',
        8 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_subhead' => 'ds_content',
      'group_news_info' => 'ds_content',
      'field_teaser' => 'ds_content',
      'field_paragraphs' => 'ds_content',
      'author' => 'ds_content',
      'field_webform' => 'ds_content',
      'post_date' => 'ds_content',
      'comments' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'one_main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'ds_content' => array(
        0 => 'field_teaser_image',
        1 => 'group_info',
        2 => 'post_date',
        3 => 'author',
        4 => 'field_tags',
        5 => 'comment_count',
        6 => 'field_news_type',
        7 => 'view_count',
        8 => 'title',
        9 => 'field_subhead',
        10 => 'field_teaser',
        11 => 'node_link',
        12 => 'group_meta',
      ),
    ),
    'fields' => array(
      'field_teaser_image' => 'ds_content',
      'group_info' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'field_tags' => 'ds_content',
      'comment_count' => 'ds_content',
      'field_news_type' => 'ds_content',
      'view_count' => 'ds_content',
      'title' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_teaser' => 'ds_content',
      'node_link' => 'ds_content',
      'group_meta' => 'ds_content',
    ),
  );
  $export['node|news|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subhead',
        1 => 'group_meta',
        2 => 'field_teaser',
        3 => 'post_date',
        4 => 'field_tags',
        5 => 'field_paragraphs',
        6 => 'comment_count_entity_view_1',
      ),
    ),
    'fields' => array(
      'field_subhead' => 'ds_content',
      'group_meta' => 'ds_content',
      'field_teaser' => 'ds_content',
      'post_date' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_paragraphs' => 'ds_content',
      'comment_count_entity_view_1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'ds_content' => array(
        0 => 'field_teaser_image',
        1 => 'group_news_info',
        2 => 'field_news_type',
        3 => 'title',
        4 => 'field_subhead',
        5 => 'field_teaser',
        6 => 'node_link',
        7 => 'group_meta',
        8 => 'post_date',
        9 => 'author',
        10 => 'field_tags',
        11 => 'comment_count',
        12 => 'view_count',
      ),
    ),
    'fields' => array(
      'field_teaser_image' => 'ds_content',
      'group_news_info' => 'ds_content',
      'field_news_type' => 'ds_content',
      'title' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_teaser' => 'ds_content',
      'node_link' => 'ds_content',
      'group_meta' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'field_tags' => 'ds_content',
      'comment_count' => 'ds_content',
      'view_count' => 'ds_content',
    ),
  );
  $export['node|news|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function baseline_news_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured';
  $ds_view_mode->label = 'Featured';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['featured'] = $ds_view_mode;

  return $export;
}

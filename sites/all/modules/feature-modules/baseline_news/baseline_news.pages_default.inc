<?php
/**
 * @file
 * baseline_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function baseline_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'base_two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '87fde0c5-6b6e-418f-bc1b-0e998d9afbab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d8208afd-3895-4e7c-bb2b-8e0b49770782';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-featured';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'path' => '',
      'exposed' => array(
        'status' => '1',
        'type_op' => 'in',
        'type' => array(
          'news' => 'news',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'featured',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8208afd-3895-4e7c-bb2b-8e0b49770782';
    $display->content['new-d8208afd-3895-4e7c-bb2b-8e0b49770782'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-d8208afd-3895-4e7c-bb2b-8e0b49770782';
    $pane = new stdClass();
    $pane->pid = 'new-6afbb5aa-b824-46f3-828c-581df3997fde';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-teasers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'exposed' => array(
        'status' => '1',
        'type_op' => 'in',
        'type' => array(
          'news' => 'news',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6afbb5aa-b824-46f3-828c-581df3997fde';
    $display->content['new-6afbb5aa-b824-46f3-828c-581df3997fde'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-6afbb5aa-b824-46f3-828c-581df3997fde';
    $pane = new stdClass();
    $pane->pid = 'new-f1efb822-5f44-470c-a786-2ddbdfaa5c24';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-month_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'path' => 'archive',
      'exposed' => array(
        'status' => '1',
        'type' => array(
          'news' => 'news',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Monthly Archive',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f1efb822-5f44-470c-a786-2ddbdfaa5c24';
    $display->content['new-f1efb822-5f44-470c-a786-2ddbdfaa5c24'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-f1efb822-5f44-470c-a786-2ddbdfaa5c24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}

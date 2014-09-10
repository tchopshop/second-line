<?php
/**
 * @file
 * baseline_newsletter.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function baseline_newsletter_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Newsletter',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'simplenews' => 'simplenews',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => 'site_template_panel_context_7',
  );
  $display = new panels_display();
  $display->layout = 'base_one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c050962d-8b0e-402a-a776-2a4ffd1ca951';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10daf7cc-a429-4c34-9c1b-186a161c087e';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'email_html',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10daf7cc-a429-4c34-9c1b-186a161c087e';
    $display->content['new-10daf7cc-a429-4c34-9c1b-186a161c087e'] = $pane;
    $display->panels['one_main'][0] = 'new-10daf7cc-a429-4c34-9c1b-186a161c087e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_7';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Email Template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'simplenews' => 'simplenews',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'baseline_email_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'content' => NULL,
      'highlighted' => NULL,
      'content_aside' => NULL,
      'secondary_content' => NULL,
      'tertiary_content' => NULL,
      'footer' => NULL,
      'leaderboard' => NULL,
      'header' => NULL,
      'menu_bar' => NULL,
      'help' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '18c5ee37-89a4-4092-90df-b1895686cafe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe5e9446-bb42-4ab6-8f5b-a38c0fac60c0';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe5e9446-bb42-4ab6-8f5b-a38c0fac60c0';
    $display->content['new-fe5e9446-bb42-4ab6-8f5b-a38c0fac60c0'] = $pane;
    $display->panels['content'][0] = 'new-fe5e9446-bb42-4ab6-8f5b-a38c0fac60c0';
    $pane = new stdClass();
    $pane->pid = 'new-a7659b2e-833f-47ba-84c1-c2175df7ab89';
    $pane->panel = 'header';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7659b2e-833f-47ba-84c1-c2175df7ab89';
    $display->content['new-a7659b2e-833f-47ba-84c1-c2175df7ab89'] = $pane;
    $display->panels['header'][0] = 'new-a7659b2e-833f-47ba-84c1-c2175df7ab89';
    $pane = new stdClass();
    $pane->pid = 'new-6ee530c6-48f0-48af-9a2b-b33e0b517e0d';
    $pane->panel = 'help';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ee530c6-48f0-48af-9a2b-b33e0b517e0d';
    $display->content['new-6ee530c6-48f0-48af-9a2b-b33e0b517e0d'] = $pane;
    $display->panels['help'][0] = 'new-6ee530c6-48f0-48af-9a2b-b33e0b517e0d';
    $pane = new stdClass();
    $pane->pid = 'new-37293c6b-0e0d-4a8d-b3a3-49adfbfd50d7';
    $pane->panel = 'leaderboard';
    $pane->type = 'menu_tree';
    $pane->subtype = 'management';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'management',
      'parent_mlid' => 1,
      'parent' => 'management:1',
      'title_link' => 0,
      'admin_title' => '',
      'include_parent' => 0,
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37293c6b-0e0d-4a8d-b3a3-49adfbfd50d7';
    $display->content['new-37293c6b-0e0d-4a8d-b3a3-49adfbfd50d7'] = $pane;
    $display->panels['leaderboard'][0] = 'new-37293c6b-0e0d-4a8d-b3a3-49adfbfd50d7';
    $pane = new stdClass();
    $pane->pid = 'new-4870e0e1-248a-4c8a-84f1-13a9c3c9f9b9';
    $pane->panel = 'menu_bar';
    $pane->type = 'block';
    $pane->subtype = 'flexnav-flexnav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4870e0e1-248a-4c8a-84f1-13a9c3c9f9b9';
    $display->content['new-4870e0e1-248a-4c8a-84f1-13a9c3c9f9b9'] = $pane;
    $display->panels['menu_bar'][0] = 'new-4870e0e1-248a-4c8a-84f1-13a9c3c9f9b9';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-fe5e9446-bb42-4ab6-8f5b-a38c0fac60c0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_7'] = $handler;

  return $export;
}

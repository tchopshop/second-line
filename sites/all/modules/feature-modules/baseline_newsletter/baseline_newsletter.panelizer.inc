<?php
/**
 * @file
 * baseline_newsletter.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function baseline_newsletter_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:simplenews:default:email_html';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'simplenews';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '.panel {
  background: #f2f2f2;border: 1px solid #d9d9d9;padding: 10px !important;
}
';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'email_html';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H1';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'email_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8387fd24-00ca-479a-91fa-80a53f9a50dc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60ce92c4-3204-4426-87a7-4852a70faa86';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email_content_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => array(),
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
    $pane->uuid = '60ce92c4-3204-4426-87a7-4852a70faa86';
    $display->content['new-60ce92c4-3204-4426-87a7-4852a70faa86'] = $pane;
    $display->panels['content'][0] = 'new-60ce92c4-3204-4426-87a7-4852a70faa86';
    $pane = new stdClass();
    $pane->pid = 'new-b671265d-be2c-4e87-b2c7-4ad3bd344e86';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email_sidebar_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b671265d-be2c-4e87-b2c7-4ad3bd344e86';
    $display->content['new-b671265d-be2c-4e87-b2c7-4ad3bd344e86'] = $pane;
    $display->panels['content'][1] = 'new-b671265d-be2c-4e87-b2c7-4ad3bd344e86';
    $pane = new stdClass();
    $pane->pid = 'new-3ec82673-c311-4cf7-bb12-d09caa801322';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email_footer_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => array(),
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
    $pane->uuid = '3ec82673-c311-4cf7-bb12-d09caa801322';
    $display->content['new-3ec82673-c311-4cf7-bb12-d09caa801322'] = $pane;
    $display->panels['footer'][0] = 'new-3ec82673-c311-4cf7-bb12-d09caa801322';
    $pane = new stdClass();
    $pane->pid = 'new-dabbef9e-7004-4d4a-879a-8b5572cfbbe6';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h1',
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'panel',
      'css_class' => 'twelve columns',
      'template_suggestion' => 'newsletter',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dabbef9e-7004-4d4a-879a-8b5572cfbbe6';
    $display->content['new-dabbef9e-7004-4d4a-879a-8b5572cfbbe6'] = $pane;
    $display->panels['header'][0] = 'new-dabbef9e-7004-4d4a-879a-8b5572cfbbe6';
    $pane = new stdClass();
    $pane->pid = 'new-d4a9c8ac-bd34-41bb-b423-c330b8d46ab7';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'three sub-columns',
      'css_class' => 'twelve columns',
      'template_suggestion' => 'newsletter',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4a9c8ac-bd34-41bb-b423-c330b8d46ab7';
    $display->content['new-d4a9c8ac-bd34-41bb-b423-c330b8d46ab7'] = $pane;
    $display->panels['header'][1] = 'new-d4a9c8ac-bd34-41bb-b423-c330b8d46ab7';
    $pane = new stdClass();
    $pane->pid = 'new-bc6ad553-a1a3-4da9-9a62-88b45d935752';
    $pane->panel = 'header';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nine sub-columns last',
      'css_class' => 'twelve columns',
      'template_suggestion' => 'newsletter',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bc6ad553-a1a3-4da9-9a62-88b45d935752';
    $display->content['new-bc6ad553-a1a3-4da9-9a62-88b45d935752'] = $pane;
    $display->panels['header'][2] = 'new-bc6ad553-a1a3-4da9-9a62-88b45d935752';
    $pane = new stdClass();
    $pane->pid = 'new-09e5750e-7438-4431-917d-730272da8bd9';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email_header_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '09e5750e-7438-4431-917d-730272da8bd9';
    $display->content['new-09e5750e-7438-4431-917d-730272da8bd9'] = $pane;
    $display->panels['header'][3] = 'new-09e5750e-7438-4431-917d-730272da8bd9';
    $pane = new stdClass();
    $pane->pid = 'new-d216ead9-c7ab-4ad0-9c0b-20422ffc40b1';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:simplenews_newsletter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd216ead9-c7ab-4ad0-9c0b-20422ffc40b1';
    $display->content['new-d216ead9-c7ab-4ad0-9c0b-20422ffc40b1'] = $pane;
    $display->panels['header'][4] = 'new-d216ead9-c7ab-4ad0-9c0b-20422ffc40b1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-dabbef9e-7004-4d4a-879a-8b5572cfbbe6';
  $panelizer->display = $display;
  $export['node:simplenews:default:email_html'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:simplenews:two_column_66_33:email_html';
  $panelizer->title = 'Two Column 66-33';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'simplenews';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'email_html';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'caef2dc7-79b4-4bb2-b113-7e95b21a4965';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ddd5a6df-5428-47c9-a2e0-27fb2156de22';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ddd5a6df-5428-47c9-a2e0-27fb2156de22';
    $display->content['new-ddd5a6df-5428-47c9-a2e0-27fb2156de22'] = $pane;
    $display->panels['center'][0] = 'new-ddd5a6df-5428-47c9-a2e0-27fb2156de22';
    $pane = new stdClass();
    $pane->pid = 'new-1590e891-1e52-4a69-9347-955654d760a9';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:simplenews_newsletter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1590e891-1e52-4a69-9347-955654d760a9';
    $display->content['new-1590e891-1e52-4a69-9347-955654d760a9'] = $pane;
    $display->panels['center'][1] = 'new-1590e891-1e52-4a69-9347-955654d760a9';
    $pane = new stdClass();
    $pane->pid = 'new-0a2dee69-fb88-41af-8a4c-71a18377b63f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:simplenews_issue_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0a2dee69-fb88-41af-8a4c-71a18377b63f';
    $display->content['new-0a2dee69-fb88-41af-8a4c-71a18377b63f'] = $pane;
    $display->panels['center'][2] = 'new-0a2dee69-fb88-41af-8a4c-71a18377b63f';
    $pane = new stdClass();
    $pane->pid = 'new-d5f1e8a3-4cf0-4f52-aa9d-520745db221d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:simplenews_sent_count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd5f1e8a3-4cf0-4f52-aa9d-520745db221d';
    $display->content['new-d5f1e8a3-4cf0-4f52-aa9d-520745db221d'] = $pane;
    $display->panels['center'][3] = 'new-d5f1e8a3-4cf0-4f52-aa9d-520745db221d';
    $pane = new stdClass();
    $pane->pid = 'new-d99d7934-eeb6-4e61-82e4-10ac24d015e0';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:simplenews_handler';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd99d7934-eeb6-4e61-82e4-10ac24d015e0';
    $display->content['new-d99d7934-eeb6-4e61-82e4-10ac24d015e0'] = $pane;
    $display->panels['center'][4] = 'new-d99d7934-eeb6-4e61-82e4-10ac24d015e0';
    $pane = new stdClass();
    $pane->pid = 'new-24128d57-924e-4d01-a13d-00785fd8816d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:simplenews_handler_settings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '24128d57-924e-4d01-a13d-00785fd8816d';
    $display->content['new-24128d57-924e-4d01-a13d-00785fd8816d'] = $pane;
    $display->panels['center'][5] = 'new-24128d57-924e-4d01-a13d-00785fd8816d';
    $pane = new stdClass();
    $pane->pid = 'new-1604c898-4b1c-4a9b-b996-7dacdcad7779';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'email_html',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1604c898-4b1c-4a9b-b996-7dacdcad7779';
    $display->content['new-1604c898-4b1c-4a9b-b996-7dacdcad7779'] = $pane;
    $display->panels['center'][6] = 'new-1604c898-4b1c-4a9b-b996-7dacdcad7779';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ddd5a6df-5428-47c9-a2e0-27fb2156de22';
  $panelizer->display = $display;
  $export['node:simplenews:two_column_66_33:email_html'] = $panelizer;

  return $export;
}

<?php
/**
 * @file
 * baseline_core.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function baseline_core_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = 'b813f66b-5884-48be-b7c5-d9b97381d8ff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-33085b3e-d266-422a-bff3-a7c02f459d3d';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
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
    $pane->uuid = '33085b3e-d266-422a-bff3-a7c02f459d3d';
    $display->content['new-33085b3e-d266-422a-bff3-a7c02f459d3d'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-33085b3e-d266-422a-bff3-a7c02f459d3d';
    $pane = new stdClass();
    $pane->pid = 'new-09df02b6-15d2-4f9d-877c-288e3172d7eb';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sidebar';
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
    $pane->uuid = '09df02b6-15d2-4f9d-877c-288e3172d7eb';
    $display->content['new-09df02b6-15d2-4f9d-877c-288e3172d7eb'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-09df02b6-15d2-4f9d-877c-288e3172d7eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}

<?php
/**
 * @file
 * baseline_animation.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function baseline_animation_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:clone_of_default';
  $panelizer->title = 'One Column';
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
  $display->layout = 'base_one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b813f66b-5884-48be-b7c5-d9b97381d8ff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-33085b3e-d266-422a-bff3-a7c02f459d3d';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h1',
          'title_hide' => 1,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33085b3e-d266-422a-bff3-a7c02f459d3d';
    $display->content['new-33085b3e-d266-422a-bff3-a7c02f459d3d'] = $pane;
    $display->panels['one_main'][0] = 'new-33085b3e-d266-422a-bff3-a7c02f459d3d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:clone_of_default'] = $panelizer;

  return $export;
}

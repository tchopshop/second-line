<?php
/**
 * @file
 * baseline_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function baseline_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
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
  $display->uuid = 'c34643f0-98e8-4af3-94b5-ed05dae47437';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1990b73-a413-43dc-b331-facfd577d989';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
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
    $pane->uuid = 'c1990b73-a413-43dc-b331-facfd577d989';
    $display->content['new-c1990b73-a413-43dc-b331-facfd577d989'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-c1990b73-a413-43dc-b331-facfd577d989';
    $pane = new stdClass();
    $pane->pid = 'new-db8d9da9-0e8e-44f5-94c9-db540bd45a93';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'links' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db8d9da9-0e8e-44f5-94c9-db540bd45a93';
    $display->content['new-db8d9da9-0e8e-44f5-94c9-db540bd45a93'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-db8d9da9-0e8e-44f5-94c9-db540bd45a93';
    $pane = new stdClass();
    $pane->pid = 'new-32c5ba5d-c12a-4b69-8065-3b7a135f7373';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '32c5ba5d-c12a-4b69-8065-3b7a135f7373';
    $display->content['new-32c5ba5d-c12a-4b69-8065-3b7a135f7373'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-32c5ba5d-c12a-4b69-8065-3b7a135f7373';
    $pane = new stdClass();
    $pane->pid = 'new-13177f94-bae8-4916-ba4a-483fdf44581a';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-author_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_user_image' => 1,
        'name' => 1,
        'field_user_bio' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13177f94-bae8-4916-ba4a-483fdf44581a';
    $display->content['new-13177f94-bae8-4916-ba4a-483fdf44581a'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-13177f94-bae8-4916-ba4a-483fdf44581a';
    $pane = new stdClass();
    $pane->pid = 'new-4e416f87-739e-4bc2-8e35-66a6fc3fbb40';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-by_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
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
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'view_mode' => 'list',
      'widget_title' => 'More by this author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4e416f87-739e-4bc2-8e35-66a6fc3fbb40';
    $display->content['new-4e416f87-739e-4bc2-8e35-66a6fc3fbb40'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-4e416f87-739e-4bc2-8e35-66a6fc3fbb40';
    $pane = new stdClass();
    $pane->pid = 'new-05006ea5-9c78-4394-ae4d-1134b60f5e64';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_content-related_content_not_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'exposed' => array(
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'view_mode' => 'list',
      'widget_title' => 'Related Content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '05006ea5-9c78-4394-ae4d-1134b60f5e64';
    $display->content['new-05006ea5-9c78-4394-ae4d-1134b60f5e64'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-05006ea5-9c78-4394-ae4d-1134b60f5e64';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
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
  $display->uuid = '6aadadaa-c69a-4249-8c94-2871d4df58f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f5d89d9-3d5b-4d7c-9ef0-157813061f87';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f5d89d9-3d5b-4d7c-9ef0-157813061f87';
    $display->content['new-9f5d89d9-3d5b-4d7c-9ef0-157813061f87'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-9f5d89d9-3d5b-4d7c-9ef0-157813061f87';
    $pane = new stdClass();
    $pane->pid = 'new-b155d6b6-faa0-4d03-93dd-188204a19e89';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b155d6b6-faa0-4d03-93dd-188204a19e89';
    $display->content['new-b155d6b6-faa0-4d03-93dd-188204a19e89'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-b155d6b6-faa0-4d03-93dd-188204a19e89';
    $pane = new stdClass();
    $pane->pid = 'new-b7921c71-705d-435e-8812-881e5e7bc747';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b7921c71-705d-435e-8812-881e5e7bc747';
    $display->content['new-b7921c71-705d-435e-8812-881e5e7bc747'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-b7921c71-705d-435e-8812-881e5e7bc747';
    $pane = new stdClass();
    $pane->pid = 'new-5cb96ee7-f795-4df2-8a8e-5230e4153cdb';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ds_taxonomy_separator',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'taxonomy_term_link' => TRUE,
        'taxonomy_term_separator' => ', ',
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5cb96ee7-f795-4df2-8a8e-5230e4153cdb';
    $display->content['new-5cb96ee7-f795-4df2-8a8e-5230e4153cdb'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-5cb96ee7-f795-4df2-8a8e-5230e4153cdb';
    $pane = new stdClass();
    $pane->pid = 'new-7c8fce06-5263-48f1-9980-c6bb41c560e2';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c8fce06-5263-48f1-9980-c6bb41c560e2';
    $display->content['new-7c8fce06-5263-48f1-9980-c6bb41c560e2'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-7c8fce06-5263-48f1-9980-c6bb41c560e2';
    $pane = new stdClass();
    $pane->pid = 'new-aec4b813-ded8-4e92-9785-82d510676870';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aec4b813-ded8-4e92-9785-82d510676870';
    $display->content['new-aec4b813-ded8-4e92-9785-82d510676870'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-aec4b813-ded8-4e92-9785-82d510676870';
    $pane = new stdClass();
    $pane->pid = 'new-8dfb6c8c-1fda-429e-9dba-a8c639391e13';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subhead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8dfb6c8c-1fda-429e-9dba-a8c639391e13';
    $display->content['new-8dfb6c8c-1fda-429e-9dba-a8c639391e13'] = $pane;
    $display->panels['two_66_33_top'][1] = 'new-8dfb6c8c-1fda-429e-9dba-a8c639391e13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8dfb6c8c-1fda-429e-9dba-a8c639391e13';
  $panelizer->display = $display;
  $export['node:news:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:single_column';
  $panelizer->title = 'Single column';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
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
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cceae79b-ab20-44bf-9df3-60c1f5c26cec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e46fb14d-3233-4aa8-850c-3d4aa238d958';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subhead';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e46fb14d-3233-4aa8-850c-3d4aa238d958';
    $display->content['new-e46fb14d-3233-4aa8-850c-3d4aa238d958'] = $pane;
    $display->panels['one_main'][0] = 'new-e46fb14d-3233-4aa8-850c-3d4aa238d958';
    $pane = new stdClass();
    $pane->pid = 'new-b5783eb1-5a72-422b-affd-a7a2b5d86ec8';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ds_taxonomy_separator',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'taxonomy_term_link' => TRUE,
        'taxonomy_term_separator' => ', ',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b5783eb1-5a72-422b-affd-a7a2b5d86ec8';
    $display->content['new-b5783eb1-5a72-422b-affd-a7a2b5d86ec8'] = $pane;
    $display->panels['one_main'][1] = 'new-b5783eb1-5a72-422b-affd-a7a2b5d86ec8';
    $pane = new stdClass();
    $pane->pid = 'new-d1647062-5e3d-4f1c-82a1-da20b3df5449';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd1647062-5e3d-4f1c-82a1-da20b3df5449';
    $display->content['new-d1647062-5e3d-4f1c-82a1-da20b3df5449'] = $pane;
    $display->panels['one_main'][2] = 'new-d1647062-5e3d-4f1c-82a1-da20b3df5449';
    $pane = new stdClass();
    $pane->pid = 'new-9dcadb48-8c38-4f8d-b646-f9f4d241f910';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9dcadb48-8c38-4f8d-b646-f9f4d241f910';
    $display->content['new-9dcadb48-8c38-4f8d-b646-f9f4d241f910'] = $pane;
    $display->panels['one_main'][3] = 'new-9dcadb48-8c38-4f8d-b646-f9f4d241f910';
    $pane = new stdClass();
    $pane->pid = 'new-9665d43c-0f95-4a82-ae06-14788698db85';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '9665d43c-0f95-4a82-ae06-14788698db85';
    $display->content['new-9665d43c-0f95-4a82-ae06-14788698db85'] = $pane;
    $display->panels['one_main'][4] = 'new-9665d43c-0f95-4a82-ae06-14788698db85';
    $pane = new stdClass();
    $pane->pid = 'new-7bf98e2c-1b21-439c-9c83-9aa5ec8a100c';
    $pane->panel = 'one_main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7bf98e2c-1b21-439c-9c83-9aa5ec8a100c';
    $display->content['new-7bf98e2c-1b21-439c-9c83-9aa5ec8a100c'] = $pane;
    $display->panels['one_main'][5] = 'new-7bf98e2c-1b21-439c-9c83-9aa5ec8a100c';
    $pane = new stdClass();
    $pane->pid = 'new-ce95d22c-3fc6-4343-9973-04c6f0bf4b61';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'links' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ce95d22c-3fc6-4343-9973-04c6f0bf4b61';
    $display->content['new-ce95d22c-3fc6-4343-9973-04c6f0bf4b61'] = $pane;
    $display->panels['one_main'][6] = 'new-ce95d22c-3fc6-4343-9973-04c6f0bf4b61';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e46fb14d-3233-4aa8-850c-3d4aa238d958';
  $panelizer->display = $display;
  $export['node:news:single_column'] = $panelizer;

  return $export;
}

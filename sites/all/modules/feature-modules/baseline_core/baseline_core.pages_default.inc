<?php
/**
 * @file
 * baseline_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function baseline_core_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Main Edit Page',
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
  $display->layout = 'base_two_75_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'collapsible-panels',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'two_66_33_bottom' => NULL,
      'two_75_25_second' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'collapsible-panels',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'two_75_25_top' => NULL,
      'two_75_25_first' => NULL,
      'two_75_25_bottom' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'clean_element',
    ),
    'two_75_25_second' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f5d1b539-29a9-4268-a70e-f46c6d8d3be7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1fbfb76-b669-41d2-976b-56594a46799a';
    $pane->panel = 'two_75_25_first';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'c1fbfb76-b669-41d2-976b-56594a46799a';
    $display->content['new-c1fbfb76-b669-41d2-976b-56594a46799a'] = $pane;
    $display->panels['two_75_25_first'][0] = 'new-c1fbfb76-b669-41d2-976b-56594a46799a';
    $pane = new stdClass();
    $pane->pid = 'new-32d1f697-fbd4-4d7c-83ad-c858e6ec42ed';
    $pane->panel = 'two_75_25_first';
    $pane->type = 'node_form_log';
    $pane->subtype = 'node_form_log';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form-PKis1qUg50vUKYv20TQAkQyKb2t0pvCISVeTASFWrvU',
      'form_token' => 'X1_mP00SRZBPBhwUxnCqYYlos5w4A1HKIte8U9JxHH4',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '32d1f697-fbd4-4d7c-83ad-c858e6ec42ed';
    $display->content['new-32d1f697-fbd4-4d7c-83ad-c858e6ec42ed'] = $pane;
    $display->panels['two_75_25_first'][1] = 'new-32d1f697-fbd4-4d7c-83ad-c858e6ec42ed';
    $pane = new stdClass();
    $pane->pid = 'new-a7c6fdc5-63a6-457f-afd3-f56e956fdfef';
    $pane->panel = 'two_75_25_first';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = 'a7c6fdc5-63a6-457f-afd3-f56e956fdfef';
    $display->content['new-a7c6fdc5-63a6-457f-afd3-f56e956fdfef'] = $pane;
    $display->panels['two_75_25_first'][2] = 'new-a7c6fdc5-63a6-457f-afd3-f56e956fdfef';
    $pane = new stdClass();
    $pane->pid = 'new-7d7c2c53-72c8-4bf3-a0ee-2dabce2f18f6';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '7d7c2c53-72c8-4bf3-a0ee-2dabce2f18f6';
    $display->content['new-7d7c2c53-72c8-4bf3-a0ee-2dabce2f18f6'] = $pane;
    $display->panels['two_75_25_second'][0] = 'new-7d7c2c53-72c8-4bf3-a0ee-2dabce2f18f6';
    $pane = new stdClass();
    $pane->pid = 'new-cf73b44b-0272-4814-a439-e123f1e89604';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Featured',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
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
    $pane->uuid = 'cf73b44b-0272-4814-a439-e123f1e89604';
    $display->content['new-cf73b44b-0272-4814-a439-e123f1e89604'] = $pane;
    $display->panels['two_75_25_second'][1] = 'new-cf73b44b-0272-4814-a439-e123f1e89604';
    $pane = new stdClass();
    $pane->pid = 'new-1e9d977e-c8bf-466e-8478-8fd987f741bb';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
        'collapsed' => 1,
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
    $pane->uuid = '1e9d977e-c8bf-466e-8478-8fd987f741bb';
    $display->content['new-1e9d977e-c8bf-466e-8478-8fd987f741bb'] = $pane;
    $display->panels['two_75_25_second'][2] = 'new-1e9d977e-c8bf-466e-8478-8fd987f741bb';
    $pane = new stdClass();
    $pane->pid = 'new-a967084e-23fc-42c8-a989-11864e6b739e';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_news_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
        'collapsed' => 1,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a967084e-23fc-42c8-a989-11864e6b739e';
    $display->content['new-a967084e-23fc-42c8-a989-11864e6b739e'] = $pane;
    $display->panels['two_75_25_second'][3] = 'new-a967084e-23fc-42c8-a989-11864e6b739e';
    $pane = new stdClass();
    $pane->pid = 'new-03b84fb3-cc92-4863-bf19-45b7ccd0f517';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Attach a Webform',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
        'collapsed' => 1,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '03b84fb3-cc92-4863-bf19-45b7ccd0f517';
    $display->content['new-03b84fb3-cc92-4863-bf19-45b7ccd0f517'] = $pane;
    $display->panels['two_75_25_second'][4] = 'new-03b84fb3-cc92-4863-bf19-45b7ccd0f517';
    $pane = new stdClass();
    $pane->pid = 'new-f78e4739-8a0d-4169-a779-597d032b96d7';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:simplenews_newsletter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Newsletter',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
        'collapsed' => 1,
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f78e4739-8a0d-4169-a779-597d032b96d7';
    $display->content['new-f78e4739-8a0d-4169-a779-597d032b96d7'] = $pane;
    $display->panels['two_75_25_second'][5] = 'new-f78e4739-8a0d-4169-a779-597d032b96d7';
    $pane = new stdClass();
    $pane->pid = 'new-bcb4f441-402d-48cd-a608-ce7b26ba2ec6';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'panelizer_form_default';
    $pane->subtype = 'panelizer_form_default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
        'collapsed' => 1,
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'bcb4f441-402d-48cd-a608-ce7b26ba2ec6';
    $display->content['new-bcb4f441-402d-48cd-a608-ce7b26ba2ec6'] = $pane;
    $display->panels['two_75_25_second'][6] = 'new-bcb4f441-402d-48cd-a608-ce7b26ba2ec6';
    $pane = new stdClass();
    $pane->pid = 'new-7eb827f0-867c-4ef8-8e25-35e0ed66ab6e';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_page_template';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Site Template',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 1,
        'collapsed' => 1,
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '7eb827f0-867c-4ef8-8e25-35e0ed66ab6e';
    $display->content['new-7eb827f0-867c-4ef8-8e25-35e0ed66ab6e'] = $pane;
    $display->panels['two_75_25_second'][7] = 'new-7eb827f0-867c-4ef8-8e25-35e0ed66ab6e';
    $pane = new stdClass();
    $pane->pid = 'new-37aa9d8c-bf5d-4ad9-a426-c488fc82d36d';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form-wbqVdZ35SCtiiWq2PyalW5ynrqdhzKoBcqlLmZx8cE8',
      'form_token' => 'X1_mP00SRZBPBhwUxnCqYYlos5w4A1HKIte8U9JxHH4',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '37aa9d8c-bf5d-4ad9-a426-c488fc82d36d';
    $display->content['new-37aa9d8c-bf5d-4ad9-a426-c488fc82d36d'] = $pane;
    $display->panels['two_75_25_second'][8] = 'new-37aa9d8c-bf5d-4ad9-a426-c488fc82d36d';
    $pane = new stdClass();
    $pane->pid = 'new-3d80464d-d3fd-4142-83b5-fd2c818b7d37';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form-ByyL-1yHAFDhk3surQDX7bwz5DQQ7TnEQd0SbKac0Z4',
      'form_token' => 'X1_mP00SRZBPBhwUxnCqYYlos5w4A1HKIte8U9JxHH4',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '3d80464d-d3fd-4142-83b5-fd2c818b7d37';
    $display->content['new-3d80464d-d3fd-4142-83b5-fd2c818b7d37'] = $pane;
    $display->panels['two_75_25_second'][9] = 'new-3d80464d-d3fd-4142-83b5-fd2c818b7d37';
    $pane = new stdClass();
    $pane->pid = 'new-314879d4-daff-4537-ac37-ae2bfca74c87';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'node_form_author';
    $pane->subtype = 'node_form_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form-_V2jK9oDhad-9SQxmamW7jQfRj8KZIub3TSJX3C_9Pw',
      'form_token' => '3ejr9PEpd-sKuoFtrZiCpZpijyyqXcrszu0yIWIzZvM',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '314879d4-daff-4537-ac37-ae2bfca74c87';
    $display->content['new-314879d4-daff-4537-ac37-ae2bfca74c87'] = $pane;
    $display->panels['two_75_25_second'][10] = 'new-314879d4-daff-4537-ac37-ae2bfca74c87';
    $pane = new stdClass();
    $pane->pid = 'new-3b6fba3b-066c-47a3-a6b2-c483768b9e1a';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'node_form_scheduler';
    $pane->subtype = 'node_form_scheduler';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form-EQ-GL8gQIi5oUHOW4JD1MCm3DMBSxJTni2bVEsi4zfo',
      'form_token' => '3ejr9PEpd-sKuoFtrZiCpZpijyyqXcrszu0yIWIzZvM',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '3b6fba3b-066c-47a3-a6b2-c483768b9e1a';
    $display->content['new-3b6fba3b-066c-47a3-a6b2-c483768b9e1a'] = $pane;
    $display->panels['two_75_25_second'][11] = 'new-3b6fba3b-066c-47a3-a6b2-c483768b9e1a';
    $pane = new stdClass();
    $pane->pid = 'new-e546358c-39fa-492a-8f2d-543fae556f9f';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'node_form_comment';
    $pane->subtype = 'node_form_comment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form--A4cA5MU25_imsAmAl0EtcRKimIVDilEoIEtSIj1Jzg',
      'form_token' => 'jla7JJCmEwKvaI4BscDNR6MrA-nCrCfhwYiQID8Yvmo',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'e546358c-39fa-492a-8f2d-543fae556f9f';
    $display->content['new-e546358c-39fa-492a-8f2d-543fae556f9f'] = $pane;
    $display->panels['two_75_25_second'][12] = 'new-e546358c-39fa-492a-8f2d-543fae556f9f';
    $pane = new stdClass();
    $pane->pid = 'new-d0a35bce-afbf-4daa-babe-eb3875d1eb9d';
    $pane->panel = 'two_75_25_second';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
      'cancel' => '<i class="icon glyphicon glyphicon-remove" aria-hidden="true"></i> Cancel',
      'preview' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Update Preview',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'display_in_fieldset' => 1,
      'collapsible' => 1,
      'collapsed' => 1,
      'form_build_id' => 'form-urTKeGiloSqccQoVnwAQINybSej2yU7HWYSoI95ALSc',
      'form_token' => 'X1_mP00SRZBPBhwUxnCqYYlos5w4A1HKIte8U9JxHH4',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'd0a35bce-afbf-4daa-babe-eb3875d1eb9d';
    $display->content['new-d0a35bce-afbf-4daa-babe-eb3875d1eb9d'] = $pane;
    $display->panels['two_75_25_second'][13] = 'new-d0a35bce-afbf-4daa-babe-eb3875d1eb9d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1e9d977e-c8bf-466e-8478-8fd987f741bb';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
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
  $display->layout = 'baseline_site_template';
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
      'menu_bar' => NULL,
      'help' => NULL,
      'header' => NULL,
    ),
    'header' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a372fe86-f29e-439b-bce2-70f62853307f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'outer inner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $display->content['new-ca7963e5-967e-4f96-96f0-a3d5139fce87'] = $pane;
    $display->panels['content'][0] = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $pane = new stdClass();
    $pane->pid = 'new-11e88416-e9e7-4776-a8da-13a1485a83f8';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'masquerade-masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '11e88416-e9e7-4776-a8da-13a1485a83f8';
    $display->content['new-11e88416-e9e7-4776-a8da-13a1485a83f8'] = $pane;
    $display->panels['footer'][0] = 'new-11e88416-e9e7-4776-a8da-13a1485a83f8';
    $pane = new stdClass();
    $pane->pid = 'new-f7780523-5b33-434c-9041-77e688ad23c1';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7780523-5b33-434c-9041-77e688ad23c1';
    $display->content['new-f7780523-5b33-434c-9041-77e688ad23c1'] = $pane;
    $display->panels['header'][0] = 'new-f7780523-5b33-434c-9041-77e688ad23c1';
    $pane = new stdClass();
    $pane->pid = 'new-dc924f00-66c6-455d-947d-7f626ba3d505';
    $pane->panel = 'header';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dc924f00-66c6-455d-947d-7f626ba3d505';
    $display->content['new-dc924f00-66c6-455d-947d-7f626ba3d505'] = $pane;
    $display->panels['header'][1] = 'new-dc924f00-66c6-455d-947d-7f626ba3d505';
    $pane = new stdClass();
    $pane->pid = 'new-7c932fad-a1a5-42ba-a431-71f12c7d92a2';
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
    $pane->uuid = '7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $display->content['new-7c932fad-a1a5-42ba-a431-71f12c7d92a2'] = $pane;
    $display->panels['help'][0] = 'new-7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $pane = new stdClass();
    $pane->pid = 'new-16b89b25-d1f2-4d1e-b362-62047110ba53';
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
      'override_title' => 1,
      'override_title_text' => 'Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16b89b25-d1f2-4d1e-b362-62047110ba53';
    $display->content['new-16b89b25-d1f2-4d1e-b362-62047110ba53'] = $pane;
    $display->panels['leaderboard'][0] = 'new-16b89b25-d1f2-4d1e-b362-62047110ba53';
    $pane = new stdClass();
    $pane->pid = 'new-02efb696-4474-4231-aabc-1ecd38171279';
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
    $pane->uuid = '02efb696-4474-4231-aabc-1ecd38171279';
    $display->content['new-02efb696-4474-4231-aabc-1ecd38171279'] = $pane;
    $display->panels['menu_bar'][0] = 'new-02efb696-4474-4231-aabc-1ecd38171279';
    $pane = new stdClass();
    $pane->pid = 'new-a73a0194-08f6-41b9-9a1f-86abeccc5059';
    $pane->panel = 'menu_bar';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'a73a0194-08f6-41b9-9a1f-86abeccc5059';
    $display->content['new-a73a0194-08f6-41b9-9a1f-86abeccc5059'] = $pane;
    $display->panels['menu_bar'][1] = 'new-a73a0194-08f6-41b9-9a1f-86abeccc5059';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'admin
admin/*
node/add/*
node/*/edit',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'baseline_site_template';
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
  $display->uuid = '538cc8e3-402c-401d-8cc3-63ff67d76f07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9699c939-b155-4ea2-9683-0ef50cfb1fc7';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->uuid = '9699c939-b155-4ea2-9683-0ef50cfb1fc7';
    $display->content['new-9699c939-b155-4ea2-9683-0ef50cfb1fc7'] = $pane;
    $display->panels['content'][0] = 'new-9699c939-b155-4ea2-9683-0ef50cfb1fc7';
    $pane = new stdClass();
    $pane->pid = 'new-b78d42b2-dae0-439f-8871-95da97fea5f7';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b78d42b2-dae0-439f-8871-95da97fea5f7';
    $display->content['new-b78d42b2-dae0-439f-8871-95da97fea5f7'] = $pane;
    $display->panels['header'][0] = 'new-b78d42b2-dae0-439f-8871-95da97fea5f7';
    $pane = new stdClass();
    $pane->pid = 'new-237c0007-7f38-4a38-9c0a-78f45eea674a';
    $pane->panel = 'header';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '237c0007-7f38-4a38-9c0a-78f45eea674a';
    $display->content['new-237c0007-7f38-4a38-9c0a-78f45eea674a'] = $pane;
    $display->panels['header'][1] = 'new-237c0007-7f38-4a38-9c0a-78f45eea674a';
    $pane = new stdClass();
    $pane->pid = 'new-5520965a-d388-46bb-af9e-f12b6a22ca0a';
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
    $pane->uuid = '5520965a-d388-46bb-af9e-f12b6a22ca0a';
    $display->content['new-5520965a-d388-46bb-af9e-f12b6a22ca0a'] = $pane;
    $display->panels['help'][0] = 'new-5520965a-d388-46bb-af9e-f12b6a22ca0a';
    $pane = new stdClass();
    $pane->pid = 'new-f2191611-dfed-4209-96c8-5cdb0ffb8bb5';
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
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => 'Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f2191611-dfed-4209-96c8-5cdb0ffb8bb5';
    $display->content['new-f2191611-dfed-4209-96c8-5cdb0ffb8bb5'] = $pane;
    $display->panels['leaderboard'][0] = 'new-f2191611-dfed-4209-96c8-5cdb0ffb8bb5';
    $pane = new stdClass();
    $pane->pid = 'new-78a16a05-476b-4488-aa05-6d57b33695c3';
    $pane->panel = 'menu_bar';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '78a16a05-476b-4488-aa05-6d57b33695c3';
    $display->content['new-78a16a05-476b-4488-aa05-6d57b33695c3'] = $pane;
    $display->panels['menu_bar'][0] = 'new-78a16a05-476b-4488-aa05-6d57b33695c3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-9699c939-b155-4ea2-9683-0ef50cfb1fc7';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_3';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Views',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'admin/structure/views
admin/structure/views/*',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'baseline_site_template';
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
  $display->uuid = '538cc8e3-402c-401d-8cc3-63ff67d76f07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9699c939-b155-4ea2-9683-0ef50cfb1fc7';
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
    $pane->uuid = '9699c939-b155-4ea2-9683-0ef50cfb1fc7';
    $display->content['new-9699c939-b155-4ea2-9683-0ef50cfb1fc7'] = $pane;
    $display->panels['content'][0] = 'new-9699c939-b155-4ea2-9683-0ef50cfb1fc7';
    $pane = new stdClass();
    $pane->pid = 'new-97fc7a7d-7fe2-4e56-99e2-5349ee4c28ff';
    $pane->panel = 'header';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
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
    $pane->uuid = '97fc7a7d-7fe2-4e56-99e2-5349ee4c28ff';
    $display->content['new-97fc7a7d-7fe2-4e56-99e2-5349ee4c28ff'] = $pane;
    $display->panels['header'][0] = 'new-97fc7a7d-7fe2-4e56-99e2-5349ee4c28ff';
    $pane = new stdClass();
    $pane->pid = 'new-5520965a-d388-46bb-af9e-f12b6a22ca0a';
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
    $pane->uuid = '5520965a-d388-46bb-af9e-f12b6a22ca0a';
    $display->content['new-5520965a-d388-46bb-af9e-f12b6a22ca0a'] = $pane;
    $display->panels['help'][0] = 'new-5520965a-d388-46bb-af9e-f12b6a22ca0a';
    $pane = new stdClass();
    $pane->pid = 'new-c19384d4-2f55-41bd-b7be-edd247dd24fc';
    $pane->panel = 'menu_bar';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 1,
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
    $pane->uuid = 'c19384d4-2f55-41bd-b7be-edd247dd24fc';
    $display->content['new-c19384d4-2f55-41bd-b7be-edd247dd24fc'] = $pane;
    $display->panels['menu_bar'][0] = 'new-c19384d4-2f55-41bd-b7be-edd247dd24fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9699c939-b155-4ea2-9683-0ef50cfb1fc7';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_4';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Full Width',
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
              'page' => 'page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:page:field_page_template',
          'settings' => array(
            'field_page_template' => array(
              'und' => array(
                0 => array(
                  'value' => 'full-width',
                ),
              ),
            ),
            'field_page_template_value' => 'full-width',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'baseline_site_template_fww';
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
      'menu_bar' => NULL,
      'help' => NULL,
      'header' => NULL,
    ),
    'header' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a372fe86-f29e-439b-bce2-70f62853307f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'outer inner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $display->content['new-ca7963e5-967e-4f96-96f0-a3d5139fce87'] = $pane;
    $display->panels['content'][0] = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $pane = new stdClass();
    $pane->pid = 'new-11e88416-e9e7-4776-a8da-13a1485a83f8';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'masquerade-masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '11e88416-e9e7-4776-a8da-13a1485a83f8';
    $display->content['new-11e88416-e9e7-4776-a8da-13a1485a83f8'] = $pane;
    $display->panels['footer'][0] = 'new-11e88416-e9e7-4776-a8da-13a1485a83f8';
    $pane = new stdClass();
    $pane->pid = 'new-6f32ce75-df9a-41b2-b34f-e9a5b2e0c9ec';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f32ce75-df9a-41b2-b34f-e9a5b2e0c9ec';
    $display->content['new-6f32ce75-df9a-41b2-b34f-e9a5b2e0c9ec'] = $pane;
    $display->panels['header'][0] = 'new-6f32ce75-df9a-41b2-b34f-e9a5b2e0c9ec';
    $pane = new stdClass();
    $pane->pid = 'new-7c932fad-a1a5-42ba-a431-71f12c7d92a2';
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
    $pane->uuid = '7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $display->content['new-7c932fad-a1a5-42ba-a431-71f12c7d92a2'] = $pane;
    $display->panels['help'][0] = 'new-7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $pane = new stdClass();
    $pane->pid = 'new-16b89b25-d1f2-4d1e-b362-62047110ba53';
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
      'override_title' => 1,
      'override_title_text' => 'Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16b89b25-d1f2-4d1e-b362-62047110ba53';
    $display->content['new-16b89b25-d1f2-4d1e-b362-62047110ba53'] = $pane;
    $display->panels['leaderboard'][0] = 'new-16b89b25-d1f2-4d1e-b362-62047110ba53';
    $pane = new stdClass();
    $pane->pid = 'new-02efb696-4474-4231-aabc-1ecd38171279';
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
    $pane->uuid = '02efb696-4474-4231-aabc-1ecd38171279';
    $display->content['new-02efb696-4474-4231-aabc-1ecd38171279'] = $pane;
    $display->panels['menu_bar'][0] = 'new-02efb696-4474-4231-aabc-1ecd38171279';
    $pane = new stdClass();
    $pane->pid = 'new-a73a0194-08f6-41b9-9a1f-86abeccc5059';
    $pane->panel = 'menu_bar';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'a73a0194-08f6-41b9-9a1f-86abeccc5059';
    $display->content['new-a73a0194-08f6-41b9-9a1f-86abeccc5059'] = $pane;
    $display->panels['menu_bar'][1] = 'new-a73a0194-08f6-41b9-9a1f-86abeccc5059';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_5';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Blank',
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
              'page' => 'page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:page:field_page_template',
          'settings' => array(
            'field_page_template' => array(
              'und' => array(
                0 => array(
                  'value' => 'blank',
                ),
              ),
            ),
            'field_page_template_value' => 'blank',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'baseline_site_template_fww';
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
      'menu_bar' => NULL,
      'help' => NULL,
      'header' => NULL,
    ),
    'header' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a372fe86-f29e-439b-bce2-70f62853307f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'outer inner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $display->content['new-ca7963e5-967e-4f96-96f0-a3d5139fce87'] = $pane;
    $display->panels['content'][0] = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
    $pane = new stdClass();
    $pane->pid = 'new-7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $pane->panel = 'header';
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
    $pane->uuid = '7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $display->content['new-7c932fad-a1a5-42ba-a431-71f12c7d92a2'] = $pane;
    $display->panels['header'][0] = 'new-7c932fad-a1a5-42ba-a431-71f12c7d92a2';
    $pane = new stdClass();
    $pane->pid = 'new-16b89b25-d1f2-4d1e-b362-62047110ba53';
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
      'override_title' => 1,
      'override_title_text' => 'Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16b89b25-d1f2-4d1e-b362-62047110ba53';
    $display->content['new-16b89b25-d1f2-4d1e-b362-62047110ba53'] = $pane;
    $display->panels['leaderboard'][0] = 'new-16b89b25-d1f2-4d1e-b362-62047110ba53';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->title = '';
  $display->uuid = 'c4dd7fe5-57f2-4afc-b1a8-140c1de3058e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-82492f2a-b4da-43b0-8320-362ed8a74681';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_taxonomy-taxonomy_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'exposed' => array(
        'status' => '1',
        'type_op' => 'not in',
        'type' => array(
          'webform' => 'webform',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'context' => array(
        0 => 'argument_term_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '82492f2a-b4da-43b0-8320-362ed8a74681';
    $display->content['new-82492f2a-b4da-43b0-8320-362ed8a74681'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-82492f2a-b4da-43b0-8320-362ed8a74681';
    $pane = new stdClass();
    $pane->pid = 'new-c5e5cf10-85fa-4c12-b725-475ad3d56182';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_term_list-term_list_count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '20',
      'fields_override' => array(
        'name' => 1,
        'nid' => 1,
      ),
      'exposed' => array(
        'vocabulary_op' => 'not in',
        'vocabulary' => array(
          'panopoly_categories' => 'panopoly_categories',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'nid',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'More',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c5e5cf10-85fa-4c12-b725-475ad3d56182';
    $display->content['new-c5e5cf10-85fa-4c12-b725-475ad3d56182'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-c5e5cf10-85fa-4c12-b725-475ad3d56182';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-82492f2a-b4da-43b0-8320-362ed8a74681';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function baseline_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive';
  $page->task = 'page';
  $page->admin_title = 'Archive';
  $page->admin_description = '';
  $page->path = 'archive';
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
  $handler->name = 'page_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'archive';
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
  $display->title = '';
  $display->uuid = '205af1d0-d021-4bf0-9f73-e5467f72b717';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2d5b855-b963-4e9f-b73e-c1cfbb8dbda0';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-archive_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'items_per_page' => '10',
      'path' => 'archive',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2d5b855-b963-4e9f-b73e-c1cfbb8dbda0';
    $display->content['new-c2d5b855-b963-4e9f-b73e-c1cfbb8dbda0'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-c2d5b855-b963-4e9f-b73e-c1cfbb8dbda0';
    $pane = new stdClass();
    $pane->pid = 'new-b16a358b-3671-4e48-a851-94f864cb6834';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'baseline_content-month_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
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
    $pane->uuid = 'b16a358b-3671-4e48-a851-94f864cb6834';
    $display->content['new-b16a358b-3671-4e48-a851-94f864cb6834'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-b16a358b-3671-4e48-a851-94f864cb6834';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c2d5b855-b963-4e9f-b73e-c1cfbb8dbda0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->layout = 'base_two_75_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'row',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'three_inset_left_sidebar' => NULL,
      'three_inset_left_top' => NULL,
      'three_inset_left_middle' => NULL,
      'three_inset_left_inset' => NULL,
      'three_inset_left_bottom' => NULL,
    ),
    'one_main' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '38bbb0ad-0960-40a8-b736-80b45775138f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9e9c0ef8-8135-4fd2-bf89-89de964b43dd';
    $pane->panel = 'two_75_25_top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
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
      'css_id' => '',
      'css_class' => 'small-6 large-3 box columns',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e9c0ef8-8135-4fd2-bf89-89de964b43dd';
    $display->content['new-9e9c0ef8-8135-4fd2-bf89-89de964b43dd'] = $pane;
    $display->panels['two_75_25_top'][0] = 'new-9e9c0ef8-8135-4fd2-bf89-89de964b43dd';
    $pane = new stdClass();
    $pane->pid = 'new-cc1b70dd-05e2-452a-92cc-3af09981a37b';
    $pane->panel = 'two_75_25_top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
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
      'css_id' => '',
      'css_class' => 'small-6 large-3 columns',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc1b70dd-05e2-452a-92cc-3af09981a37b';
    $display->content['new-cc1b70dd-05e2-452a-92cc-3af09981a37b'] = $pane;
    $display->panels['two_75_25_top'][1] = 'new-cc1b70dd-05e2-452a-92cc-3af09981a37b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}

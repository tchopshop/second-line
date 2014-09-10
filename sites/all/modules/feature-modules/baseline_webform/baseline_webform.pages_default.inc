<?php
/**
 * @file
 * baseline_webform.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function baseline_webform_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Webform',
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
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'base_two_66_33';
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
    ),
    'two_66_33_second' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f5d1b539-29a9-4268-a70e-f46c6d8d3be7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fd4467cd-c486-41c3-a1dc-a8ecdc083372';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd4467cd-c486-41c3-a1dc-a8ecdc083372';
    $display->content['new-fd4467cd-c486-41c3-a1dc-a8ecdc083372'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-fd4467cd-c486-41c3-a1dc-a8ecdc083372';
    $pane = new stdClass();
    $pane->pid = 'new-c1fbfb76-b669-41d2-976b-56594a46799a';
    $pane->panel = 'two_66_33_first';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1fbfb76-b669-41d2-976b-56594a46799a';
    $display->content['new-c1fbfb76-b669-41d2-976b-56594a46799a'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-c1fbfb76-b669-41d2-976b-56594a46799a';
    $pane = new stdClass();
    $pane->pid = 'new-32d1f697-fbd4-4d7c-83ad-c858e6ec42ed';
    $pane->panel = 'two_66_33_first';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '32d1f697-fbd4-4d7c-83ad-c858e6ec42ed';
    $display->content['new-32d1f697-fbd4-4d7c-83ad-c858e6ec42ed'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-32d1f697-fbd4-4d7c-83ad-c858e6ec42ed';
    $pane = new stdClass();
    $pane->pid = 'new-a7c6fdc5-63a6-457f-afd3-f56e956fdfef';
    $pane->panel = 'two_66_33_first';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a7c6fdc5-63a6-457f-afd3-f56e956fdfef';
    $display->content['new-a7c6fdc5-63a6-457f-afd3-f56e956fdfef'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-a7c6fdc5-63a6-457f-afd3-f56e956fdfef';
    $pane = new stdClass();
    $pane->pid = 'new-37aa9d8c-bf5d-4ad9-a426-c488fc82d36d';
    $pane->panel = 'two_66_33_second';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37aa9d8c-bf5d-4ad9-a426-c488fc82d36d';
    $display->content['new-37aa9d8c-bf5d-4ad9-a426-c488fc82d36d'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-37aa9d8c-bf5d-4ad9-a426-c488fc82d36d';
    $pane = new stdClass();
    $pane->pid = 'new-3d80464d-d3fd-4142-83b5-fd2c818b7d37';
    $pane->panel = 'two_66_33_second';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d80464d-d3fd-4142-83b5-fd2c818b7d37';
    $display->content['new-3d80464d-d3fd-4142-83b5-fd2c818b7d37'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-3d80464d-d3fd-4142-83b5-fd2c818b7d37';
    $pane = new stdClass();
    $pane->pid = 'new-028f4749-9e57-4669-9160-6a7ae04a7b93';
    $pane->panel = 'two_66_33_second';
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
      'form_build_id' => 'form-XSGTm8H6uFaDiH9lRD92hlayN3hGrvgl90LSR1HWqYQ',
      'form_token' => 'gjIVVIQNSDkq_bO7IEnqbOL6owDV2uHzfbMQQ6P-6mk',
      'form_id' => 'node_form_panes_node_form_content_type_edit_form',
      'op' => '<i class="icon glyphicon glyphicon-ok" aria-hidden="true"></i> Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '028f4749-9e57-4669-9160-6a7ae04a7b93';
    $display->content['new-028f4749-9e57-4669-9160-6a7ae04a7b93'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-028f4749-9e57-4669-9160-6a7ae04a7b93';
    $pane = new stdClass();
    $pane->pid = 'new-314879d4-daff-4537-ac37-ae2bfca74c87';
    $pane->panel = 'two_66_33_second';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '314879d4-daff-4537-ac37-ae2bfca74c87';
    $display->content['new-314879d4-daff-4537-ac37-ae2bfca74c87'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-314879d4-daff-4537-ac37-ae2bfca74c87';
    $pane = new stdClass();
    $pane->pid = 'new-d0a35bce-afbf-4daa-babe-eb3875d1eb9d';
    $pane->panel = 'two_66_33_second';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd0a35bce-afbf-4daa-babe-eb3875d1eb9d';
    $display->content['new-d0a35bce-afbf-4daa-babe-eb3875d1eb9d'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-d0a35bce-afbf-4daa-babe-eb3875d1eb9d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  return $export;
}

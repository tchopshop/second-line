<?php
/**
 * @file
 * baseline_animation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function baseline_animation_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_6';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Parallax',
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
                  'value' => 'parallax',
                ),
              ),
            ),
            'field_page_template_value' => 'parallax',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_css_js_files_css' => '',
    'panels_css_js_files_js' => '[theme]/js/imagesloaded-ck.js
[theme]/js/skrollr.min-ck.js
',
    'panels_css_js_code_css' => '',
    'panels_css_js_code_js' => '	// Setup variables
	$window = $(window);
	$slide = $(\'.homeSlide\');
	$body = $(\'body\');
	
    //FadeIn all sections   
	$body.imagesLoaded( function() {
		setTimeout(function() {
		      
		      // Resize sections
		      adjustWindow();
		      
		      // Fade in sections
			  $body.removeClass(\'loading\').addClass(\'loaded\');
			  
		}, 800);
	});


function adjustWindow(){
     
    // Get window size
    winH = $window.height();
    winW = $window.width();
     
    // Keep minimum height 550
    if(winH <= 550) {
        winH = 550;
    }
     
    // Init Skrollr for 768 and up
    if( winW >= 769) {
 
        // Init Skrollr
        var s = skrollr.init({
            forceHeight: false
        });
 
        // Resize our slides
        $slide.height(winH);
 
        s.refresh($(\'.homeSlide\'));
 
    } else {
 
        // Init Skrollr
        var s = skrollr.init();
        s.destroy();
    }
 
    // Check for touch
    if(Modernizr.touch) {
 
        // Init Skrollr
        var s = skrollr.init();
        s.destroy();
    }
 
}          
      
function initAdjustWindow() {
    return {
        match : function() {
            adjustWindow();
        },
        unmatch : function() {
            adjustWindow();
        }
    };
}
 
enquire.register("screen and (min-width : 800px)", initAdjustWindow(), false);
',
    'panels_css_js_code_js_wrapper' => '2',
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
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h1',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ca7963e5-967e-4f96-96f0-a3d5139fce87';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_6'] = $handler;

  return $export;
}

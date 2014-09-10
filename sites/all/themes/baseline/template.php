<?php
/**
 * @file
 * template.php
 */


/**
 * Preprocess html.tpl.php
 */
function baseline_preprocess_html(&$vars) {
  global $theme_key;
  $theme_name = $theme_key;

  // Add class for the active theme name
  $vars['classes_array'][] = drupal_html_class($theme_name);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  /* -- Delete this line to add a classes for the browser and platform.
  $vars['classes_array'][] = css_browser_selector();
  // */

  // Remove body classes added by Drupal core
  $classes_to_remove = array('two-sidebars', 'one-sidebar sidebar-first', 'one-sidebar sidebar-second', 'no-sidebars');
  foreach ($vars['classes_array'] as $key => $css_class) {
    if (in_array($css_class, $classes_to_remove)) {
      unset($vars['classes_array'][$key]);
    }
  }
}


/**
 * Preprocess Site Template
 */
function baseline_preprocess_baseline_site_template(&$vars) {
  global $theme_key;
  $theme_name = $theme_key;

  // Add information about the number of sidebars.
  $content = $vars['content'];

  $sidebars = array();
  if (!empty($content['sidebar_first']) && !empty($content['sidebar_second'])) {
    $sidebars[] = 'two-sidebars';
  }
  elseif (!empty($content['sidebar_first'])) {
    $sidebars[] = 'one-sidebar sidebar-first';
  }
  elseif (!empty($content['sidebar_second'])) {
    $sidebars[] = 'one-sidebar sidebar-second';
  }
  else {
    $sidebars[] = 'no-sidebars';
  }
  $vars['classes_array'][] = implode(' ', $sidebars);

  $vars['classes_array'] = array_values(array_diff($vars['classes_array'], array('contextual-links-region')));

}

/**
 * Preprocess Site Template
 */
function baseline_preprocess_baseline_site_template_fww(&$vars) {
  global $theme_key;
  $theme_name = $theme_key;

  // Add information about the number of sidebars.
  $content = $vars['content'];

  $sidebars = array();
  if (!empty($content['sidebar_first']) && !empty($content['sidebar_second'])) {
    $sidebars[] = 'two-sidebars';
  }
  elseif (!empty($content['sidebar_first'])) {
    $sidebars[] = 'one-sidebar sidebar-first';
  }
  elseif (!empty($content['sidebar_second'])) {
    $sidebars[] = 'one-sidebar sidebar-second';
  }
  else {
    $sidebars[] = 'no-sidebars';
  }
  $vars['classes_array'][] = implode(' ', $sidebars);

  $vars['classes_array'] = array_values(array_diff($vars['classes_array'], array('contextual-links-region')));

}


/**
 * Preprocess pane navigation vars
 */
function baseline_preprocess_pane_navigation(&$vars) {
  // Build a variable for the main menu
  if (isset($vars['main_menu'])) {
    $vars['primary_navigation'] = theme('links', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('menu', 'primary-menu', 'clearfix'),
       ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  // Build a variable for the secondary menu
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_navigation'] = theme('links', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('menu', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary navigation'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
}

/**
 * Preprocess pane navigation vars
 */
function baseline_process_pane_navigation(&$vars) {
  // theme the menu bars
  if (!empty($vars['primary_navigation'])) {
    $vars['primary_navigation'] = theme('menubar', array('menu' => $vars['primary_navigation'], 'type' => 'primary'));
  }
  if (!empty($vars['secondary_navigation'])) {
    $vars['secondary_navigation'] = theme('menubar', array('menu' => $vars['secondary_navigation'], 'type' => 'secondary'));
  }
}

// Preprocess pane messages vars
function baseline_preprocess_pane_messages(&$vars) {
  $vars['primary_local_tasks'] = menu_primary_local_tasks();
  $vars['secondary_local_tasks'] = menu_secondary_local_tasks();
}

function baseline_preprocess_field(&$variables, $hook){
    $classes_arr = &$variables['classes_array'];
        for ($i = sizeof($classes_arr)-1; $i >= 0; $i--) {
            if( $classes_arr[$i]==='clearfix' ){
                unset($classes_arr[$i]);
                $i=-1;
            }
    }
}

function baseline_paragraphs_view($variables) {
  $element = $variables['element'];
	  return $element['#children'];
}


function baseline_menu_link__management(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      
      $sub_menu = '<ul class="dropdown-menu dl-submenu">' . drupal_render($element['#below']) . '</ul>';
      $element['#localized_options']['attributes']['class'][] = 'disabled dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';

      // Check if this element is nested within another
      if ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] > 2)) {
        // Generate as dropdown submenu
        $element['#attributes']['class'][] = 'dropdown-submenu';
      }
      else {
        // Generate as standard dropdown
        $element['#attributes']['class'][] = 'dropdown';
        $element['#localized_options']['html'] = TRUE;
        $element['#title'] .= ' <span class="caret"></span>';
      }

      // Set dropdown trigger element to # to prevent inadvertant page loading with submenu click
      $element['#localized_options']['attributes']['data-target'] = '#';
	  
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function baseline_menu_tree__management(&$variables) {
  return '<ul class="nav navbar-nav dl-menu">' . $variables['tree'] . '</ul>';
}


//function baseline_preprocess_panels_pane($variables) {
//  dpm('type: ' . $variables['pane']->type);
//  if ($variables['pane']->type == 'node_content') {
//    dpm('subtype: ' . $variables['pane']->subtype);
//  }
//}

function baseline_date_all_day_label() {
  return '';
}

function baseline_preprocess_node(&$vars) {
  if ($vars['page'] && $vars['node']->nid == 11) {
    drupal_add_js('http://maps.google.com/maps/api/js?sensor=false','external');
  }
}
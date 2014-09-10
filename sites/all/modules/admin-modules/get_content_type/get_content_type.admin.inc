<?php
/**
 * @file
 * Admin functions for Get Content Type module.
 */

/**
 *  Form to build URL for displaying content types.
 */
function get_content_type_form() {
  $form = array();

  $node_types = node_type_get_names();
  $form['types'] = array(
    '#type' => 'checkboxes',
    '#options' => $node_types,
    '#title' => t('Content types'),
    '#description' => t('Choose the content types you wish to display.'),
    '#required' => TRUE,
    );

  $form['how_many'] = array(
    '#type' => 'textfield',
    '#size' => 8,
    '#title' => t('How many per page'),
    '#description' => t('The display will be formatted into a series of pages with this many posts per page.'),
    '#default_value' => variable_get('default_nodes_main', 10),
    '#required' => TRUE,
    );

  $display_options = array(
    'teaser' => t('Teaser'),
    'full' => t('Full node'),
    'list' => t('As a list of titles'),
    );

  $form['teaser'] = array(
    '#type' => 'radios',
    '#options' => $display_options,
    '#title' => t('Display format'),
    '#description' => t('This controls how the selected content will be displayed.'),
    '#default_value' => 'teaser',
    '#required' => TRUE,
    );

  $sort_options = array(
    'standard' => t('Standard - newest first, sticky on top'),
    'oldest' => t('Oldest first'),
    'title' => t('Alphabetically by title'),
    'user' => t('By Userid'),
    );

  $form['sort'] = array(
    '#type' => 'radios',
    '#options' => $sort_options,
    '#title' => t('Sort Order'),
    '#default_value' => 'standard',
    '#required' => TRUE,
    );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Show my selections'),
    '#weight' => 3,
  );

  return $form;
}

/**
 *  Form_submit to build URL for displaying content types.
 */
function get_content_type_form_submit($form, &$form_state) {
  $types = array();
  foreach ($form_state['values']['types'] as $type => $selected) {
    if ($selected) {
      $types[] = $type;
    }
  }

  $form_state['redirect'] = 'node/type/' . implode(' ', $types) . '/' . $form_state['values']['teaser'] . '/' . $form_state['values']['how_many'] . '/' . $form_state['values']['sort'];
}

/**
 * Implements hook_form().
 * Admin > Config > User interface > Get content type.
 */
function get_content_type_settings() {
  $form = array();
  $noyes = array(t('No'), t('Yes'));

  $form['type_list'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#title' => t('Node type list'),
    '#description' => t('This controls the display for "!url_text"', array('!url_text' => 'node/type/<em>xxx</em>')),
    );

  $form['type_list']['get_content_type_show_desc'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Show content type description'),
    '#default_value' => variable_get('get_content_type_show_desc', 0),
    '#attributes' => array('class' => array('container-inline')),
    );

  $form['type_list']['get_content_type_count_undefined'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Show undefined types on content type count page'),
    '#default_value' => variable_get('get_content_type_count_undefined', 1),
    '#attributes' => array('class' => array('container-inline')),
    );

  return system_settings_form($form);
}

/**
 * Menu callback - Show all content types with counts from node table.
 * Optionally shows which types were found but are not currently defined.
 */
function get_content_type_count() {
  $rows = array();
  $header = array(
    t('Content Type'),
    t('Published'),
    t('Unpublished'),
    t('Oldest'),
    t('Newest'),
    t('Operations'),
    );
  $types = node_type_get_names();
  $now = REQUEST_TIME;
  $show_undefined = variable_get('get_content_type_count_undefined', 1);

  $query = "SELECT DISTINCT(n.`type`) AS content_type, "
    . "MIN(created) AS oldest, MAX(created) AS newest, "
    . "(SELECT COUNT(*) FROM {node} WHERE `type` = content_type AND `status` = 1) AS pub, "
    . "(SELECT COUNT(*) FROM {node} WHERE `type` = content_type AND `status` = 0) AS unpub "
    . "FROM {node} n "
    . "GROUP BY n.`type` ASC ";
  $result = db_query($query);

  foreach ($result as $row) {
    // Is this a currently known content type?
    if (!isset($types[$row->content_type])) {
      // Do we want to show it at all?
      if ($show_undefined) {
        $types[$row->content_type] = t('undefined (@type)', array('@type' => $row->content_type));
      }
      else {
        continue;
      }
    }

    $rows[$types[$row->content_type]] = array(
      l($types[$row->content_type], "node/type/$row->content_type"),
      array('data' => number_format($row->pub), 'align' => 'right'),
      array('data' => number_format($row->unpub), 'align' => 'right'),
      array('data' => format_interval($now - $row->oldest), 'align' => 'left'),
      array('data' => format_interval($now - $row->newest), 'align' => 'left'),
      user_access('Administer content types') ?
        l(t('manage'), "admin/structure/types/manage/$row->content_type/fields") : '',
      );
  }
  ksort($rows);

  return theme('table',
    array('header' => $header, 'rows' => $rows, 'attributes' => array('style' => 'width: auto;'))
    );
}

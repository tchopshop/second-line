<?php
/**
 * @file
 * baseline_paragraph_elements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function baseline_paragraph_elements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'paragraph_accordion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'Paragraph Accordion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Paragraphs item: Accordion (field_accordian) */
  $handler->display->display_options['relationships']['field_accordian_value']['id'] = 'field_accordian_value';
  $handler->display->display_options['relationships']['field_accordian_value']['table'] = 'field_data_field_accordian';
  $handler->display->display_options['relationships']['field_accordian_value']['field'] = 'field_accordian_value';
  $handler->display->display_options['relationships']['field_accordian_value']['delta'] = '-1';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'field_accordian_value';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Text */
  $handler->display->display_options['fields']['field_accordian_text']['id'] = 'field_accordian_text';
  $handler->display->display_options['fields']['field_accordian_text']['table'] = 'field_data_field_accordian_text';
  $handler->display->display_options['fields']['field_accordian_text']['field'] = 'field_accordian_text';
  $handler->display->display_options['fields']['field_accordian_text']['relationship'] = 'field_accordian_value';
  $handler->display->display_options['fields']['field_accordian_text']['label'] = '';
  $handler->display->display_options['fields']['field_accordian_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accordian_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accordian_text']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Title/Question */
  $handler->display->display_options['fields']['field_title_question']['id'] = 'field_title_question';
  $handler->display->display_options['fields']['field_title_question']['table'] = 'field_data_field_title_question';
  $handler->display->display_options['fields']['field_title_question']['field'] = 'field_title_question';
  $handler->display->display_options['fields']['field_title_question']['relationship'] = 'field_accordian_value';
  $handler->display->display_options['fields']['field_title_question']['label'] = '';
  $handler->display->display_options['fields']['field_title_question']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_title_question']['alter']['text'] = '<div class="panel panel-default"><div class="panel-heading"><h4 class="panel-title"><a data-toggle="collapse" data-parent="#accordion" href="#collapse[item_id]">[field_title_question-value]</a></h4></div>
<div id="collapse[item_id]" class="panel-collapse collapse"><div class="panel-body">[field_accordian_text]</div></div></div>';
  $handler->display->display_options['fields']['field_title_question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_question']['element_default_classes'] = FALSE;
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'accordian' => 'accordian',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'accordian',
  );
  $export['paragraph_accordion'] = $view;

  $view = new view();
  $view->name = 'paragraph_table';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'Paragraph Table';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_column_1' => 'field_column_1',
    'field_column_2' => 'field_column_2',
    'field_downloadable_file' => 'field_downloadable_file',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_column_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_column_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_downloadable_file' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Relationship: Paragraphs item: 3 Field File Table (field_3_field_file_table) */
  $handler->display->display_options['relationships']['field_3_field_file_table_value']['id'] = 'field_3_field_file_table_value';
  $handler->display->display_options['relationships']['field_3_field_file_table_value']['table'] = 'field_data_field_3_field_file_table';
  $handler->display->display_options['relationships']['field_3_field_file_table_value']['field'] = 'field_3_field_file_table_value';
  $handler->display->display_options['relationships']['field_3_field_file_table_value']['delta'] = '-1';
  /* Field: Field collection item: Column 1 */
  $handler->display->display_options['fields']['field_column_1']['id'] = 'field_column_1';
  $handler->display->display_options['fields']['field_column_1']['table'] = 'field_data_field_column_1';
  $handler->display->display_options['fields']['field_column_1']['field'] = 'field_column_1';
  $handler->display->display_options['fields']['field_column_1']['relationship'] = 'field_3_field_file_table_value';
  $handler->display->display_options['fields']['field_column_1']['label'] = '';
  $handler->display->display_options['fields']['field_column_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_column_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_column_1']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Column 2 */
  $handler->display->display_options['fields']['field_column_2']['id'] = 'field_column_2';
  $handler->display->display_options['fields']['field_column_2']['table'] = 'field_data_field_column_2';
  $handler->display->display_options['fields']['field_column_2']['field'] = 'field_column_2';
  $handler->display->display_options['fields']['field_column_2']['relationship'] = 'field_3_field_file_table_value';
  $handler->display->display_options['fields']['field_column_2']['label'] = '';
  $handler->display->display_options['fields']['field_column_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_column_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_column_2']['element_default_classes'] = FALSE;
  /* Field: Field: Downloadable File */
  $handler->display->display_options['fields']['field_downloadable_file']['id'] = 'field_downloadable_file';
  $handler->display->display_options['fields']['field_downloadable_file']['table'] = 'field_data_field_downloadable_file';
  $handler->display->display_options['fields']['field_downloadable_file']['field'] = 'field_downloadable_file';
  $handler->display->display_options['fields']['field_downloadable_file']['relationship'] = 'field_3_field_file_table_value';
  $handler->display->display_options['fields']['field_downloadable_file']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_downloadable_file']['element_class'] = 'download';
  $handler->display->display_options['fields']['field_downloadable_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_downloadable_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_downloadable_file']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_downloadable_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_downloadable_file']['multi_type'] = 'ul';
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'text_text_file' => 'text_text_file',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'text_text_file',
  );
  $export['paragraph_table'] = $view;

  return $export;
}

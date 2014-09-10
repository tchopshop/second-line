<?php
/**
 * @file
 * baseline_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function baseline_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'baseline_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Baseline News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'article news [field_news_type]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: News Type */
  $handler->display->display_options['fields']['field_news_type']['id'] = 'field_news_type';
  $handler->display->display_options['fields']['field_news_type']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['fields']['field_news_type']['field'] = 'field_news_type';
  $handler->display->display_options['fields']['field_news_type']['label'] = '';
  $handler->display->display_options['fields']['field_news_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Teaser Image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_teaser_image']['element_class'] = 'media';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_subhead']['element_class'] = 'subhead';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subhead']['element_default_classes'] = FALSE;
  /* Field: Content: Teaser Text */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Meta';
  $handler->display->display_options['fields']['fieldset_1']['alter']['alter_text'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'panopoly_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'author';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tags']['element_class'] = 'tags';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' | ';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_type'] = 'span';
  $handler->display->display_options['fields']['comment_count']['element_class'] = 'comment-count';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['element_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_class'] = 'node-views';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value_1']['id'] = 'field_featured_value_1';
  $handler->display->display_options['filters']['field_featured_value_1']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value_1']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_featured_value_1']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_featured_value']['group'] = 2;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'news_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News from !sitename.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'This is a list of news items from !sitename.';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'news/rss';
  $handler->display->display_options['sitename_title'] = 0;
  $export['baseline_news'] = $view;

  $view = new view();
  $view->name = 'comment_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Comment Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_type'] = 'span';
  $handler->display->display_options['fields']['comment_count']['element_class'] = 'comments';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'news',
  );
  $export['comment_count'] = $view;

  $view = new view();
  $view->name = 'related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Contextual filter: Exclude Current Page */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Exclude Current Page';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Category Term Filter */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Category Term Filter';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'panopoly_categories' => 'panopoly_categories',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related Content */
  $handler = $view->new_display('panel_pane', 'Related Content', 'related_content');
  $handler->display->display_options['pane_title'] = 'Related Content';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Related Content exclude Author */
  $handler = $view->new_display('panel_pane', 'Related Content exclude Author', 'related_content_not_author');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Exclude Current Page */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Exclude Current Page';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Exclude current author */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['ui_name'] = 'Exclude current author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  /* Contextual filter: Category Term Filter */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Category Term Filter';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'panopoly_categories' => 'panopoly_categories',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Related Content exclude Author';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['related_content'] = $view;

  $view = new view();
  $view->name = 'view_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['element_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_class'] = 'node-views';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['view_count'] = $view;

  return $export;
}

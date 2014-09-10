<?php
/**
 * @file
 * baseline_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function baseline_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_categories:admin/structure/taxonomy/panopoly_categories
  $menu_links['management_categories:admin/structure/taxonomy/panopoly_categories'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/panopoly_categories',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Categories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_categories:admin/structure/taxonomy/panopoly_categories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_taxonomy:admin/structure/taxonomy',
  );
  // Exported menu link: management_create-content:node/add
  $menu_links['management_create-content:node/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Create Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_create-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_my-workbench:admin/workbench',
  );
  // Exported menu link: management_entities:<firstchild>
  $menu_links['management_entities:<firstchild>'] = array(
    'menu_name' => 'management',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Entities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'management_entities:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_find-content:admin/content
  $menu_links['management_find-content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Find Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Find and manage content.',
      ),
      'identifier' => 'management_find-content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'management_my-workbench:admin/workbench',
  );
  // Exported menu link: management_flush-cache:flush-cache
  $menu_links['management_flush-cache:flush-cache'] = array(
    'menu_name' => 'management',
    'link_path' => 'flush-cache',
    'router_path' => 'flush-cache',
    'link_title' => 'Flush Cache',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_flush-cache:flush-cache',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_manage-display:admin/structure/taxonomy/news_type/display
  $menu_links['management_manage-display:admin/structure/taxonomy/news_type/display'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/news_type/display',
    'router_path' => 'admin/structure/taxonomy/%/display',
    'link_title' => 'Manage display',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-display:admin/structure/taxonomy/news_type/display',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_news-type:admin/structure/taxonomy/news_type',
  );
  // Exported menu link: management_manage-display:admin/structure/taxonomy/panopoly_categories/display
  $menu_links['management_manage-display:admin/structure/taxonomy/panopoly_categories/display'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/panopoly_categories/display',
    'router_path' => 'admin/structure/taxonomy/%/display',
    'link_title' => 'Manage display',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-display:admin/structure/taxonomy/panopoly_categories/display',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_categories:admin/structure/taxonomy/panopoly_categories',
  );
  // Exported menu link: management_manage-display:admin/structure/types/manage/page/display/full
  $menu_links['management_manage-display:admin/structure/types/manage/page/display/full'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/page/display/full',
    'router_path' => 'admin/structure/types/manage/%/display/full',
    'link_title' => 'Manage display',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-display:admin/structure/types/manage/page/display/full',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_page:admin/structure/types/manage/page',
  );
  // Exported menu link: management_manage-display:admin/structure/types/manage/simplenews/display/email_html
  $menu_links['management_manage-display:admin/structure/types/manage/simplenews/display/email_html'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/simplenews/display/email_html',
    'router_path' => 'admin/structure/types/manage/%/display/email_html',
    'link_title' => 'Manage display',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-display:admin/structure/types/manage/simplenews/display/email_html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_newsletters:admin/structure/types/manage/simplenews',
  );
  // Exported menu link: management_manage-display:admin/structure/types/manage/webform/display
  $menu_links['management_manage-display:admin/structure/types/manage/webform/display'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/webform/display',
    'router_path' => 'admin/structure/types/manage/%/display',
    'link_title' => 'Manage display',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-display:admin/structure/types/manage/webform/display',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_webforms:admin/structure/types/manage/webform',
  );
  // Exported menu link: management_manage-fields:admin/structure/taxonomy/news_type/fields
  $menu_links['management_manage-fields:admin/structure/taxonomy/news_type/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/news_type/fields',
    'router_path' => 'admin/structure/taxonomy/%/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-fields:admin/structure/taxonomy/news_type/fields',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_news-type:admin/structure/taxonomy/news_type',
  );
  // Exported menu link: management_manage-fields:admin/structure/taxonomy/panopoly_categories/fields
  $menu_links['management_manage-fields:admin/structure/taxonomy/panopoly_categories/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/panopoly_categories/fields',
    'router_path' => 'admin/structure/taxonomy/%/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-fields:admin/structure/taxonomy/panopoly_categories/fields',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_categories:admin/structure/taxonomy/panopoly_categories',
  );
  // Exported menu link: management_manage-fields:admin/structure/types/manage/news/fields
  $menu_links['management_manage-fields:admin/structure/types/manage/news/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/news/fields',
    'router_path' => 'admin/structure/types/manage/%/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-fields:admin/structure/types/manage/news/fields',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_news:admin/structure/types/manage/news/display/full',
  );
  // Exported menu link: management_manage-fields:admin/structure/types/manage/page/fields
  $menu_links['management_manage-fields:admin/structure/types/manage/page/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/page/fields',
    'router_path' => 'admin/structure/types/manage/%/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-fields:admin/structure/types/manage/page/fields',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_page:admin/structure/types/manage/page',
  );
  // Exported menu link: management_manage-fields:admin/structure/types/manage/simplenews/fields
  $menu_links['management_manage-fields:admin/structure/types/manage/simplenews/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/simplenews/fields',
    'router_path' => 'admin/structure/types/manage/%/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-fields:admin/structure/types/manage/simplenews/fields',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_newsletters:admin/structure/types/manage/simplenews',
  );
  // Exported menu link: management_manage-fields:admin/structure/types/manage/webform/fields
  $menu_links['management_manage-fields:admin/structure/types/manage/webform/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/webform/fields',
    'router_path' => 'admin/structure/types/manage/%/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_manage-fields:admin/structure/types/manage/webform/fields',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_webforms:admin/structure/types/manage/webform',
  );
  // Exported menu link: management_news-type:admin/structure/taxonomy/news_type
  $menu_links['management_news-type:admin/structure/taxonomy/news_type'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/news_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'News Type',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_news-type:admin/structure/taxonomy/news_type',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_taxonomy:admin/structure/taxonomy',
  );
  // Exported menu link: management_news:admin/structure/types/manage/news/display/full
  $menu_links['management_news:admin/structure/types/manage/news/display/full'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/news/display/full',
    'router_path' => 'admin/structure/types/manage/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_news:admin/structure/types/manage/news/display/full',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_content-types:admin/structure/types',
  );
  // Exported menu link: management_newsletter:admin/workbench/create/node/add/simplenews
  $menu_links['management_newsletter:admin/workbench/create/node/add/simplenews'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench/create/node/add/simplenews',
    'router_path' => 'admin/workbench/create/node/add/simplenews',
    'link_title' => 'Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'A newsletter issue to be sent to subscribed email addresses.',
      ),
      'identifier' => 'management_newsletter:admin/workbench/create/node/add/simplenews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_create-content:node/add',
  );
  // Exported menu link: management_newsletters:admin/structure/types/manage/simplenews
  $menu_links['management_newsletters:admin/structure/types/manage/simplenews'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/simplenews',
    'router_path' => 'admin/structure/types/manage/%',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_newsletters:admin/structure/types/manage/simplenews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_content-types:admin/structure/types',
  );
  // Exported menu link: management_page:admin/structure/types/manage/page
  $menu_links['management_page:admin/structure/types/manage/page'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/page',
    'router_path' => 'admin/structure/types/manage/%',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_page:admin/structure/types/manage/page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_content-types:admin/structure/types',
  );
  // Exported menu link: management_panelizer:admin/structure/taxonomy/panopoly_categories/panelizer/page_manager
  $menu_links['management_panelizer:admin/structure/taxonomy/panopoly_categories/panelizer/page_manager'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/panopoly_categories/panelizer/page_manager',
    'router_path' => 'admin/structure/taxonomy/%/panelizer/page_manager',
    'link_title' => 'Panelizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_panelizer:admin/structure/taxonomy/panopoly_categories/panelizer/page_manager',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_categories:admin/structure/taxonomy/panopoly_categories',
  );
  // Exported menu link: management_panelizer:admin/structure/types/manage/news/panelizer/page_manager
  $menu_links['management_panelizer:admin/structure/types/manage/news/panelizer/page_manager'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/news/panelizer/page_manager',
    'router_path' => 'admin/structure/types/manage/%/panelizer/page_manager',
    'link_title' => 'Panelizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_panelizer:admin/structure/types/manage/news/panelizer/page_manager',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_news:admin/structure/types/manage/news/display/full',
  );
  // Exported menu link: management_panelizer:admin/structure/types/manage/page/panelizer/page_manager
  $menu_links['management_panelizer:admin/structure/types/manage/page/panelizer/page_manager'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/page/panelizer/page_manager',
    'router_path' => 'admin/structure/types/manage/%/panelizer/page_manager',
    'link_title' => 'Panelizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_panelizer:admin/structure/types/manage/page/panelizer/page_manager',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_page:admin/structure/types/manage/page',
  );
  // Exported menu link: management_panelizer:admin/structure/types/manage/simplenews/panelizer/email_html
  $menu_links['management_panelizer:admin/structure/types/manage/simplenews/panelizer/email_html'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/simplenews/panelizer/email_html',
    'router_path' => 'admin/structure/types/manage/%/panelizer/email_html',
    'link_title' => 'Panelizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_panelizer:admin/structure/types/manage/simplenews/panelizer/email_html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_newsletters:admin/structure/types/manage/simplenews',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'management_my-workbench:admin/workbench',
  );
  // Exported menu link: management_webforms:admin/structure/types/manage/webform
  $menu_links['management_webforms:admin/structure/types/manage/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/webform',
    'router_path' => 'admin/structure/types/manage/%',
    'link_title' => 'Webforms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_webforms:admin/structure/types/manage/webform',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_content-types:admin/structure/types',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Create Content');
  t('Entities');
  t('Find Content');
  t('Flush Cache');
  t('Manage display');
  t('Manage fields');
  t('News');
  t('News Type');
  t('Newsletter');
  t('Newsletters');
  t('Page');
  t('Panelizer');
  t('Taxonomy');
  t('Webforms');


  return $menu_links;
}

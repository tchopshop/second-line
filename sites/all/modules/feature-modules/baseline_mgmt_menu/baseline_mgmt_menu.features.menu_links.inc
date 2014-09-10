<?php
/**
 * @file
 * baseline_mgmt_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function baseline_mgmt_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_:admin/config/content/formats/%
  $menu_links['management_:admin/config/content/formats/%'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats/%',
    'router_path' => 'admin/config/content/formats/%',
    'link_title' => '',
    'options' => array(
      'identifier' => 'management_:admin/config/content/formats/%',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_text-formats:admin/config/content/formats',
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_available-updates:admin/reports/updates
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_breakpoints:admin/config/media/breakpoints
  $menu_links['management_breakpoints:admin/config/media/breakpoints'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/breakpoints',
    'router_path' => 'admin/config/media/breakpoints',
    'link_title' => 'Breakpoints',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage breakpoints',
      ),
      'identifier' => 'management_breakpoints:admin/config/media/breakpoints',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
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
  // Exported menu link: management_ckeditor-link:admin/config/content/ckeditor_link
  $menu_links['management_ckeditor-link:admin/config/content/ckeditor_link'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor_link',
    'router_path' => 'admin/config/content/ckeditor_link',
    'link_title' => 'CKEditor Link',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure CKEditor Link.',
      ),
      'identifier' => 'management_ckeditor-link:admin/config/content/ckeditor_link',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_ckeditor:admin/config/content/ckeditor
  $menu_links['management_ckeditor:admin/config/content/ckeditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor',
    'router_path' => 'admin/config/content/ckeditor',
    'link_title' => 'CKEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the rich text editor.',
      ),
      'identifier' => 'management_ckeditor:admin/config/content/ckeditor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_colorbox:admin/config/media/colorbox
  $menu_links['management_colorbox:admin/config/media/colorbox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/colorbox',
    'router_path' => 'admin/config/media/colorbox',
    'link_title' => 'Colorbox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Colorbox settings.',
      ),
      'identifier' => 'management_colorbox:admin/config/media/colorbox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_content-authoring:admin/config/content
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
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
  // Exported menu link: management_cron:admin/config/system/cron
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_custom-content-panes:admin/structure/ctools-content
  $menu_links['management_custom-content-panes:admin/structure/ctools-content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-content',
    'router_path' => 'admin/structure/ctools-content',
    'link_title' => 'Custom content panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom content panes.',
      ),
      'identifier' => 'management_custom-content-panes:admin/structure/ctools-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'management_create-content:node/add',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_default-config:admin/structure/defaultconfig
  $menu_links['management_default-config:admin/structure/defaultconfig'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/defaultconfig',
    'router_path' => 'admin/structure/defaultconfig',
    'link_title' => 'Default config',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Default config.',
      ),
      'identifier' => 'management_default-config:admin/structure/defaultconfig',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_features:admin/structure/features',
  );
  // Exported menu link: management_development:admin/config/development
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_display-suite:admin/structure/ds
  $menu_links['management_display-suite:admin/structure/ds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds',
    'router_path' => 'admin/structure/ds',
    'link_title' => 'Display Suite',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage layouts for entities and configure fields, view modes etc.',
      ),
      'identifier' => 'management_display-suite:admin/structure/ds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_extensions:admin/structure/extensions',
  );
  // Exported menu link: management_email-contact-form-settings:admin/config/content/email
  $menu_links['management_email-contact-form-settings:admin/config/content/email'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/email',
    'router_path' => 'admin/config/content/email',
    'link_title' => 'Email Contact Form Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer flood control settings for email contact forms',
      ),
      'identifier' => 'management_email-contact-form-settings:admin/config/content/email',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
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
  // Exported menu link: management_extensions:admin/structure/extensions
  $menu_links['management_extensions:admin/structure/extensions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/extensions',
    'router_path' => 'admin/structure/extensions',
    'link_title' => 'Extensions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage extensions.',
      ),
      'identifier' => 'management_extensions:admin/structure/extensions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_features:admin/structure/features
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_fences:admin/config/content/fences
  $menu_links['management_fences:admin/config/content/fences'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/fences',
    'router_path' => 'admin/config/content/fences',
    'link_title' => 'Fences',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default field wrapper.',
      ),
      'identifier' => 'management_fences:admin/config/content/fences',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_field-collections:admin/structure/field-collections
  $menu_links['management_field-collections:admin/structure/field-collections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field-collections',
    'router_path' => 'admin/structure/field-collections',
    'link_title' => 'Field collections',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage fields on field collections.',
      ),
      'identifier' => 'management_field-collections:admin/structure/field-collections',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_entities:<firstchild>',
  );
  // Exported menu link: management_field-list:admin/reports/fields
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_fieldable-panels-panes:admin/structure/fieldable-panels-panes
  $menu_links['management_fieldable-panels-panes:admin/structure/fieldable-panels-panes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/fieldable-panels-panes',
    'router_path' => 'admin/structure/fieldable-panels-panes',
    'link_title' => 'Fieldable Panels Panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage pane content types.',
      ),
      'identifier' => 'management_fieldable-panels-panes:admin/structure/fieldable-panels-panes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_panels:admin/structure/panels',
  );
  // Exported menu link: management_file-settings:admin/config/media/file-settings
  $menu_links['management_file-settings:admin/config/media/file-settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-settings',
    'router_path' => 'admin/config/media/file-settings',
    'link_title' => 'File settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure allowed file extensions, default alt and title sources, and the file upload wizard.',
      ),
      'identifier' => 'management_file-settings:admin/config/media/file-settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_file-types:admin/structure/file-types
  $menu_links['management_file-types:admin/structure/file-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/file-types',
    'router_path' => 'admin/structure/file-types',
    'link_title' => 'File types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage settings for the type of files used on your site.',
      ),
      'identifier' => 'management_file-types:admin/structure/file-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_entities:<firstchild>',
  );
  // Exported menu link: management_files:admin/content/file
  $menu_links['management_files:admin/content/file'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/file',
    'router_path' => 'admin/content/file',
    'link_title' => 'Files',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
      'identifier' => 'management_files:admin/content/file',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_find-content:admin/content',
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
  // Exported menu link: management_fitvids:admin/config/media/fitvids
  $menu_links['management_fitvids:admin/config/media/fitvids'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/fitvids',
    'router_path' => 'admin/config/media/fitvids',
    'link_title' => 'FitVids',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration for FitVids module',
      ),
      'identifier' => 'management_fitvids:admin/config/media/fitvids',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
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
  // Exported menu link: management_formatter-field-presets:admin/config/content/formatter-field-preset
  $menu_links['management_formatter-field-presets:admin/config/content/formatter-field-preset'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formatter-field-preset',
    'router_path' => 'admin/config/content/formatter-field-preset',
    'link_title' => 'Formatter field presets',
    'options' => array(
      'attributes' => array(
        'title' => 'Define serveral presets to be used with Field Formatter.',
      ),
      'identifier' => 'management_formatter-field-presets:admin/config/content/formatter-field-preset',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_formatters:admin/structure/formatters
  $menu_links['management_formatters:admin/structure/formatters'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/formatters',
    'router_path' => 'admin/structure/formatters',
    'link_title' => 'Formatters',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Formatters.',
      ),
      'identifier' => 'management_formatters:admin/structure/formatters',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_extensions:admin/structure/extensions',
  );
  // Exported menu link: management_frame:admin/structure/panels/frame
  $menu_links['management_frame:admin/structure/panels/frame'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels/frame',
    'router_path' => 'admin/structure/panels/frame',
    'link_title' => 'Frame',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_frame:admin/structure/panels/frame',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'management_panels:admin/structure/panels',
  );
  // Exported menu link: management_html-mail:admin/config/system/htmlmail
  $menu_links['management_html-mail:admin/config/system/htmlmail'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/htmlmail',
    'router_path' => 'admin/config/system/htmlmail',
    'link_title' => 'HTML Mail',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure HTML Mail system-wide settings.',
      ),
      'identifier' => 'management_html-mail:admin/config/system/htmlmail',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_mail-system:admin/config/system/mailsystem
  $menu_links['management_mail-system:admin/config/system/mailsystem'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/mailsystem',
    'router_path' => 'admin/config/system/mailsystem',
    'link_title' => 'Mail System',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure per-module Mail System settings.',
      ),
      'identifier' => 'management_mail-system:admin/config/system/mailsystem',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
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
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_masquerade:admin/config/people/masquerade
  $menu_links['management_masquerade:admin/config/people/masquerade'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/masquerade',
    'router_path' => 'admin/config/people/masquerade',
    'link_title' => 'Masquerade',
    'options' => array(
      'attributes' => array(
        'title' => 'Masquerade module allows administrators to masquerade as other users.',
      ),
      'identifier' => 'management_masquerade:admin/config/people/masquerade',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_media-browser-settings:admin/config/media/browser
  $menu_links['management_media-browser-settings:admin/config/media/browser'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/browser',
    'router_path' => 'admin/config/media/browser',
    'link_title' => 'Media browser settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behavior and display of the media browser.',
      ),
      'identifier' => 'management_media-browser-settings:admin/config/media/browser',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_media:admin/config/media
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_menu-block:admin/config/user-interface/menu-block
  $menu_links['management_menu-block:admin/config/user-interface/menu-block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/menu-block',
    'router_path' => 'admin/config/user-interface/menu-block',
    'link_title' => 'Menu block',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure menu block.',
      ),
      'identifier' => 'management_menu-block:admin/config/user-interface/menu-block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_menus:admin/structure/menu
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_mini-panels:admin/structure/mini-panels
  $menu_links['management_mini-panels:admin/structure/mini-panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete mini panels, which can be used as blocks or content panes in other panels.',
      ),
      'identifier' => 'management_mini-panels:admin/structure/mini-panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_panels:admin/structure/panels',
  );
  // Exported menu link: management_module-filter:admin/config/user-interface/modulefilter
  $menu_links['management_module-filter:admin/config/user-interface/modulefilter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/modulefilter',
    'router_path' => 'admin/config/user-interface/modulefilter',
    'link_title' => 'Module filter',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for Module Filter.',
      ),
      'identifier' => 'management_module-filter:admin/config/user-interface/modulefilter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_modules:admin/modules
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_my-workbench:admin/workbench
  $menu_links['management_my-workbench:admin/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My Workbench area',
      ),
      'identifier' => 'management_my-workbench:admin/workbench',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_name-field:admin/config/content/name
  $menu_links['management_name-field:admin/config/content/name'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/name',
    'router_path' => 'admin/config/content/name',
    'link_title' => 'Name field',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure, edit and maintain names and name custom formats.',
      ),
      'identifier' => 'management_name-field:admin/config/content/name',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
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
  // Exported menu link: management_news:admin/workbench/create/node/add/news
  $menu_links['management_news:admin/workbench/create/node/add/news'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench/create/node/add/news',
    'router_path' => 'admin/workbench/create/node/add/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => 'News articles or blog entries',
      ),
      'identifier' => 'management_news:admin/workbench/create/node/add/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_create-content:node/add',
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
  // Exported menu link: management_newsletters:admin/config/services/simplenews
  $menu_links['management_newsletters:admin/config/services/simplenews'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/simplenews',
    'router_path' => 'admin/config/services/simplenews',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure your sites newsletters.',
      ),
      'identifier' => 'management_newsletters:admin/config/services/simplenews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
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
  // Exported menu link: management_page:admin/workbench/create/node/add/page
  $menu_links['management_page:admin/workbench/create/node/add/page'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench/create/node/add/page',
    'router_path' => 'admin/workbench/create/node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Basic pages in the menu system and/or unique landing pages',
      ),
      'identifier' => 'management_page:admin/workbench/create/node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_create-content:node/add',
  );
  // Exported menu link: management_pages:admin/structure/pages
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_panels:admin/structure/panels',
  );
  // Exported menu link: management_panelizer:admin/config/content/panelizer
  $menu_links['management_panelizer:admin/config/content/panelizer'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/panelizer',
    'router_path' => 'admin/config/content/panelizer',
    'link_title' => 'Panelizer',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure panelizer availability and defaults',
      ),
      'identifier' => 'management_panelizer:admin/config/content/panelizer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
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
  // Exported menu link: management_panels:admin/structure/panels
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_paragraph-bundles:admin/structure/paragraphs
  $menu_links['management_paragraph-bundles:admin/structure/paragraphs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/paragraphs',
    'router_path' => 'admin/structure/paragraphs',
    'link_title' => 'Paragraph Bundles',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Paragraph bundles',
      ),
      'identifier' => 'management_paragraph-bundles:admin/structure/paragraphs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_entities:<firstchild>',
  );
  // Exported menu link: management_people:admin/config/people
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_people:admin/people
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_performance:admin/config/development/performance
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_picture:admin/config/media/picture
  $menu_links['management_picture:admin/config/media/picture'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/picture',
    'router_path' => 'admin/config/media/picture',
    'link_title' => 'Picture',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Pictures',
      ),
      'identifier' => 'management_picture:admin/config/media/picture',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_real-name:admin/config/people/realname
  $menu_links['management_real-name:admin/config/people/realname'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/realname',
    'router_path' => 'admin/config/people/realname',
    'link_title' => 'Real name',
    'options' => array(
      'attributes' => array(
        'title' => 'Use tokens to configure how user names are displayed.',
      ),
      'identifier' => 'management_real-name:admin/config/people/realname',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_recent-hits:admin/reports/hits
  $menu_links['management_recent-hits:admin/reports/hits'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/hits',
    'router_path' => 'admin/reports/hits',
    'link_title' => 'Recent hits',
    'options' => array(
      'attributes' => array(
        'title' => 'View pages that have recently been visited.',
      ),
      'identifier' => 'management_recent-hits:admin/reports/hits',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_reports:admin/reports
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_rules:admin/config/workflow/rules
  $menu_links['management_rules:admin/config/workflow/rules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
      'identifier' => 'management_rules:admin/config/workflow/rules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workflow:admin/config/workflow',
  );
  // Exported menu link: management_scheduler:admin/config/content/scheduler
  $menu_links['management_scheduler:admin/config/content/scheduler'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/scheduler',
    'router_path' => 'admin/config/content/scheduler',
    'link_title' => 'Scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for scheduled publishing and unpublishing, run the lightweight cron and check your servers clock time.',
      ),
      'identifier' => 'management_scheduler:admin/config/content/scheduler',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_smtp-authentication-support:admin/config/system/smtp
  $menu_links['management_smtp-authentication-support:admin/config/system/smtp'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/smtp',
    'router_path' => 'admin/config/system/smtp',
    'link_title' => 'SMTP Authentication Support',
    'options' => array(
      'attributes' => array(
        'title' => 'Allow for site emails to be sent through an SMTP server of your choice.',
      ),
      'identifier' => 'management_smtp-authentication-support:admin/config/system/smtp',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_stacks:admin/structure/panels/frame/stacks
  $menu_links['management_stacks:admin/structure/panels/frame/stacks'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels/frame/stacks',
    'router_path' => 'admin/structure/panels/frame/stacks',
    'link_title' => 'Stacks',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete stacks, single-dimension compilations of panels layouts.',
      ),
      'identifier' => 'management_stacks:admin/structure/panels/frame/stacks',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_frame:admin/structure/panels/frame',
  );
  // Exported menu link: management_statistics:admin/config/system/statistics
  $menu_links['management_statistics:admin/config/system/statistics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/statistics',
    'router_path' => 'admin/config/system/statistics',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Control details about what and how your site logs access statistics.',
      ),
      'identifier' => 'management_statistics:admin/config/system/statistics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_status-report:admin/reports/status
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_string-overrides:admin/config/regional/stringoverrides
  $menu_links['management_string-overrides:admin/config/regional/stringoverrides'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/stringoverrides',
    'router_path' => 'admin/config/regional/stringoverrides',
    'link_title' => 'String overrides',
    'options' => array(
      'attributes' => array(
        'title' => 'Provides a quick and easy way of replacing text on the site.',
      ),
      'identifier' => 'management_string-overrides:admin/config/regional/stringoverrides',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_strongarm:admin/config/development/strongarm
  $menu_links['management_strongarm:admin/config/development/strongarm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/strongarm',
    'router_path' => 'admin/config/development/strongarm',
    'link_title' => 'Strongarm',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Drupal variable settings that have been strongarmed.',
      ),
      'identifier' => 'management_strongarm:admin/config/development/strongarm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_structure:admin/structure
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_system:admin/config/system
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_tablefield:admin/config/content/tablefield
  $menu_links['management_tablefield:admin/config/content/tablefield'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/tablefield',
    'router_path' => 'admin/config/content/tablefield',
    'link_title' => 'tablefield',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration for the tablefield module',
      ),
      'identifier' => 'management_tablefield:admin/config/content/tablefield',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
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
  // Exported menu link: management_text-formats:admin/config/content/formats
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_title-settings:admin/config/content/title
  $menu_links['management_title-settings:admin/config/content/title'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/title',
    'router_path' => 'admin/config/content/title',
    'link_title' => 'Title settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the Title module.',
      ),
      'identifier' => 'management_title-settings:admin/config/content/title',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-pages:admin/reports/pages
  $menu_links['management_top-pages:admin/reports/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/pages',
    'router_path' => 'admin/reports/pages',
    'link_title' => 'Top pages',
    'options' => array(
      'attributes' => array(
        'title' => 'View pages that have been hit frequently.',
      ),
      'identifier' => 'management_top-pages:admin/reports/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-referrers:admin/reports/referrers
  $menu_links['management_top-referrers:admin/reports/referrers'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/referrers',
    'router_path' => 'admin/reports/referrers',
    'link_title' => 'Top referrers',
    'options' => array(
      'attributes' => array(
        'title' => 'View top referrers.',
      ),
      'identifier' => 'management_top-referrers:admin/reports/referrers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-visitors:admin/reports/visitors
  $menu_links['management_top-visitors:admin/reports/visitors'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/visitors',
    'router_path' => 'admin/reports/visitors',
    'link_title' => 'Top visitors',
    'options' => array(
      'attributes' => array(
        'title' => 'View visitors that hit many pages.',
      ),
      'identifier' => 'management_top-visitors:admin/reports/visitors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_web-services:admin/config/services
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_webform-settings:admin/config/content/webform
  $menu_links['management_webform-settings:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
      'identifier' => 'management_webform-settings:admin/config/content/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_webform:admin/workbench/create/node/add/webform
  $menu_links['management_webform:admin/workbench/create/node/add/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench/create/node/add/webform',
    'router_path' => 'admin/workbench/create/node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'management_webform:admin/workbench/create/node/add/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'management_create-content:node/add',
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
  // Exported menu link: management_workbench-moderation:admin/config/workbench/moderation
  $menu_links['management_workbench-moderation:admin/config/workbench/moderation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/moderation',
    'router_path' => 'admin/config/workbench/moderation',
    'link_title' => 'Workbench Moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure content moderation.',
      ),
      'identifier' => 'management_workbench-moderation:admin/config/workbench/moderation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workbench:admin/config/workbench',
  );
  // Exported menu link: management_workbench:admin/config/workbench
  $menu_links['management_workbench:admin/config/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench',
    'router_path' => 'admin/config/workbench',
    'link_title' => 'Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench',
      ),
      'identifier' => 'management_workbench:admin/config/workbench',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_workflow:admin/config/workflow
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -38,
    'customized' => 1,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account settings');
  t('Actions');
  t('Administration');
  t('Appearance');
  t('Available updates');
  t('Backup and Migrate');
  t('Breakpoints');
  t('CKEditor');
  t('CKEditor Link');
  t('Categories');
  t('Clean URLs');
  t('Colorbox');
  t('Configuration');
  t('Content authoring');
  t('Content types');
  t('Create Content');
  t('Cron');
  t('Custom content panes');
  t('Date API');
  t('Date Popup');
  t('Date and time');
  t('Default config');
  t('Development');
  t('Display Suite');
  t('Email Contact Form Settings');
  t('Entities');
  t('Extensions');
  t('Features');
  t('Fences');
  t('Field collections');
  t('Field list');
  t('Fieldable Panels Panes');
  t('File settings');
  t('File system');
  t('File types');
  t('Files');
  t('Find Content');
  t('FitVids');
  t('Flush Cache');
  t('Formatter field presets');
  t('Formatters');
  t('Frame');
  t('HTML Mail');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Logging and errors');
  t('Mail System');
  t('Main menu');
  t('Maintenance mode');
  t('Manage display');
  t('Manage fields');
  t('Management');
  t('Masquerade');
  t('Media');
  t('Media browser settings');
  t('Menu block');
  t('Menus');
  t('Mini panels');
  t('Module filter');
  t('Modules');
  t('My Workbench');
  t('Name field');
  t('Navigation');
  t('News');
  t('News Type');
  t('Newsletter');
  t('Newsletters');
  t('Page');
  t('Pages');
  t('Panelizer');
  t('Panels');
  t('Paragraph Bundles');
  t('People');
  t('Performance');
  t('Picture');
  t('RSS publishing');
  t('Real name');
  t('Recent hits');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Reports');
  t('Rules');
  t('SMTP Authentication Support');
  t('Scheduler');
  t('Search and metadata');
  t('Search settings');
  t('Site information');
  t('Stacks');
  t('Statistics');
  t('Status report');
  t('String overrides');
  t('Strongarm');
  t('Structure');
  t('System');
  t('Taxonomy');
  t('Text formats');
  t('Title settings');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top pages');
  t('Top referrers');
  t('Top search phrases');
  t('Top visitors');
  t('URL aliases');
  t('User interface');
  t('User menu');
  t('Views');
  t('Views plugins');
  t('Web services');
  t('Webform');
  t('Webform settings');
  t('Webforms');
  t('Workbench');
  t('Workbench Moderation');
  t('Workflow');
  t('jQuery update');
  t('tablefield');


  return $menu_links;
}

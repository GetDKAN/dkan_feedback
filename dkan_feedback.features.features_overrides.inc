<?php
/**
 * @file
 * dkan_feedback.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dkan_feedback_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-f1e7011f-4d87-4c82-a8eb-fe43c08bf8eb"] = (object) array(
      'pid' => 'new-f1e7011f-4d87-4c82-a8eb-fe43c08bf8eb',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'feedback-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'f1e7011f-4d87-4c82-a8eb-fe43c08bf8eb',
    );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|contentmain|1"] = 'new-f1e7011f-4d87-4c82-a8eb-fe43c08bf8eb';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-1ee5d84c-1ea4-4726-ba4d-291779f9c493|position"] = 1;
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-263bb85d-b2bd-4d15-8042-6a1d6ae6f7a0"] = (object) array(
      'pid' => 'new-263bb85d-b2bd-4d15-8042-6a1d6ae6f7a0',
      'panel' => 'contentmain',
      'type' => 'custom',
      'subtype' => 'custom',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'admin_title' => '',
        'title' => '',
        'body' => '<p>Don\'t see what you\'re looking for?</p>
        <a href="/feedback/add" class="btn btn-primary btn-sm"><i class="fa fa-lg fa-"></i> Add Feedback</a>',
        'format' => 'full_html',
        'substitute' => TRUE,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'feedback-submit-pane',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '263bb85d-b2bd-4d15-8042-6a1d6ae6f7a0',
    );
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|contentmain|0"] = 'new-263bb85d-b2bd-4d15-8042-6a1d6ae6f7a0';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|contentmain|1"] = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';

 return $overrides;
}

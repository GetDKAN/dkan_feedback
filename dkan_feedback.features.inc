<?php
/**
 * @file
 * dkan_feedback.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dkan_feedback_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dkan_feedback_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function dkan_feedback_field_default_field_bases_alter(&$data) {
  if (isset($data['og_group_ref'])) {
    $data['og_group_ref']['settings']['handler_settings']['behaviors']['views-select-list']['status'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function dkan_feedback_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context'])) {
    $data['node_view_panel_context']->conf['display']->content['new-f1e7011f-4d87-4c82-a8eb-fe43c08bf8eb'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panels['contentmain'][1] = 'new-f1e7011f-4d87-4c82-a8eb-fe43c08bf8eb'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function dkan_feedback_default_page_manager_pages_alter(&$data) {
  if (isset($data['datasets'])) {
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->content['new-1ee5d84c-1ea4-4726-ba4d-291779f9c493']->position = 1; /* WAS: 0 */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->content['new-263bb85d-b2bd-4d15-8042-6a1d6ae6f7a0'] = (object) array(
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
        ); /* WAS: '' */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->panels['contentmain'][0] = 'new-263bb85d-b2bd-4d15-8042-6a1d6ae6f7a0'; /* WAS: 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493' */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->panels['contentmain'][1] = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493'; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function dkan_feedback_node_info() {
  $items = array(
    'feedback' => array(
      'name' => t('Feedback'),
      'base' => 'node_content',
      'description' => t('Feedback on DKAN content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

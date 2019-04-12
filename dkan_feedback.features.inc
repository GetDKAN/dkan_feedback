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
 * Implements hook_custom_pub_defaults().
 */
function dkan_feedback_custom_pub_defaults() {
  $options = array();
  // Exported option: archived
  $options['archived'] = array(
    'type' => 'archived',
    'name' => t('Archived'),
    'node_types' => array(
      'feedback' => t('Feedback'),
    ),
  );

  return $options;
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

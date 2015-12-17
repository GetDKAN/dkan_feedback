<?php
/**
 * @file
 * dkan_feedback.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dkan_feedback_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feedback|node|feedback|default';
  $field_group->group_name = 'group_feedback';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feedback';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feedback',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'body',
      2 => 'field_contact_email',
      3 => 'field_feedback_entity_reference',
      4 => 'field_feedback_type',
      5 => 'field_tags',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'label' => TRUE,
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'cells' => FALSE,
        'classes' => 'group-feedback field-group-table',
      ),
    ),
  );
  $export['group_feedback|node|feedback|default'] = $field_group;

  return $export;
}

<?php
/**
 * @file
 * dkan_feedback.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dkan_feedback_taxonomy_default_vocabularies() {
  return array(
    'feedback_type' => array(
      'name' => 'Feedback Type',
      'machine_name' => 'feedback_type',
      'description' => 'Taxonomy to categorize the different types of feedback that can be applied to a DKAN site.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

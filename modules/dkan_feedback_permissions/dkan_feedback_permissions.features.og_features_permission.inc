<?php
/**
 * @file
 * dkan_feedback_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function dkan_feedback_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:access authoring options of feedback content'
  $permissions['node:group:access authoring options of feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:access publishing options of feedback content'
  $permissions['node:group:access publishing options of feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:access revisions options of feedback content'
  $permissions['node:group:access revisions options of feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:create feedback content'
  $permissions['node:group:create feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete any feedback content'
  $permissions['node:group:delete any feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete own feedback content'
  $permissions['node:group:delete own feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any feedback content'
  $permissions['node:group:update any feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update own feedback content'
  $permissions['node:group:update own feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view any unpublished feedback content'
  $permissions['node:group:view any unpublished feedback content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}

<?php
/**
 * @file
 * dkan_feedback_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dkan_feedback_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'create feedback content'.
  $permissions['create feedback content'] = array(
    'name' => 'create feedback content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feedback content'.
  $permissions['delete any feedback content'] = array(
    'name' => 'delete any feedback content',
    'roles' => array(
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feedback content'.
  $permissions['delete own feedback content'] = array(
    'name' => 'delete own feedback content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feedback content'.
  $permissions['edit any feedback content'] = array(
    'name' => 'edit any feedback content',
    'roles' => array(
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own feedback content'.
  $permissions['edit own feedback content'] = array(
    'name' => 'edit own feedback content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  return $permissions;
}

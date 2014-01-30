<?php
/**
 * @file
 * off_featured_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function off_featured_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag featured'.
  $permissions['flag featured'] = array(
    'name' => 'flag featured',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag featured'.
  $permissions['unflag featured'] = array(
    'name' => 'unflag featured',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'flag',
  );

  return $permissions;
}

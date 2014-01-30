<?php
/**
 * @file
 * off_featured_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function off_featured_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function off_featured_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured".
  $flags['featured'] = array(
    'entity_type' => 'node',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Feature this item',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfeature this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'This will set the front page featured item, are you sure you want to do this?',
    'unflag_confirmation' => 'This will remove the front page featured item, and the last item featured will show instead. Do you want to do this?',
    'api_version' => 3,
    'module' => 'off_featured_feature',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

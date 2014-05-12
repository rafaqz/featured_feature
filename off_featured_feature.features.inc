<?php
/**
 * @file
 * off_featured_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function off_featured_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
    'flag_short' => 'Feature this content',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfeature this content',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
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
    'form_flagging_help' => 'This will set the front page featured content. You can remove this flag later to return it to the previous content.

Also add extra text, images, video or any html to be displayed below the featured content.',
    'form_flagging_button' => '',
    'form_flagging_delete_button' => '',
    'form_unflagging_help' => 'This will remove the front page featured content, and the last content featured will show instead.',
    'form_unflagging_button' => '',
    'form_unflag_link_leads_to_edit' => 0,
    'form_interaction' => 'default',
    'module' => 'off_featured_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

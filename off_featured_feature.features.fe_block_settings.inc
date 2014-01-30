<?php
/**
 * @file
 * off_featured_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function off_featured_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-featured-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

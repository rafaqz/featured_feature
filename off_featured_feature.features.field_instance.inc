<?php
/**
 * @file
 * off_featured_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function off_featured_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'flagging-featured-field_featured_extras'
  $field_instances['flagging-featured-field_featured_extras'] = array(
    'bundle' => 'featured',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'flagging',
    'field_name' => 'field_featured_extras',
    'label' => 'Extras',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'comment_reply' => 0,
          'email' => 0,
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 0,
          'wiki' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'comment_reply' => array(
              'weight' => -45,
            ),
            'email' => array(
              'weight' => -44,
            ),
            'filtered_html' => array(
              'weight' => -48,
            ),
            'full_html' => array(
              'weight' => -50,
            ),
            'php_code' => array(
              'weight' => -49,
            ),
            'plain_text' => array(
              'weight' => -47,
            ),
            'wiki' => array(
              'weight' => -46,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Extras');

  return $field_instances;
}

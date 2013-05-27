<?php
/**
 * @file
 * phpstorm_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function phpstorm_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pstorm_theme|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pstorm_theme';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_theme_file' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'btn field-name-theme_file',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|pstorm_theme|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pstorm_theme|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pstorm_theme';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'field_theme_file' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'btn field-name-theme_file',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|pstorm_theme|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function phpstorm_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pstorm_theme|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pstorm_theme';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_screenshots',
      ),
      'left' => array(
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_theme_file',
      ),
    ),
    'fields' => array(
      'field_screenshots' => 'header',
      'body' => 'left',
      'field_theme_file' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|pstorm_theme|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pstorm_theme|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pstorm_theme';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_screenshots',
        1 => 'title',
        2 => 'body',
        3 => 'field_theme_file',
        4 => 'field_author_name',
        5 => 'field_author_url',
      ),
    ),
    'fields' => array(
      'field_screenshots' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_theme_file' => 'ds_content',
      'field_author_name' => 'ds_content',
      'field_author_url' => 'ds_content',
    ),
    'limit' => array(
      'field_screenshots' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|pstorm_theme|teaser'] = $ds_layout;

  return $export;
}

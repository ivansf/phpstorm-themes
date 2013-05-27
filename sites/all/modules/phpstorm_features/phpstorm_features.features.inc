<?php
/**
 * @file
 * phpstorm_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phpstorm_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function phpstorm_features_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function phpstorm_features_node_info() {
  $items = array(
    'pstorm_theme' => array(
      'name' => t('Theme'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

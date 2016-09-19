<?php
/**
 * @file
 * presentation_funding_data_type_a.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function presentation_funding_data_type_a_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function presentation_funding_data_type_a_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function presentation_funding_data_type_a_node_info() {
  $items = array(
    'data' => array(
      'name' => t('Data'),
      'base' => 'node_content',
      'description' => t('Content type that holds reporting data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

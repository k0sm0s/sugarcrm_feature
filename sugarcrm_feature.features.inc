<?php
/**
 * @file
 * sugarcrm_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sugarcrm_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sugarcrm_feature_node_info() {
  $items = array(
    'sugar_jcrmtime' => array(
      'name' => t('Sugar JCRMTime'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sugarcrm_case' => array(
      'name' => t('SugarCRM Case'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

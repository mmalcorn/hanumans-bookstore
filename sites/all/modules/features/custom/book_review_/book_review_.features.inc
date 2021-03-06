<?php
/**
 * @file
 * book_review_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function book_review__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function book_review__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function book_review__node_info() {
  $items = array(
    'book_review_' => array(
      'name' => t('Book Review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Book Title '),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * radix_single_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function radix_single_page_node_info() {
  $items = array(
    'single_page' => array(
      'name' => t('Single page'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a single page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

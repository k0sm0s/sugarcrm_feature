<?php
/**
 * @file
 * sugarcrm_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sugarcrm_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sugarjcrmtime';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SugarJCRMTime';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SugarJCRMTime';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: sugar_created_by_name */
  $handler->display->display_options['fields']['field_sugar_created_by_name']['id'] = 'field_sugar_created_by_name';
  $handler->display->display_options['fields']['field_sugar_created_by_name']['table'] = 'field_data_field_sugar_created_by_name';
  $handler->display->display_options['fields']['field_sugar_created_by_name']['field'] = 'field_sugar_created_by_name';
  $handler->display->display_options['fields']['field_sugar_created_by_name']['label'] = 'Created by';
  /* Field: Content: sugar_date */
  $handler->display->display_options['fields']['field_sugar_date']['id'] = 'field_sugar_date';
  $handler->display->display_options['fields']['field_sugar_date']['table'] = 'field_data_field_sugar_date';
  $handler->display->display_options['fields']['field_sugar_date']['field'] = 'field_sugar_date';
  $handler->display->display_options['fields']['field_sugar_date']['label'] = 'Date';
  /* Field: Content: sugar_description */
  $handler->display->display_options['fields']['field_sugar_description']['id'] = 'field_sugar_description';
  $handler->display->display_options['fields']['field_sugar_description']['table'] = 'field_data_field_sugar_description';
  $handler->display->display_options['fields']['field_sugar_description']['field'] = 'field_sugar_description';
  $handler->display->display_options['fields']['field_sugar_description']['label'] = 'Description';
  /* Field: Content: sugar_time_length */
  $handler->display->display_options['fields']['field_sugar_time_length']['id'] = 'field_sugar_time_length';
  $handler->display->display_options['fields']['field_sugar_time_length']['table'] = 'field_data_field_sugar_time_length';
  $handler->display->display_options['fields']['field_sugar_time_length']['field'] = 'field_sugar_time_length';
  $handler->display->display_options['fields']['field_sugar_time_length']['label'] = 'Time';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sugar_jcrmtime' => 'sugar_jcrmtime',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sugarjcrmtime';
  $export['sugarjcrmtime'] = $view;

  return $export;
}

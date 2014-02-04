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
  $view->name = 'sugarcrm_cases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SugarCRM Cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SugarCRM Cases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sugar_name' => 'field_sugar_name',
    'field_sugar_max_hours_c' => 'field_sugar_max_hours_c',
    'field_sugar_reg_hours_c' => 'field_sugar_reg_hours_c',
    'field_sugar_rest_hours_c' => 'field_sugar_rest_hours_c',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sugar_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_max_hours_c' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_reg_hours_c' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_rest_hours_c' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: sugar_id */
  $handler->display->display_options['fields']['field_sugar_id']['id'] = 'field_sugar_id';
  $handler->display->display_options['fields']['field_sugar_id']['table'] = 'field_data_field_sugar_id';
  $handler->display->display_options['fields']['field_sugar_id']['field'] = 'field_sugar_id';
  $handler->display->display_options['fields']['field_sugar_id']['label'] = 'Id';
  $handler->display->display_options['fields']['field_sugar_id']['exclude'] = TRUE;
  /* Field: Content: sugar_name */
  $handler->display->display_options['fields']['field_sugar_name']['id'] = 'field_sugar_name';
  $handler->display->display_options['fields']['field_sugar_name']['table'] = 'field_data_field_sugar_name';
  $handler->display->display_options['fields']['field_sugar_name']['field'] = 'field_sugar_name';
  $handler->display->display_options['fields']['field_sugar_name']['label'] = 'Case';
  $handler->display->display_options['fields']['field_sugar_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sugar_name']['alter']['path'] = 'sugarjcrmtime/[field_sugar_id]';
  $handler->display->display_options['fields']['field_sugar_name']['alter']['absolute'] = TRUE;
  /* Field: Content: sugar_max_hours_c */
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['id'] = 'field_sugar_max_hours_c';
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['table'] = 'field_data_field_sugar_max_hours_c';
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['field'] = 'field_sugar_max_hours_c';
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['label'] = 'Max hours';
  /* Field: Content: sugar_reg_hours_c */
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['id'] = 'field_sugar_reg_hours_c';
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['table'] = 'field_data_field_sugar_reg_hours_c';
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['field'] = 'field_sugar_reg_hours_c';
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['label'] = 'Reg. hours';
  /* Field: Content: sugar_rest_hours_c */
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['id'] = 'field_sugar_rest_hours_c';
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['table'] = 'field_data_field_sugar_rest_hours_c';
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['field'] = 'field_sugar_rest_hours_c';
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['label'] = 'Remaining hours';
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
    'sugarcrm_case' => 'sugarcrm_case',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sugarcrm_cases';
  $export['sugarcrm_cases'] = $view;

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
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sugar_case_name' => 'field_sugar_case_name',
    'field_sugar_created_by_name' => 'field_sugar_created_by_name',
    'field_sugar_date' => 'field_sugar_date',
    'field_sugar_description' => 'field_sugar_description',
    'field_sugar_time_length' => 'field_sugar_time_length',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sugar_case_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_created_by_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_description' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_time_length' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: sugar_case_name */
  $handler->display->display_options['fields']['field_sugar_case_name']['id'] = 'field_sugar_case_name';
  $handler->display->display_options['fields']['field_sugar_case_name']['table'] = 'field_data_field_sugar_case_name';
  $handler->display->display_options['fields']['field_sugar_case_name']['field'] = 'field_sugar_case_name';
  $handler->display->display_options['fields']['field_sugar_case_name']['label'] = 'Case';
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
  /* Contextual filter: Content: sugar_case_id (field_sugar_case_id) */
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['id'] = 'field_sugar_case_id_value';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['table'] = 'field_data_field_sugar_case_id';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['field'] = 'field_sugar_case_id_value';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sugar_case_id_value']['limit'] = '0';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: sugar_case_name (field_sugar_case_name) */
  $handler->display->display_options['filters']['field_sugar_case_name_value']['id'] = 'field_sugar_case_name_value';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['table'] = 'field_data_field_sugar_case_name';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['field'] = 'field_sugar_case_name_value';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sugar_case_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['operator_id'] = 'field_sugar_case_name_value_op';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['label'] = 'Case';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['operator'] = 'field_sugar_case_name_value_op';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['identifier'] = 'field_sugar_case_name_value';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: sugar_date (field_sugar_date) */
  $handler->display->display_options['filters']['field_sugar_date_value']['id'] = 'field_sugar_date_value';
  $handler->display->display_options['filters']['field_sugar_date_value']['table'] = 'field_data_field_sugar_date';
  $handler->display->display_options['filters']['field_sugar_date_value']['field'] = 'field_sugar_date_value';
  $handler->display->display_options['filters']['field_sugar_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_sugar_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['operator_id'] = 'field_sugar_date_value_op';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['operator'] = 'field_sugar_date_value_op';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['identifier'] = 'field_sugar_date_value';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_sugar_date_value']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sugarjcrmtime';
  $export['sugarjcrmtime'] = $view;

  return $export;
}

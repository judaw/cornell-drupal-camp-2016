<?php
/**
 * @file
 * presentation_funding_data_type_a.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function presentation_funding_data_type_a_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reporting Tool';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Here is our Export Button.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Field: Content: Fiscal Year */
  $handler->display->display_options['fields']['field_data_fiscal_year']['id'] = 'field_data_fiscal_year';
  $handler->display->display_options['fields']['field_data_fiscal_year']['table'] = 'field_data_field_data_fiscal_year';
  $handler->display->display_options['fields']['field_data_fiscal_year']['field'] = 'field_data_fiscal_year';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_data_name']['id'] = 'field_data_name';
  $handler->display->display_options['fields']['field_data_name']['table'] = 'field_data_field_data_name';
  $handler->display->display_options['fields']['field_data_name']['field'] = 'field_data_name';
  /* Field: Content: Grant Name */
  $handler->display->display_options['fields']['field_data_grant_name']['id'] = 'field_data_grant_name';
  $handler->display->display_options['fields']['field_data_grant_name']['table'] = 'field_data_field_data_grant_name';
  $handler->display->display_options['fields']['field_data_grant_name']['field'] = 'field_data_grant_name';
  $handler->display->display_options['fields']['field_data_grant_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_data_program']['id'] = 'field_data_program';
  $handler->display->display_options['fields']['field_data_program']['table'] = 'field_data_field_data_program';
  $handler->display->display_options['fields']['field_data_program']['field'] = 'field_data_program';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_data_department']['id'] = 'field_data_department';
  $handler->display->display_options['fields']['field_data_department']['table'] = 'field_data_field_data_department';
  $handler->display->display_options['fields']['field_data_department']['field'] = 'field_data_department';
  $handler->display->display_options['fields']['field_data_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_data_type']['id'] = 'field_data_type';
  $handler->display->display_options['fields']['field_data_type']['table'] = 'field_data_field_data_type';
  $handler->display->display_options['fields']['field_data_type']['field'] = 'field_data_type';
  /* Field: Content: Award */
  $handler->display->display_options['fields']['field_data_award']['id'] = 'field_data_award';
  $handler->display->display_options['fields']['field_data_award']['table'] = 'field_data_field_data_award';
  $handler->display->display_options['fields']['field_data_award']['field'] = 'field_data_award';
  $handler->display->display_options['fields']['field_data_award']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Fiscal Year (field_data_fiscal_year) */
  $handler->display->display_options['sorts']['field_data_fiscal_year_value']['id'] = 'field_data_fiscal_year_value';
  $handler->display->display_options['sorts']['field_data_fiscal_year_value']['table'] = 'field_data_field_data_fiscal_year';
  $handler->display->display_options['sorts']['field_data_fiscal_year_value']['field'] = 'field_data_fiscal_year_value';
  $handler->display->display_options['sorts']['field_data_fiscal_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Grant Name (field_data_grant_name) */
  $handler->display->display_options['sorts']['field_data_grant_name_tid']['id'] = 'field_data_grant_name_tid';
  $handler->display->display_options['sorts']['field_data_grant_name_tid']['table'] = 'field_data_field_data_grant_name';
  $handler->display->display_options['sorts']['field_data_grant_name_tid']['field'] = 'field_data_grant_name_tid';
  /* Sort criterion: Content: Name (field_data_name) */
  $handler->display->display_options['sorts']['field_data_name_value']['id'] = 'field_data_name_value';
  $handler->display->display_options['sorts']['field_data_name_value']['table'] = 'field_data_field_data_name';
  $handler->display->display_options['sorts']['field_data_name_value']['field'] = 'field_data_name_value';
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
    'data' => 'data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Fiscal Year (field_data_fiscal_year) */
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['id'] = 'field_data_fiscal_year_value';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['table'] = 'field_data_field_data_fiscal_year';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['field'] = 'field_data_fiscal_year_value';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['expose']['operator_id'] = 'field_data_fiscal_year_value_op';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['expose']['label'] = 'Fiscal Year';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['expose']['operator'] = 'field_data_fiscal_year_value_op';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['expose']['identifier'] = 'field_data_fiscal_year_value';
  $handler->display->display_options['filters']['field_data_fiscal_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Grant Name (field_data_grant_name) */
  $handler->display->display_options['filters']['field_data_grant_name_tid']['id'] = 'field_data_grant_name_tid';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['table'] = 'field_data_field_data_grant_name';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['field'] = 'field_data_grant_name_tid';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_data_grant_name_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_grant_name_tid']['expose']['operator_id'] = 'field_data_grant_name_tid_op';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['expose']['label'] = 'Grant Name';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['expose']['operator'] = 'field_data_grant_name_tid_op';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['expose']['identifier'] = 'field_data_grant_name_tid';
  $handler->display->display_options['filters']['field_data_grant_name_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_data_grant_name_tid']['vocabulary'] = 'data_grant_name';
  /* Filter criterion: Content: Department (field_data_department) */
  $handler->display->display_options['filters']['field_data_department_tid']['id'] = 'field_data_department_tid';
  $handler->display->display_options['filters']['field_data_department_tid']['table'] = 'field_data_field_data_department';
  $handler->display->display_options['filters']['field_data_department_tid']['field'] = 'field_data_department_tid';
  $handler->display->display_options['filters']['field_data_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_data_department_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_data_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_department_tid']['expose']['operator_id'] = 'field_data_department_tid_op';
  $handler->display->display_options['filters']['field_data_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_data_department_tid']['expose']['operator'] = 'field_data_department_tid_op';
  $handler->display->display_options['filters']['field_data_department_tid']['expose']['identifier'] = 'field_data_department_tid';
  $handler->display->display_options['filters']['field_data_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_data_department_tid']['vocabulary'] = 'data_department_tag';
  /* Filter criterion: Content: Program (field_data_program) */
  $handler->display->display_options['filters']['field_data_program_value']['id'] = 'field_data_program_value';
  $handler->display->display_options['filters']['field_data_program_value']['table'] = 'field_data_field_data_program';
  $handler->display->display_options['filters']['field_data_program_value']['field'] = 'field_data_program_value';
  $handler->display->display_options['filters']['field_data_program_value']['group'] = 1;
  $handler->display->display_options['filters']['field_data_program_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_program_value']['expose']['operator_id'] = 'field_data_program_value_op';
  $handler->display->display_options['filters']['field_data_program_value']['expose']['label'] = 'Program';
  $handler->display->display_options['filters']['field_data_program_value']['expose']['operator'] = 'field_data_program_value_op';
  $handler->display->display_options['filters']['field_data_program_value']['expose']['identifier'] = 'field_data_program_value';
  $handler->display->display_options['filters']['field_data_program_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type (field_data_type) */
  $handler->display->display_options['filters']['field_data_type_value']['id'] = 'field_data_type_value';
  $handler->display->display_options['filters']['field_data_type_value']['table'] = 'field_data_field_data_type';
  $handler->display->display_options['filters']['field_data_type_value']['field'] = 'field_data_type_value';
  $handler->display->display_options['filters']['field_data_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_data_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_value']['expose']['operator_id'] = 'field_data_type_value_op';
  $handler->display->display_options['filters']['field_data_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_data_type_value']['expose']['operator'] = 'field_data_type_value_op';
  $handler->display->display_options['filters']['field_data_type_value']['expose']['identifier'] = 'field_data_type_value';
  $handler->display->display_options['filters']['field_data_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'report';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'report/export';
  $export['report'] = $view;

  return $export;
}

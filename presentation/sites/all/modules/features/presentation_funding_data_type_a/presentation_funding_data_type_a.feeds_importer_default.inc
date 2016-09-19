<?php
/**
 * @file
 * presentation_funding_data_type_a.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function presentation_funding_data_type_a_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'data_importer_features';
  $feeds_importer->config = array(
    'name' => 'Data Content Type Importer: Feature Version',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'year',
            'target' => 'field_data_fiscal_year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'name',
            'target' => 'field_data_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'grantname',
            'target' => 'field_data_grant_name',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'program',
            'target' => 'field_data_program',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'department',
            'target' => 'field_data_department',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'type',
            'target' => 'field_data_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'award',
            'target' => 'field_data_award',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'data',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['data_importer_features'] = $feeds_importer;

  return $export;
}

<?php
/**
 * @file
 * presentation_funding_data_type_a.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function presentation_funding_data_type_a_taxonomy_default_vocabularies() {
  return array(
    'data_department_tag' => array(
      'name' => 'Department (Data)',
      'machine_name' => 'data_department_tag',
      'description' => 'Department Taxonomy for Data Content Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'data_grant_name' => array(
      'name' => 'Grant Name (Data)',
      'machine_name' => 'data_grant_name',
      'description' => 'Grant Name Taxonomy for Data Content Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

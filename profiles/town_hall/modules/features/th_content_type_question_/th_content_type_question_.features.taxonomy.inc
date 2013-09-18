<?php
/**
 * @file
 * th_content_type_question_.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function th_content_type_question__taxonomy_default_vocabularies() {
  return array(
    'th_issues' => array(
      'name' => 'Issues',
      'machine_name' => 'th_issues',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
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
    'th_regions' => array(
      'name' => 'Regions',
      'machine_name' => 'th_regions',
      'description' => '',
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

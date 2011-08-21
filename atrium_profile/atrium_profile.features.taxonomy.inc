<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function atrium_profile_taxonomy_default_vocabularies() {
  return array(
    'major' => array(
      'name' => 'Major',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_major',
      'weight' => '0',
      'nodes' => array(
        'group' => 'group',
        'profile' => 'profile',
      ),
    ),
    'school' => array(
      'name' => 'School',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_school',
      'weight' => '0',
      'nodes' => array(
        'group' => 'group',
        'profile' => 'profile',
      ),
    ),
  );
}

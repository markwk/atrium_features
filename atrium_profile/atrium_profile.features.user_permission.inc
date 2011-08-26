<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit field_birth_date
  $permissions['edit field_birth_date'] = array(
    'name' => 'edit field_birth_date',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_location_city
  $permissions['edit field_location_city'] = array(
    'name' => 'edit field_location_city',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_location_country
  $permissions['edit field_location_country'] = array(
    'name' => 'edit field_location_country',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_name_person_first
  $permissions['edit field_name_person_first'] = array(
    'name' => 'edit field_name_person_first',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_name_person_last
  $permissions['edit field_name_person_last'] = array(
    'name' => 'edit field_name_person_last',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_organization
  $permissions['edit field_profile_organization'] = array(
    'name' => 'edit field_profile_organization',
    'roles' => array(),
  );

  // Exported permission: edit field_profile_url
  $permissions['edit field_profile_url'] = array(
    'name' => 'edit field_profile_url',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_social_connect
  $permissions['edit field_social_connect'] = array(
    'name' => 'edit field_social_connect',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_twitter
  $permissions['edit field_twitter'] = array(
    'name' => 'edit field_twitter',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: view field_birth_date
  $permissions['view field_birth_date'] = array(
    'name' => 'view field_birth_date',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_location_city
  $permissions['view field_location_city'] = array(
    'name' => 'view field_location_city',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_location_country
  $permissions['view field_location_country'] = array(
    'name' => 'view field_location_country',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_name_person_first
  $permissions['view field_name_person_first'] = array(
    'name' => 'view field_name_person_first',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_name_person_last
  $permissions['view field_name_person_last'] = array(
    'name' => 'view field_name_person_last',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_organization
  $permissions['view field_profile_organization'] = array(
    'name' => 'view field_profile_organization',
    'roles' => array(),
  );

  // Exported permission: view field_profile_url
  $permissions['view field_profile_url'] = array(
    'name' => 'view field_profile_url',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_social_connect
  $permissions['view field_social_connect'] = array(
    'name' => 'view field_social_connect',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_twitter
  $permissions['view field_twitter'] = array(
    'name' => 'view field_twitter',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

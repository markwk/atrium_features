<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_blog_content_default_fields() {
  $fields = array();

  // Exported field: field_images
  $fields['blog-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'blog',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'image' => 'image',
        'imagecache_Large' => 'imagecache_Large',
        'imagecache_Medium' => 'imagecache_Medium',
        'imagecache_Small' => 'imagecache_Small',
        'auto' => 0,
        'link' => 0,
        'imagecache_AttachmentThumbnail' => 0,
        'imagecache_designkit-image-logo' => 0,
        'imagecache_fileview' => 0,
        'imagecache_imageboard-thumb' => 0,
        'imagecache_imageboard_image' => 0,
        'imagecache_user-m' => 0,
        'imagecache_user-s' => 0,
      ),
      'insert_default' => 'imagecache_Medium',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Images',
      'weight' => '-1',
      'description' => 'Upload Images, Choose Image Size and Insert into Content Text',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_referenced_book_page
  $fields['blog-field_referenced_book_page'] = array(
    'field_name' => 'field_referenced_book_page',
    'type_name' => 'blog',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'book' => 'book',
      'event' => 'event',
      'imageset' => 'imageset',
      'admin_message' => 0,
      'blog' => 0,
      'casetracker_basic_case' => 0,
      'feedapi_node' => 0,
      'group' => 0,
      'page' => 0,
      'profile' => 0,
      'casetracker_basic_project' => 0,
      'shoutbox' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => NULL,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_referenced_book_page][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Referenced Page',
      'weight' => '1',
      'description' => 'Type in the title of another post to add a reference.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Referenced Page');

  return $fields;
}

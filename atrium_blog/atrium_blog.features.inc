<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function atrium_blog_imagecache_default_presets() {
  $items = array(
    'Large' => array(
      'presetname' => 'Large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '580',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'Medium' => array(
      'presetname' => 'Medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '290',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'Small' => array(
      'presetname' => 'Small',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '145',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function atrium_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog entry'),
      'module' => 'features',
      'description' => t('A blog is a regularly updated journal or diary made up of individual posts shown in reversed chronological order. Each member of the site may create and maintain a blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_blog_views_api() {
  return array(
    'api' => '2',
  );
}

<?php
/**
 * @file
 * lbd_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lbd_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin';
  $context->description = 'Display development block to admin.';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-devel' => array(
          'module' => 'menu',
          'delta' => 'devel',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display development block to admin.');
  $export['admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content';
  $context->description = 'Pages, blogs, books, etc.';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'blog' => 'blog',
        'book' => 'book',
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'disqus-disqus_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_comments',
          'region' => 'content',
          'weight' => '-8',
        ),
        'disqus-disqus_recent_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_recent_comments',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'disqus-disqus_popular_threads' => array(
          'module' => 'disqus',
          'delta' => 'disqus_popular_threads',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'disqus-disqus_top_commenters' => array(
          'module' => 'disqus',
          'delta' => 'disqus_top_commenters',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages, blogs, books, etc.');
  $export['content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Layout of the front page.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-headerbox' => array(
          'module' => 'boxes',
          'delta' => 'headerbox',
          'region' => 'header',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'disqus-disqus_recent_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_recent_comments',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'disqus-disqus_popular_threads' => array(
          'module' => 'disqus',
          'delta' => 'disqus_popular_threads',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'disqus-disqus_top_commenters' => array(
          'module' => 'disqus',
          'delta' => 'disqus_top_commenters',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout of the front page.');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page';
  $context->description = 'Layout of a page.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'disqus-disqus_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_comments',
          'region' => 'content',
          'weight' => '-8',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar_first',
          'weight' => '-24',
        ),
        'disqus-disqus_recent_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_recent_comments',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'disqus-disqus_popular_threads' => array(
          'module' => 'disqus',
          'delta' => 'disqus_popular_threads',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'disqus-disqus_top_commenters' => array(
          'module' => 'disqus',
          'delta' => 'disqus_top_commenters',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout of a page.');
  $export['page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}

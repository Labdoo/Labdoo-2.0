<?php
/*
  For more info see:
    drush help site-alias
    drush topic docs-aliases

  See also:
    drush help rsync
    drush help sql-sync
 */

$aliases['main'] = array (
  'root' => '/var/www/labdoo',
  'uri' => 'http://example.org',
  'path-aliases' => array (
    '%profile' => 'profiles/labdoo',
    '%downloads' => '/var/www/downloads',
  ),
);

$aliases['dev'] = array (
  'parent' => '@main',
  'root' => '/var/www/labdoo_dev',
  'uri' => 'http://dev.example.org',
);

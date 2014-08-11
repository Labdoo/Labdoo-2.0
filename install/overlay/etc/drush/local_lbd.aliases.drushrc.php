<?php
/*
  For more info see:
    drush help site-alias
    drush topic docs-aliases

  See also:
    drush help rsync
    drush help sql-sync
 */

$aliases['lbd'] = array (
  'root' => '/var/www/lbd',
  'uri' => 'http://example.org',
  'path-aliases' => array (
    '%profile' => 'profiles/labdoo',
    '%downloads' => '/var/www/downloads',
  ),
);

// $aliases['lbd_dev'] = array (
//   'parent' => '@lbd',
//   'root' => '/var/www/lbd_dev',
//   'uri' => 'http://dev.example.org',
// );

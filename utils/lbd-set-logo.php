<?php

//
// This script allows you to change the site logo image.
// Run it using:
//   $ drush @lbd php-script lbd-set-logo.php 
//

$theme_name = 'bootstrap1';
$var_name = 'theme_' . $theme_name . '_settings';
$settings = variable_get($var_name, array());
// Set here the site logo image
$settings['logo_path'] = 'profiles/labdoo/files/pictures/labdoo-site-logo.png';
variable_set($var_name, $settings);

?>


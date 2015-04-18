<?php

/**
 * @file template.php
 */

/*
 * Implements theme_preprocess_page
 *
 */
function bootstrap1_preprocess_page(&$vars) {
  global $user;

  // For superhub pages, we want to enable the title in the edit form so
  // that it can show up in the entity field of the block but we want to
  // hide the title when displaying the page.
  if(!empty($vars['node']) && in_array($vars['node']->type, array('superhub_page'))) {
    $vars['title'] = '';
  }

  // Hide front page title
  if(!empty($vars['node']) && $vars['node']->title == 'Front Page')
    $vars['title'] = '';

  // Hide share wall title
#  if(!empty($vars['node']) && $vars['node']->title == 'My share wall')
#    $vars['title'] = '';

  if ($user->uid) {
    // Logged in user
  } else {
    // Not logged in
    // Fix the registration title done via the path /user/login 
    // (which otherwise by default is "Home")
    if (arg(0) == 'user' && arg(1) == 'login') {
      drupal_set_title(t('User account'));
    }
  }
}


/*
 * Implements theme_button
 *
 */
function bootstrap1_button($variables) {
  // Undoing Bootstrap theme’s rewriting of buttons.
  // The following implementation of theme_button overrides 
  // bootstrap’s bootstrap_button() modification. This is
  // needed so that the module hide_submit can operate well,
  // otherwise it can't hide the button upon submit, which
  // leads to the problem of multiple node creation
  // upon clicking multiple consecutive times on a 
  // 'Save' button.
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}


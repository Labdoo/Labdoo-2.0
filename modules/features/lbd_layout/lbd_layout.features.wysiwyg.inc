<?php
/**
 * @file
 * lbd_layout.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function lbd_layout_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 0,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'image' => 1,
          'styleselect' => 1,
          'fontselect' => 1,
          'fontsizeselect' => 1,
          'forecolor' => 1,
          'backcolor' => 1,
          'sup' => 1,
          'sub' => 1,
          'blockquote' => 1,
          'code' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
          'charmap' => 1,
        ),
        'advimage' => array(
          'advimage' => 1,
        ),
        'advlink' => array(
          'advlink' => 1,
        ),
        'autosave' => array(
          'autosave' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}

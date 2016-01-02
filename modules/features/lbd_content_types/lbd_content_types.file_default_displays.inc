<?php
/**
 * @file
 * lbd_content_types.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function lbd_content_types_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_api_admin_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_api_admin_thumbnail',
  );
  $export['image__node_gallery_api_admin_thumbnail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_cover__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_thumbnail',
  );
  $export['image__node_gallery_file_cover__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_display__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_display',
  );
  $export['image__node_gallery_file_display__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => 'node_gallery_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'labdoo_album_photo',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__node_gallery_file_thumbnail__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__node_gallery_file_thumbnail__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__node_gallery_file_thumbnail__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__large__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__medium__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_api_admin_thumbnail__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_display__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__node_gallery_thumbnail__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightbox__thumbnail__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__large__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__medium__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_api_admin_thumbnail__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_display__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__node_gallery_thumbnail__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__node_gallery_api_admin_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__node_gallery_api_admin_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__node_gallery_display';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__node_gallery_display'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__node_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__node_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__file_field_lightbox2__lightshow__thumbnail__thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_field_slideshow';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'slideshow_image_style' => '',
    'slideshow_link' => '',
    'slideshow_colorbox_image_style' => '',
    'slideshow_colorbox_slideshow' => '',
    'slideshow_colorbox_slideshow_speed' => '4000',
    'slideshow_colorbox_transition' => 'elastic',
    'slideshow_colorbox_speed' => '350',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '4000',
    'slideshow_order' => '',
    'slideshow_controls' => 0,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'after',
    'slideshow_pause' => 0,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => '',
    'slideshow_pager_position' => 'after',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_skin' => '',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $export['image__node_gallery_file_thumbnail__file_field_slideshow'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_thumbnail',
  );
  $export['image__node_gallery_file_thumbnail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__lightbox2_iframe';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__lightbox2_iframe'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__lightbox2_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__node_gallery_file_thumbnail__lightbox2_image'] = $file_display;

  return $export;
}

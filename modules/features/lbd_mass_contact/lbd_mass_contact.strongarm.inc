<?php
/**
 * @file
 * lbd_mass_contact.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lbd_mass_contact_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_attachment_location';
  $strongarm->value = 'mass_contact_attachments';
  $export['mass_contact_attachment_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_bcc_d';
  $strongarm->value = 1;
  $export['mass_contact_bcc_d'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_category_override';
  $strongarm->value = 0;
  $export['mass_contact_category_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_character_set';
  $strongarm->value = '';
  $export['mass_contact_character_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_hourly_threshold';
  $strongarm->value = '3';
  $export['mass_contact_hourly_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_include_from_name';
  $strongarm->value = 0;
  $export['mass_contact_include_from_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_include_to_name';
  $strongarm->value = 0;
  $export['mass_contact_include_to_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_nodecc_d';
  $strongarm->value = 0;
  $export['mass_contact_nodecc_d'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_number_of_attachments';
  $strongarm->value = '3';
  $export['mass_contact_number_of_attachments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_optout_d';
  $strongarm->value = '0';
  $export['mass_contact_optout_d'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_recipient_limit';
  $strongarm->value = '100';
  $export['mass_contact_recipient_limit'] = $strongarm;

  return $export;
}

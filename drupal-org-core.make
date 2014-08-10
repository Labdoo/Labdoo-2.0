api = 2
core = 7.x

; Download Drupal core and apply core patches if needed.
projects[drupal][type] = "core"
projects[drupal][version] = 7.32

; Patch for handling inherited profiles
projects[drupal][patch][1356276] = http://drupal.org/files/1356276-make-D7-21.patch

; Patch for fixing node_access across non-required Views relationships
; NOTE: This patch is not fully reviewed/accepted yet, so review the latest status
projects[drupal][patch][1349080] = http://drupal.org/files/d7_move_access_to_join_condition-1349080-89.patch

; Patch for simpletest
projects[drupal][patch][911354] = http://drupal.org/files/911354-drupal-profile-85.patch

; Patch to allow install profile enabling to enable dependencies correctly.
projects[drupal][patch][1093420] = http://drupal.org/files/1093420-22.patch

; Patch to prevent empty titles when menu_check_access called more than once
projects[drupal][patch][1697570] = http://drupal.org/files/drupal-menu_always_load_objects-1697570-5.patch

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch

; This patch allows install profile to list requirements on the install page
; http://drupal.org/node/1971072
projects[drupal][patch][] = http://drupal.org/files/install_profile_requirements_on_install.patch

; This patch allows install profiles to set a minimum memory limit.
; http://drupal.org/node/1772316#comment-6457618
projects[drupal][patch][] = http://drupal.org/files/drupal-7.x-allow_profile_change_sys_req-1772316-21.patch

; Allow to specify SCRIPT HTML element attributes through drupal_add_js()
; http://drupal.org/node/1664602#comment-6221066
projects[drupal][patch][] = http://drupal.org/files/1664602-1.patch

api = 2
core = 7.x

defaults[projects][subdir] = contrib

;--------------------
; Bootstrap Theme
;--------------------

projects[bootstrap] = 2.2
projects[jquery_update] = 2.4

libraries[bootstrap][directory_name] = bootstrap
libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.0.0.zip

;--------------------
; Contrib
;--------------------

;;; Extensions
projects[xautoload] = 4.5
projects[rules] = 2.7
projects[wysiwyg] = 2.2
projects[simplenews] = 1.1

libraries[tinymce][directory_name] = tinymce
libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = http://github.com/downloads/tinymce/tinymce/tinymce_3.5.7.zip

;;; Security
projects[captcha] = 1.1
projects[recaptcha] = 1.11
projects[honeypot] = 1.17
projects[user_restrictions] = 1.0

;;; Features
projects[features] = 1.0
projects[strongarm] = 2.0
projects[features_extra] = 1.0-beta1
projects[node_export] = 3.0

; Override the version of defaultconfig (to include the last patch as well)
projects[defaultconfig][version] = 1.0-alpha9
projects[defaultconfig][patch][2042799] = http://drupal.org/files/default_config_delete_only_if_overriden.patch
projects[defaultconfig][patch][2043307] = http://drupal.org/files/defaultconfig_include_features_file.patch
projects[defaultconfig][patch][2008178] = http://drupal.org/files/defaultconfig-rebuild-filters-2008178-4_0.patch
projects[defaultconfig][patch][1861054] = http://drupal.org/files/fix-defaultconfig_rebuild_all.patch
projects[defaultconfig][patch][1900574] = https://drupal.org/files/issues/1900574.defaultconfig.undefinedindex_13.patch


;;; Admin Utils
projects[] = l10n_update
projects[] = drush_language
projects[] = drush_remake
projects[] = delete_all
projects[] = menu_import

;;; Performance
projects[] = boost
projects[] = memcache

;;; Extra
projects[entityreference] = 1.1
; projects[field_group] = 1.4
projects[date] = 2.8
projects[location] = 3.3
projects[nodeaccess_userreference] = 3.10
projects[email] = 1.3
projects[conditional_fields] = 3.0-alpha1
projects[lightbox2] = 1.0-beta1
projects[node_view_permissions] = 1.5
projects[r4032login] = 1.8
projects[ip_geoloc] = 1.25
projects[views_slideshow] = 3.1
projects[gmap] = 2.9
projects[views_autocomplete_filters] = 1.1
projects[views_dependent_filters] = 1.1

;--------------------
; Sending Emails
;--------------------

;projects[mailsystem] = 2.34
;projects[mimemail] = 1.0-beta3
projects[reroute_email] = 1.1
projects[smtp] = 1.0

;projects[phpmailer] = 3.x-dev
projects[phpmailer][download][revision] = 8f7c632
projects[phpmailer][download][branch] = 7.x-3.x

libraries[phpmailer][directory_name] = phpmailer
libraries[phpmailer][download][type] = get
libraries[phpmailer][download][url] = https://github.com/PHPMailer/PHPMailer/archive/v5.2.6.zip

;--------------------
; HybridAuth
;--------------------

projects[hybridauth] = 2.9

libraries[hybridauth][directory_name] = hybridauth
libraries[hybridauth][download][type] = get
libraries[hybridauth][download][url] = https://github.com/hybridauth/hybridauth/archive/v2.2.1.tar.gz

;--------------------
; Web Services
;--------------------

projects[oauth2_loginprovider] = 1.x-dev


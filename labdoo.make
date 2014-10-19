api = 2
core = 7.x

;--------------------
; Specify defaults
;--------------------

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

;;; Development
projects[devel] = 1.5
;projects[coder] = 1.2
projects[diff] = 3.2

;;; Extensions
projects[ctools] = 1.4
projects[libraries] = 2.2
projects[entity] = 1.5
projects[xautoload] = 4.5
projects[token] = 1.5
projects[rules] = 2.7
projects[pathauto] = 1.2
projects[subpathauto] = 1.3

;;; User interface
projects[context] = 3.2
projects[views] = 3.8
projects[homebox] = 2.0-beta7
projects[boxes] = 1.2
projects[edit_profile] = 1.0-beta2

projects[wysiwyg] = 2.2

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
projects[uuid] = 1.0-alpha5
;projects[menu_import] = 1.6

projects[defaultconfig][version] = 1.x-dev
projects[defaultconfig][patch][1900574] = https://www.drupal.org/files/issues/1900574.defaultconfig.undefinedindex_13.patch

;;; Admin Utils
projects[module_filter] = 1.8
projects[drush_language] = 1.2
projects[delete_all] = 1.1

;;; Performance
projects[boost] = 1.0
projects[memcache] = 1.2

;;; Services and Social
projects[google_analytics] = 2.0
projects[drupalchat] = 1.2
projects[simplenews] = 1.1
projects[mass_contact] = 1.0
projects[sharethis] = 2.5
projects[disqus] = 1.9
projects[disqus][patch][] = http://drupal.org/files/disqus-https.patch

;;; Extra
projects[entityreference] = 1.1
projects[field_group] = 1.4
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
projects[variable] = 2.5 

;-------------------
; Translations
;-------------------

projects[l10n_update] = 1.0
projects[i18n] = 1.11
projects[i18nviews] = 3.x-dev
projects[transliteration] = 3.2


;--------------------
; Sending Emails
;--------------------

projects[mailsystem] = 2.34
projects[mimemail] = 1.0-beta3
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


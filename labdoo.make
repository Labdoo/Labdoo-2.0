; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Specify defaults
defaults[projects][subdir] = "contrib"
defaults[libraries][type] = "library"

;--------------------
; Additional Themes
;--------------------

projects[bootstrap][version] = "2.2"
projects[bartik_fb][version] = "1.x-dev"

;--------------------
; Additional Contrib
;--------------------

projects[libraries][version] = "2.1"
projects[module_filter][version] = "1.8"
projects[profiler_builder][version] = "1.0-rc3"
projects[google_analytics][version] = "1.3"
projects[token][version] = "1.5"
projects[edit_profile][version] = "1.0-beta2"
;projects[examples][version] = "1.x-dev"
projects[entity][version] = "1.2"
projects[rules][version] = "2.6"
projects[homebox][version] = "2.0-beta6"
projects[simpletest_clone][version] = "1.0-beta3"
projects[captcha][version] = "1.0"
projects[recaptcha][version] = "1.10"
projects[honeypot][version] = "1.15"
projects[features_extra][version] = "1.0-beta1"
projects[uuid][version] = "1.0-alpha5"
projects[node_export][version] = "3.0"
projects[configuration][version] = "2.0-alpha2"
projects[xautoload][version] = "2.7"
projects[jquery_update][version] = "2.3"
projects[boxes][version] = "1.1"
projects[delete_all][version] = "1.1"
projects[drush_language][version] = "1.2"
projects[pathauto][version] = "1.2"
projects[subpathauto][version] = "1.3"
projects[services][version] = "3.5"
projects[services][patch][] = "https://drupal.org/files/fix_controller_settings-1154420-51.patch"
projects[entityreference][version] = "1.1"
projects[oauth2_server][version] = "1.0-rc3"
projects[conditional_fields][version] = "3.0-alpha1"
projects[field_group][version] = "1.3"
projects[date][version] = "2.6"
projects[location][version] = "3.1"
projects[nodeaccess_userreference][version] = "3.10"
projects[email][version] = "1.2"
projects[conditional_fields][version] = "3.0-alpha1"
projects[node_clone][version] = "1.0-rc2"

;--------------------
; Performance
;--------------------
projects[boost][version] = "1.0-beta2"
projects[memcache][version] = "1.0"

;--------------------
; Community and Social
;--------------------
projects[drupalchat][version] = "1.0-beta15"
projects[disqus][version] = "1.9"
projects[disqus][patch][] = "http://drupal.org/files/disqus-https.patch"
projects[sharethis][version] = "2.5"
projects[invite][version] = "2.1-beta2"

;--------------------
; Drupal Localization
;--------------------
projects[l10n_update][version] = "1.0-beta3"
projects[l10n_client][version] = "1.3"

;--------------------
; Mail Related
;--------------------
projects[mailsystem][version] = "2.34"
projects[phpmailer][version] = "3.x-dev"
projects[mimemail][version] = "1.0-beta1"
projects[reroute_email][version] = "1.1"
projects[simplenews][version] = "1.0"
projects[mass_contact][version] = "1.0-beta3"


;--------------------
; Libraries
;--------------------

libraries[phpmailer][directory_name] = "phpmailer"
libraries[phpmailer][download][type] = "get"
libraries[phpmailer][download][url] = "https://github.com/PHPMailer/PHPMailer/archive/v5.2.6.zip"

libraries[oauth2-server-php][directory_name] = "oauth2-server-php"
libraries[oauth2-server-php][download][type] = "git"
libraries[oauth2-server-php][download][url] = "https://github.com/bshaffer/oauth2-server-php.git"

libraries[bootstrap][directory_name] = "bootstrap"
libraries[bootstrap][download][type] = "get"
libraries[bootstrap][download][url] = "https://github.com/twbs/bootstrap/archive/v3.0.0.zip"

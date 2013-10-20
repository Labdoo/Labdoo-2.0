; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Specify defaults
defaults[projects][subdir] = "contrib"
defaults[libraries][type] = "library"

;--------------------
; Additional Themes
;--------------------

projects[bootstrap][version] = "2.1"
projects[bartik_fb][version] = "1.x-dev"

;--------------------
; Additional Contrib
;--------------------

projects[libraries][version] = "2.1"
projects[module_filter][version] = "1.7"
projects[profiler_builder][version] = "1.0-rc3"
projects[google_analytics][version] = "1.3"
projects[token][version] = "1.5"
projects[edit_profile][version] = "1.0-beta2"
projects[examples][version] = "1.x-dev"
projects[entity][version] = "1.1"
projects[rules][version] = "2.3"
projects[homebox][version] = "2.0-beta6"
projects[simpletest_clone][version] = "1.0-beta3"
projects[captcha][version] = "1.0"
projects[recaptcha][version] = "1.9"
projects[honeypot][version] = "1.14"
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
projects[redirect][version] = "1.0-rc1"
projects[pathologic][version] = "2.11"


;--------------------
; Book related
;--------------------
projects[book_delete][version] = "1.0"
projects[replicate][version] = "1.0"
projects[book_copy][version] = "2.0-rc1"
projects[outline_designer][version] = "2.x-dev"
projects[book_title_override][version] = "1.x-dev"
projects[book_access][version] = "2.1"

;--------------------
; Performance
;--------------------
projects[boost][version] = "1.x-dev"
projects[memcache][version] = "1.0"

;--------------------
; Community and Social
;--------------------
projects[disqus][version] = "1.9"
projects[disqus][patch][] = "http://drupal.org/files/disqus-https.patch"
projects[sharethis][version] = "2.5"

;--------------------
; Drupal Localization
;--------------------
projects[l10n_update][version] = "1.0-beta3"
projects[l10n_client][version] = "1.2"

;--------------------
; Mail Related
;--------------------
projects[mailsystem][version] = "2.34"
projects[phpmailer][version] = "3.x-dev"
projects[mimemail][version] = "1.0-alpha2"
projects[reroute_email][version] = "1.1"
projects[simplenews][version] = "1.0"
projects[mass_contact][version] = "1.0-beta2"


;--------------------
; Libraries
;--------------------

libraries[phpmailer][directory_name] = "phpmailer"
libraries[phpmailer][download][type] = "get"
libraries[phpmailer][download][url] = "https://github.com/PHPMailer/PHPMailer/archive/v5.2.6.zip"

libraries[bootstrap][directory_name] = "bootstrap"
libraries[bootstrap][download][type] = "get"
libraries[bootstrap][download][url] = "https://github.com/twbs/bootstrap/archive/v3.0.0.zip"

libraries[facebook-php-sdk][directory_name] = "facebook-php-sdk"
libraries[facebook-php-sdk][download][type] = "git"
libraries[facebook-php-sdk][download][url] = "https://github.com/facebook/facebook-php-sdk.git"

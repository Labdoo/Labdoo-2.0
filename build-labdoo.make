api = 2
core = 7.x

;------------------------------
; Build Drupal core (with patches).
;------------------------------
includes[drupal] = drupal-org-core.make

;------------------------------
; Get profile labdoo.
;------------------------------
projects[labdoo][type] = profile
projects[labdoo][download][type] = git
projects[labdoo][download][url] = /var/www/code/labdoo
projects[labdoo][download][branch] = master

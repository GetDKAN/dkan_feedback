<?php

/**
 * @file
 * dkan_feedback.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function dkan_feedback_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'feedback_node_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['feedback_node_form'] = $captcha;

  return $export;
}

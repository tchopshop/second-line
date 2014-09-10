<?php
/**
 * @file
 * baseline_newsletter.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function baseline_newsletter_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'custom_attributes';
  $formatter->label = 'Custom attributes';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'file,text,text_long';
  $formatter->code = '$customatt = "";
$output = "";
foreach ($object->field_animation_attributes[\'und\'] as $key => $value):
if (is_numeric($key)):
$customatt .= $object->field_animation_attributes[\'und\'][$key][\'value\'] . " ";
endif;
endforeach;
$output = "<div $customatt>" . $object->field_text_animation[\'und\'][0][\'value\'] . "</div>";
return $output;';
  $formatter->fapi = '';
  $export['custom_attributes'] = $formatter;

  return $export;
}

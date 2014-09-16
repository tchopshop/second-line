<?php
/**
 * @file
 * baseline_paragraph_elements.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function baseline_paragraph_elements_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'four_column_text';
  $formatter->label = 'Four Column Text';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'text_long';
  $formatter->code = '$output = "";
$columns = 4;
$width = floor((100 / $columns));
drupal_add_css(".text-columns .column { float: left; width: {$width}% }", \'inline\');
foreach ($variables[\'#items\'] as $item) {
  $length = ceil(drupal_strlen($item[\'safe_value\']) / $columns);
  $words = explode(" ", $item[\'safe_value\']);
  $index = 0;
  while ($words) {
    $column[$index] = !isset($column[$index]) ? array_shift($words) . \' \' : $column[$index] . array_shift($words) . \' \';
    $index = drupal_strlen($column[$index]) >= $length ? $index + 1 : $index;
  }
  $output .= \'<div class="text-columns clearfix"><div class="column">\' . implode(\'</div><div class="column">\', $column) . \'</div></div>\';
}
return $output;';
  $formatter->fapi = '';
  $export['four_column_text'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'three_column_text';
  $formatter->label = 'Three Column Text';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'text_long';
  $formatter->code = '$output = "";
$columns = 3;
$width = floor((100 / $columns));
drupal_add_css(".text-columns .column { float: left; width: {$width}% }", \'inline\');
foreach ($variables[\'#items\'] as $item) {
  $length = ceil(drupal_strlen($item[\'safe_value\']) / $columns);
  $words = explode(" ", $item[\'safe_value\']);
  $index = 0;
  while ($words) {
    $column[$index] = !isset($column[$index]) ? array_shift($words) . \' \' : $column[$index] . array_shift($words) . \' \';
    $index = drupal_strlen($column[$index]) >= $length ? $index + 1 : $index;
  }
  $output .= \'<div class="text-columns clearfix"><div class="column">\' . implode(\'</div><div class="column">\', $column) . \'</div></div>\';
}
return $output;';
  $formatter->fapi = '';
  $export['three_column_text'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'tweet';
  $formatter->label = 'Tweet';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'link, text';
  $formatter->code = '$output = \'\';
drupal_add_js(\'//platform.twitter.com/widgets.js\');
foreach ($variables[\'#items\'] as $item) {
  switch ($variables[\'#field\'][\'type\']) {
    case \'link_field\':
      $tweet = $item[\'url\'];
      break;
    case \'text\':
      $tweet = is_numeric($item[\'value\']) ? "https://twitter.com/twitterapi/statuses/{$item[\'value\']}" : $item[\'value\'];
      break;
  }
  $request = drupal_http_request("https://api.twitter.com/1/statuses/oembed.json?url={$tweet}&omit_script=true");
  if (200 == $request->code) {
    $data = json_decode($request->data);
    $output .= $data->html;
  }
}
return $output;';
  $formatter->fapi = '';
  $export['tweet'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'two_column_text';
  $formatter->label = 'Two Column Text';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'text_long';
  $formatter->code = '$output = "";
$columns = 2;
$width = floor((100 / $columns));
drupal_add_css(".text-columns .column { float: left; width: {$width}% }", \'inline\');
foreach ($variables[\'#items\'] as $item) {
  $length = ceil(drupal_strlen($item[\'safe_value\']) / $columns);
  $words = explode(" ", $item[\'safe_value\']);
  $index = 0;
  while ($words) {
    $column[$index] = !isset($column[$index]) ? array_shift($words) . \' \' : $column[$index] . array_shift($words) . \' \';
    $index = drupal_strlen($column[$index]) >= $length ? $index + 1 : $index;
  }
  $output .= \'<div class="text-columns clearfix"><div class="column">\' . implode(\'</div><div class="column">\', $column) . \'</div></div>\';
}
return $output;';
  $formatter->fapi = '';
  $export['two_column_text'] = $formatter;

  return $export;
}

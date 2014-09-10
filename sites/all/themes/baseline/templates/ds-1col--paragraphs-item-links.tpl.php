<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<aside <?php if (!empty($elements['#entity']->field_column_width['und'][0]['value'])): ?>class="aside <?php print $elements['#entity']->field_column_width['und'][0]['value'] ?>"<?php endif; ?>>
  <?php print $ds_content; ?>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
</aside>
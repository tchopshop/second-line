<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<figure class="figure <?php if (!empty($elements['#entity']->field_column_width['und'][0]['value'])): ?><?php print $elements['#entity']->field_column_width['und'][0]['value'] ?><?php endif; ?> <?php if (!empty($elements['#entity']->field_alignment['und'][0]['value'])): ?><?php print $elements['#entity']->field_alignment['und'][0]['value'] ?><?php endif; ?>">
  <?php print $ds_content; ?>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
</figure>
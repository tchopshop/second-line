<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<div class="partner-logos row">
  <?php print $ds_content; ?>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
</div>
<?php

//	 dpm( get_defined_vars() );

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<div class="outer">
	<div class="panel text-center <?php print $elements['field_price_featured'][0]['#markup'] ?>">
  <?php print $ds_content; ?>
  </div>
</div>
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

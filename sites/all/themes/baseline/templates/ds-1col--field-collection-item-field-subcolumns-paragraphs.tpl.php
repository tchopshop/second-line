<?php
/**
 * @file
 * Display Suite 1 column template.
 */
?>
			<td class="<?php print $elements['#entity']->field_subcolumns['und'][0]['value'] ?>">

				<?php print $ds_content; ?>

				<?php if (!empty($drupal_render_children)): ?>
				<?php print $drupal_render_children ?>
				<?php endif; ?>

            </td>
          
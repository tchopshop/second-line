<?php
/**
 * @file
 * Display Suite 1 column template.
 */
?>
	<table class="<?php print $elements['#entity']->field_columns['und'][0]['value'] ?>">
		<tr>
			<td class="<?php print $elements['#entity']->field_additional_classes['und'][0]['value'] ?>">
				<table>
				  <tr>
				<?php print $ds_content; ?>

				<?php if (!empty($drupal_render_children)): ?>
				<?php print $drupal_render_children ?>
				<?php endif; ?>

				
					<td class="expander"></td>
                  </tr>
                </table>
         </tr>
     </table>

<?php
/**
 * @file
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>


  <?php if ($content['header']): ?>
          <table class="row header">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper last">

                        <table class="twelve columns">
                          <tr>
                          	<td>
							  <?php print $content['header']; ?>
                          	</td>
                          </tr>
                        </table>

                      </td>
                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>
  <?php endif; ?>

          <table class="row content">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td>
						 <table class="row">
							<tr>
							  <td class="wrapper">
								<table class="six columns">
								  <tr>
									<td>
									  <?php print $content['column1']; ?>
									</td>
									<td class="expander"></td>
								  </tr>
								</table>
							  </td>
							  <td class="wrapper last">
								<table class="six columns">
								  <tr>
									<td>
									  <?php print $content['column2']; ?>
									</td>
									<td class="expander"></td>
								  </tr>
								</table>



  <?php if ($content['footer']): ?>
          <table class="row bottom">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper last">

                        <table class="twelve columns">
                          <tr>
                            <td
							  <?php print $content['footer']; ?>
                            </td>
                          </tr>
                        </table>

                      </td>
                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>
  <?php endif; ?>

</div>
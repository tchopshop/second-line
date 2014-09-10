<?php
/**
 * @file
 * Template for 1 Column.
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

                            
							  <?php print $content['header']; ?>
                            

                      </td>
                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>
  <?php endif; ?>
          <table class="row center">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper last">

							  
							  <?php print $content['content']; ?>
                            

                      </td>
                    </tr>
                  </table>

                </center>
              </td>
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

                            
							  <?php print $content['footer']; ?>
                            

                      </td>
                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>
  <?php endif; ?>

</div>
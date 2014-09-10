<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="<?php print $classes; ?>">

  <?php if (!empty($content['leaderboard'])): ?>
    <div id="leaderboard-wrapper">
      <div class="container row clearfix">
        <div class="region region-leaderboard">
          <?php print render($content['leaderboard']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['header'])): ?>
    <div id="header-wrapper">
      <div class="container row clearfix">
          <div class="region region-header">
        <?php print render($content['header']); ?>
          </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['menu_bar'])): ?>
    <div id="nav-wrapper">
      <div class="container row clearfix">
        <div id="menu-bar" class="nav clearfix">
          <?php print render($content['menu_bar']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['help'])): ?>
    <div id="messages-help-wrapper">
      <div class="container row clearfix">
        <div class="region region-help">
          <?php print render($content['help']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['secondary_content'])): ?>
    <div id="secondary-content-wrapper">
      <div class="container row clearfix">
        <div class="region region-secondary-content">
          <?php print render($content['secondary_content']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <div id="content-wrapper">
	  <table class="body">
	  <tbody>
	  	<tr>
	  		<td class="center" align="center" valign="top">
	  		   <center>
                    <?php print render($content['content']); ?>
	  		   </center>
	  		</td>
	  	</tr>
	  	<tbody>
	  </table>
  </div>

  <?php if (!empty($content['tertiary_content'])): ?>
    <div id="tertiary-content-wrapper">
      <div class="container row clearfix">
        <div class="region region-tertiary-content">
          <?php print render($content['tertiary_content']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['footer'])): ?>
    <div id="footer-wrapper">
      <div class="container row clearfix">
        <footer id="footer" role="contentinfo">
          <?php print render($content['footer']); ?>
        </footer>
      </div>
    </div>
  <?php endif; ?>

</div>

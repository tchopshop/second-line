<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="row <?php print $classes; ?>">

  <?php if (!empty($content['leaderboard'])): ?>
    <div class="region region-leaderboard">
      <?php print render($content['leaderboard']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['header'])): ?>
    <div class="region region-header">
    	<?php print render($content['header']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['menu_bar'])): ?>
    <div id="menu-bar" class="nav clearfix">
      <?php print render($content['menu_bar']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['help'])): ?>
    <div class="region region-help">
      <?php print render($content['help']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['secondary_content'])): ?>
    <div class="region region-secondary-content">
      <?php print render($content['secondary_content']); ?>
    </div>
  <?php endif; ?>
  

  <main id="main" role="main">  
  <?php if ($content['sidebar_first'] || $content['sidebar_second']): ?>
      <div id="content-column">
        <div class="content-inner">
  <?php endif; ?>
          <?php if (!empty($content['highlighted'])): ?>
            <div class="region region-highlighted">
              <?php print render($content['highlighted']); ?>
            </div>
          <?php endif; ?>
          
            <div class="region region-content">
              <?php print render($content['content']); ?>
            </div>

          <?php if (!empty($content['content_aside'])): ?>
            <aside class="region region-content-aside">
              <?php print render($content['content_aside']); ?>
            </aside>
          <?php endif; ?>
		  
	<?php if ($content['sidebar_first'] || $content['sidebar_second']): ?>
        </div>
      </div>
	  <?php endif; ?>
      <?php if (!empty($content['sidebar_first'])): ?>
        <div class="region-sidebar-first sidebar">
          <?php print render($content['sidebar_first']); ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($content['sidebar_second'])): ?>
        <div class="region-sidebar-second sidebar">
          <?php print render($content['sidebar_second']); ?>
        </div>
      <?php endif; ?>
	  </main>
	  
  <?php if (!empty($content['tertiary_content'])): ?>
    <div class="region region-tertiary-content">
      <?php print render($content['tertiary_content']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['footer'])): ?>
    <footer id="footer" role="contentinfo" class="region">
      <?php print render($content['footer']); ?>
    </footer>
  <?php endif; ?>

</div>

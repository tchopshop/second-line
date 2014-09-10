<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['three_25_50_25_top']): ?>
    <div class="top">
      <div class="region-inner clearfix">
        <?php print $content['three_25_50_25_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="main">
    <div class="region-inner clearfix">
      <?php print $content['three_25_50_25_second']; ?>
    </div>
  </div>
  <div class="sidebar-first">
    <div class="region-inner clearfix">
      <?php print $content['three_25_50_25_first']; ?>
    </div>
  </div>
  <div class="sidebar-second">
    <div class="region-inner clearfix">
      <?php print $content['three_25_50_25_third']; ?>
    </div>
  </div>
  <?php if ($content['three_25_50_25_bottom']): ?>
    <div class="bottom">
      <div class="region-inner clearfix">
        <?php print $content['three_25_50_25_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
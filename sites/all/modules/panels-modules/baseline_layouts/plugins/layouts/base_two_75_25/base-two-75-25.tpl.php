<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['two_75_25_top']): ?>
    <div class="top">
      <div class="region-inner clearfix">
        <?php print $content['two_75_25_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="main">
    <div class="region-inner clearfix">
      <?php print $content['two_75_25_first']; ?>
    </div>
  </div>
  <div class="sidebar">
    <div class="region-inner clearfix">
      <?php print $content['two_75_25_second']; ?>
    </div>
  </div>
  <?php if ($content['two_75_25_bottom']): ?>
    <div class="bottom">
      <div class="region-inner clearfix">
        <?php print $content['two_75_25_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
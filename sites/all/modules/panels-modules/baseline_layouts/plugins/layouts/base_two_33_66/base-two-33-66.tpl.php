<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['two_33_66_top']): ?>
    <div class="top">
      <div class="region-inner clearfix">
        <?php print $content['two_33_66_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="main">
    <div class="region-inner clearfix">
      <?php print $content['two_33_66_second']; ?>
    </div>
  </div>
  <div class="sidebar">
    <div class="region-inner clearfix">
      <?php print $content['two_33_66_first']; ?>
    </div>
  </div>
  <?php if ($content['two_33_66_bottom']): ?>
    <div class="bottom">
      <div class="region-inner clearfix">
        <?php print $content['two_33_66_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
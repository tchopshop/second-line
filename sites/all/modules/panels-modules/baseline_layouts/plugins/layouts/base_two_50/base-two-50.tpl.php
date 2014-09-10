<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['two_50_top']): ?>
    <div class="top">
      <div class="region-inner clearfix">
        <?php print $content['two_50_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="first">
    <div class="region-inner clearfix">
      <?php print $content['two_50_first']; ?>
    </div>
  </div>
  <div class="second">
    <div class="region-inner clearfix">
      <?php print $content['two_50_second']; ?>
    </div>
  </div>
  <?php if ($content['two_50_bottom']): ?>
    <div class="bottom">
      <div class="region-inner clearfix">
        <?php print $content['two_50_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
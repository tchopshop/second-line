<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['three_33_top']): ?>
    <div class="top">
      <div class="region-inner clearfix">
        <?php print $content['three_33_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="first">
    <div class="region-inner clearfix">
      <?php print $content['three_33_first']; ?>
    </div>
  </div>
  <div class="second">
    <div class="region-inner clearfix">
      <?php print $content['three_33_second']; ?>
    </div>
  </div>
  <div class="third">
    <div class="region-inner clearfix">
      <?php print $content['three_33_third']; ?>
    </div>
  </div>
  <?php if ($content['three_33_bottom']): ?>
    <div class="bottom">
      <div class="region-inner clearfix">
        <?php print $content['three_33_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
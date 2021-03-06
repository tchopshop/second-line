<div class="<?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="inset-wrapper clearfix">
    <?php if ($content['three_inset_right_top']): ?>
      <div class="top">
        <div class="region-inner clearfix">
          <?php print $content['three_inset_right_top']; ?>
        </div>
      </div>
    <?php endif; ?>

    <div class="main">
      <div class="region-inner clearfix">
        <?php print $content['three_inset_right_middle']; ?>
      </div>
    </div>
    <div class="sidebar-right">
      <div class="region-inner clearfix">
        <?php print $content['three_inset_right_inset']; ?>
      </div>
    </div>
    <?php if ($content['three_inset_right_bottom']): ?>
      <div class="bottom">
        <div class="region-inner clearfix">
          <?php print $content['three_inset_right_bottom']; ?>
        </div>
      </div>
    <?php endif; ?>
  </div>
  <div class="sidebar-left">
    <div class="region-inner clearfix">
      <?php print $content['three_inset_right_sidebar']; ?>
    </div>
  </div>
</div>
(function ($) {

  Drupal.behaviors.nodeFormPanesEditAuthoredOn = {
    attach: function (context, settings) {
      $('a.node-form-summary-toggle').once('node-form-summary-toggle').click(function (event) {
        event.preventDefault();
        $('.' + $(this).attr('data-toggle'), $(this).parents('.node-form-summary')).show();
        $(this).parent().hide();
      });
    }
  }

  /**
    * Make the path alias field inline with the "Permalink: http://domain.com/"
    */
  Drupal.behaviors.nodeFormPanesPathauto = {
    attach: function (context, settings) {
      var width = $('.node-form .form-item-path-alias input').width() - $('.node-form .form-item-path-alias label').width() - 5;
      $('.node-form .form-item-path-alias input').css('width', width);
    }
  }

})(jQuery)

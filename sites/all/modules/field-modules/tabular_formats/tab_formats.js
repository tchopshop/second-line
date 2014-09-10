
(function($) {
/**
 * This was strickly a Proof of Concept Module. To try an improve the way the filters are display
 */
 Drupal.behaviors.tabFormats = {
   attach: function(context, settings) {
     $('.tab-formats', context).once(function(i, val) {
       
       var options = $('option', $(this));
       
       $(this).closest('fieldset').each(function() {
         var $fieldset = $(this);
         
         var ul = $('<ul>').addClass('nav nav-tabs');
         options.each(function (i, opt) {
           opt = $(opt);
           var a = $('<a>').attr('href', "#"+opt.val()).text(opt.text()).attr("data-click", opt.val());
           a.click(function() {
             $('select.tab-formats', $fieldset).val($(this).attr('data-click'));
             $('select.tab-formats', $fieldset).change();
             $('.filter-tabs-li').removeClass('active');
             $(this).parent().addClass('active');
             return false;
           });
           li = $('<li>').addClass('filter-tabs-li');
           li.append(a);
           ul.append(li);
         });
         
         $fieldset.siblings('.form-type-textarea').children('.form-textarea-wrapper').before(ul);
       });
     });
     $('.filter-wrapper').hide();
   }
 };
})(jQuery);

(function ($) {

  Drupal.behaviors.baseline = {
    attach: function(context, settings) {
      
   
      var $dlmenu = $('#dl-menu', context).dlmenu({
        animationClasses: {
          classin: 'dl-animate-in-2',
          classout : 'dl-animate-out-2'
        }
      });
      
      // Insert parent links into the sub groups.
      $(".dl-back", context).each(function(){
        
        $(this).after(
            
          // Wrap a new <li> around
          $('<li></li>').addClass('dl-parent').append(
            // The first <a> cloned from the parent <li>,
            $(this).parents('li').find('a:first').clone()
          )
        );
      });
      
      if (0 === $dlmenu.length) return;
      
      var dlmenu = $dlmenu.data('dlmenu');
      var $parents = dlmenu.$menu.find('.dl-parent');
      
      var addEvents = function() {
        dlmenu._initEvents();
        
        $parents.off('click.dlmenu');
        $parents.on('click.dlmenu', function( event ) {
          event.stopPropagation();
          dlmenu.options.onLinkClick( $(this), event );
        });
      };
      
      var removeEvents = function() {
        dlmenu.$trigger.off('click.dlmenu');
        dlmenu.$menuitems.off('click.dlmenu');
        $parents.off('click.dlmenu');
        dlmenu.$back.off('click.dlmenu');
        $('[data-toggle="dropdown"]').dropdownHover();

      };
      
enquire.register("screen and (max-width:799px)", {
            
      match : function() {
          addEvents();
      },

      unmatch : function() {
          removeEvents();
      },
      
      setup : function() {
      	  removeEvents();
      },
      
      defersetup : true,
	  });
    }
  };
})(jQuery);
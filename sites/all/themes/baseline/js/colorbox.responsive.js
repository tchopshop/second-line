(function ($, Drupal, window, document, undefined) {
//Configure colorbox call back to resize with custom dimensions
  $.colorbox.settings.onLoad = function() {
    colorboxResize();
  }
  //Customize colorbox dimensions
  //por defecto 640x360
  var colorboxResize = function(resize) {
    var width ; var height;
    //for video
    if($("#cboxLoadedContent >div").hasClass("embedded-video")){
    width = "90%";
    height = "90%";
    if($(window).width() > 960) { width = "860"; }
    if($(window).height() > 700) { height = "630"; }
  }else{ //for image with picture
     width = $("#cboxLoadedContent img").width;
     height =  $("#cboxLoadedContent img").height;
  }
        $.colorbox.settings.height = height;
        $.colorbox.settings.width = width;
    //if window is resized while lightbox open
    if(resize) {
      //with images it got very slow, so I dont do it
      if($("#cboxLoadedContent >div").hasClass("embedded-video")){
        $.colorbox.resize({
          'height': height,
          'width': width
        });
      }
    }
  };
  //In case of window being resized
  $(window).resize(function() {
    colorboxResize(true);
  });
})(jQuery, Drupal, this, this.document);
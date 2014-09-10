function initialize() {

  var darkMapStyles = [
  
  {
    featureType: "landscape.man_made",
    stylers: [
      { hue: "#ff0000" },
      { visibility: "on" },
      { saturation: -99 },
      { lightness: -86 }
    ]
  },{
    featureType: "road.local",
    stylers: [
      { lightness: -70 },
      { saturation: -100 }
    ]
  },{
    featureType: "road.local",
    elementType: "labels",
    stylers: [
      { invert_lightness: true },
      { gamma: 0.32 },
      { lightness: -15 }
    ]
  },{
    featureType: "road.arterial",
    stylers: [
      { lightness: -69 },
      { hue: "#6e00ff" },
      { saturation: -76 },
      { gamma: 1.55 }
    ]
  },{
    featureType: "water",
    stylers: [
      { lightness: -73 }
    ]
  },{
    featureType: "road.arterial",
    elementType: "labels",
    stylers: [
      { invert_lightness: true },
      { gamma: 0.38 },
      { lightness: 4 }
    ]
  },{
    featureType: "transit.line",
    stylers: [
      { lightness: -59 },
      { visibility: "on" }
    ]
  },{
    featureType: "administrative",
    stylers: [
      { visibility: "off" }
    ]
  },{
    featureType: "road.highway",
    stylers: [
      { lightness: -45 },
      { hue: "#ff4400" },
      { saturation: -48 }
    ]
  },{
    featureType: "poi",
    stylers: [
      { lightness: -65 }
    ]
  },{
    featureType: "transit.station",
    stylers: [
      { visibility: "off" }
    ]
  },{
    featureType: "poi.sports_complex",
    stylers: [
      { hue: "#ffe500" },
      { saturation: 64 },
      { lightness: -25 },
      { gamma: 1.31 }
    ]
  },{
    featureType: "poi.school",
    stylers: [
      { saturation: -60 },
      { hue: "#00ff19" },
      { gamma: 1.16 },
      { lightness: -32 }
    ]
  }
  
  
  ]

var darkMapType = new google.maps.StyledMapType(darkMapStyles,
    {name: "Dark Map"});

  var myLatlng = new google.maps.LatLng(29.931598, -90.070072);
  var mapOptions = {
    zoom: 15,
    center: myLatlng,
	mapTypeControl: true,
    mapTypeControlOptions: {
      style: google.maps.MapTypeControlStyle.DROPDOWN_MENU,
    },
    panControl: false,

    zoomControl: true,
    zoomControlOptions: {
        style: google.maps.ZoomControlStyle.DEFAULT,
        position: google.maps.ControlPosition.RIGHT_CENTER
    },
    scaleControl: false,
  };
  
  var map = new google.maps.Map(document.getElementById('map_canvas'), mapOptions);
  
  var marker = new google.maps.Marker({
      position: myLatlng,
      map: map,
      animation: google.maps.Animation.DROP,
      title:"Second Line Stages"
  });
 google.maps.event.addListener(marker, 'click', toggleBounce);
  map.mapTypes.set('dark_map', darkMapType);
  map.setMapTypeId('dark_map');
}
function toggleBounce() {

  if (marker.getAnimation() != null) {
    marker.setAnimation(null);
  } else {
    marker.setAnimation(google.maps.Animation.BOUNCE);
  }
}

function loadScript() {
  var script = document.createElement("script");
  script.type = "text/javascript";
  script.src = "http://maps.googleapis.com/maps/api/js?key=AIzaSyB1W8ryWxuOY1XN95MKn9p3ac6nWKXUm0s&sensor=false&callback=initialize";
  document.body.appendChild(script);
}

window.onload = loadScript;
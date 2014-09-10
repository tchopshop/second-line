/* ========================================================================
 * Bootstrap: tooltip.js v3.1.1
 * http://getbootstrap.com/javascript/#tooltip
 * Inspired by the original jQuery.tipsy by Jason Frame
 * ========================================================================
 * Copyright 2011-2014 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 * ======================================================================== */+function(e){"use strict";var t=function(e,t){this.type=this.options=this.enabled=this.timeout=this.hoverState=this.$element=null;this.init("tooltip",e,t)};t.DEFAULTS={animation:!0,placement:"top",selector:!1,template:'<div class="tooltip"><div class="tooltip-arrow"></div><div class="tooltip-inner"></div></div>',trigger:"hover focus",title:"",delay:0,html:!1,container:!1};t.prototype.init=function(t,n,r){this.enabled=!0;this.type=t;this.$element=e(n);this.options=this.getOptions(r);var i=this.options.trigger.split(" ");for(var s=i.length;s--;){var o=i[s];if(o=="click")this.$element.on("click."+this.type,this.options.selector,e.proxy(this.toggle,this));else if(o!="manual"){var u=o=="hover"?"mouseenter":"focusin",a=o=="hover"?"mouseleave":"focusout";this.$element.on(u+"."+this.type,this.options.selector,e.proxy(this.enter,this));this.$element.on(a+"."+this.type,this.options.selector,e.proxy(this.leave,this))}}this.options.selector?this._options=e.extend({},this.options,{trigger:"manual",selector:""}):this.fixTitle()};t.prototype.getDefaults=function(){return t.DEFAULTS};t.prototype.getOptions=function(t){t=e.extend({},this.getDefaults(),this.$element.data(),t);t.delay&&typeof t.delay=="number"&&(t.delay={show:t.delay,hide:t.delay});return t};t.prototype.getDelegateOptions=function(){var t={},n=this.getDefaults();this._options&&e.each(this._options,function(e,r){n[e]!=r&&(t[e]=r)});return t};t.prototype.enter=function(t){var n=t instanceof this.constructor?t:e(t.currentTarget)[this.type](this.getDelegateOptions()).data("bs."+this.type);clearTimeout(n.timeout);n.hoverState="in";if(!n.options.delay||!n.options.delay.show)return n.show();n.timeout=setTimeout(function(){n.hoverState=="in"&&n.show()},n.options.delay.show)};t.prototype.leave=function(t){var n=t instanceof this.constructor?t:e(t.currentTarget)[this.type](this.getDelegateOptions()).data("bs."+this.type);clearTimeout(n.timeout);n.hoverState="out";if(!n.options.delay||!n.options.delay.hide)return n.hide();n.timeout=setTimeout(function(){n.hoverState=="out"&&n.hide()},n.options.delay.hide)};t.prototype.show=function(){var t=e.Event("show.bs."+this.type);if(this.hasContent()&&this.enabled){this.$element.trigger(t);if(t.isDefaultPrevented())return;var n=this,r=this.tip();this.setContent();this.options.animation&&r.addClass("fade");var i=typeof this.options.placement=="function"?this.options.placement.call(this,r[0],this.$element[0]):this.options.placement,s=/\s?auto?\s?/i,o=s.test(i);o&&(i=i.replace(s,"")||"top");r.detach().css({top:0,left:0,display:"block"}).addClass(i);this.options.container?r.appendTo(this.options.container):r.insertAfter(this.$element);var u=this.getPosition(),a=r[0].offsetWidth,f=r[0].offsetHeight;if(o){var l=this.$element.parent(),c=i,h=document.documentElement.scrollTop||document.body.scrollTop,p=this.options.container=="body"?window.innerWidth:l.outerWidth(),d=this.options.container=="body"?window.innerHeight:l.outerHeight(),v=this.options.container=="body"?0:l.offset().left;i=i=="bottom"&&u.top+u.height+f-h>d?"top":i=="top"&&u.top-h-f<0?"bottom":i=="right"&&u.right+a>p?"left":i=="left"&&u.left-a<v?"right":i;r.removeClass(c).addClass(i)}var m=this.getCalculatedOffset(i,u,a,f);this.applyPlacement(m,i);this.hoverState=null;var g=function(){n.$element.trigger("shown.bs."+n.type)};e.support.transition&&this.$tip.hasClass("fade")?r.one(e.support.transition.end,g).emulateTransitionEnd(150):g()}};t.prototype.applyPlacement=function(t,n){var r,i=this.tip(),s=i[0].offsetWidth,o=i[0].offsetHeight,u=parseInt(i.css("margin-top"),10),a=parseInt(i.css("margin-left"),10);isNaN(u)&&(u=0);isNaN(a)&&(a=0);t.top=t.top+u;t.left=t.left+a;e.offset.setOffset(i[0],e.extend({using:function(e){i.css({top:Math.round(e.top),left:Math.round(e.left)})}},t),0);i.addClass("in");var f=i[0].offsetWidth,l=i[0].offsetHeight;if(n=="top"&&l!=o){r=!0;t.top=t.top+o-l}if(/bottom|top/.test(n)){var c=0;if(t.left<0){c=t.left*-2;t.left=0;i.offset(t);f=i[0].offsetWidth;l=i[0].offsetHeight}this.replaceArrow(c-s+f,f,"left")}else this.replaceArrow(l-o,l,"top");r&&i.offset(t)};t.prototype.replaceArrow=function(e,t,n){this.arrow().css(n,e?50*(1-e/t)+"%":"")};t.prototype.setContent=function(){var e=this.tip(),t=this.getTitle();e.find(".tooltip-inner")[this.options.html?"html":"text"](t);e.removeClass("fade in top bottom left right")};t.prototype.hide=function(){function i(){t.hoverState!="in"&&n.detach();t.$element.trigger("hidden.bs."+t.type)}var t=this,n=this.tip(),r=e.Event("hide.bs."+this.type);this.$element.trigger(r);if(r.isDefaultPrevented())return;n.removeClass("in");e.support.transition&&this.$tip.hasClass("fade")?n.one(e.support.transition.end,i).emulateTransitionEnd(150):i();this.hoverState=null;return this};t.prototype.fixTitle=function(){var e=this.$element;(e.attr("title")||typeof e.attr("data-original-title")!="string")&&e.attr("data-original-title",e.attr("title")||"").attr("title","")};t.prototype.hasContent=function(){return this.getTitle()};t.prototype.getPosition=function(){var t=this.$element[0];return e.extend({},typeof t.getBoundingClientRect=="function"?t.getBoundingClientRect():{width:t.offsetWidth,height:t.offsetHeight},this.$element.offset())};t.prototype.getCalculatedOffset=function(e,t,n,r){return e=="bottom"?{top:t.top+t.height,left:t.left+t.width/2-n/2}:e=="top"?{top:t.top-r,left:t.left+t.width/2-n/2}:e=="left"?{top:t.top+t.height/2-r/2,left:t.left-n}:{top:t.top+t.height/2-r/2,left:t.left+t.width}};t.prototype.getTitle=function(){var e,t=this.$element,n=this.options;e=t.attr("data-original-title")||(typeof n.title=="function"?n.title.call(t[0]):n.title);return e};t.prototype.tip=function(){return this.$tip=this.$tip||e(this.options.template)};t.prototype.arrow=function(){return this.$arrow=this.$arrow||this.tip().find(".tooltip-arrow")};t.prototype.validate=function(){if(!this.$element[0].parentNode){this.hide();this.$element=null;this.options=null}};t.prototype.enable=function(){this.enabled=!0};t.prototype.disable=function(){this.enabled=!1};t.prototype.toggleEnabled=function(){this.enabled=!this.enabled};t.prototype.toggle=function(t){var n=t?e(t.currentTarget)[this.type](this.getDelegateOptions()).data("bs."+this.type):this;n.tip().hasClass("in")?n.leave(n):n.enter(n)};t.prototype.destroy=function(){clearTimeout(this.timeout);this.hide().$element.off("."+this.type).removeData("bs."+this.type)};var n=e.fn.tooltip;e.fn.tooltip=function(n){return this.each(function(){var r=e(this),i=r.data("bs.tooltip"),s=typeof n=="object"&&n;if(!i&&n=="destroy")return;i||r.data("bs.tooltip",i=new t(this,s));typeof n=="string"&&i[n]()})};e.fn.tooltip.Constructor=t;e.fn.tooltip.noConflict=function(){e.fn.tooltip=n;return this}}(jQuery);
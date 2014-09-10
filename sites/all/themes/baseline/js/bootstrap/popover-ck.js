/* ========================================================================
 * Bootstrap: popover.js v3.1.1
 * http://getbootstrap.com/javascript/#popovers
 * ========================================================================
 * Copyright 2011-2014 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 * ======================================================================== */+function(e){"use strict";var t=function(e,t){this.init("popover",e,t)};if(!e.fn.tooltip)throw new Error("Popover requires tooltip.js");t.DEFAULTS=e.extend({},e.fn.tooltip.Constructor.DEFAULTS,{placement:"right",trigger:"click",content:"",template:'<div class="popover"><div class="arrow"></div><h3 class="popover-title"></h3><div class="popover-content"></div></div>'});t.prototype=e.extend({},e.fn.tooltip.Constructor.prototype);t.prototype.constructor=t;t.prototype.getDefaults=function(){return t.DEFAULTS};t.prototype.setContent=function(){var e=this.tip(),t=this.getTitle(),n=this.getContent();e.find(".popover-title")[this.options.html?"html":"text"](t);e.find(".popover-content")[this.options.html?typeof n=="string"?"html":"append":"text"](n);e.removeClass("fade top bottom left right in");e.find(".popover-title").html()||e.find(".popover-title").hide()};t.prototype.hasContent=function(){return this.getTitle()||this.getContent()};t.prototype.getContent=function(){var e=this.$element,t=this.options;return e.attr("data-content")||(typeof t.content=="function"?t.content.call(e[0]):t.content)};t.prototype.arrow=function(){return this.$arrow=this.$arrow||this.tip().find(".arrow")};t.prototype.tip=function(){this.$tip||(this.$tip=e(this.options.template));return this.$tip};var n=e.fn.popover;e.fn.popover=function(n){return this.each(function(){var r=e(this),i=r.data("bs.popover"),s=typeof n=="object"&&n;if(!i&&n=="destroy")return;i||r.data("bs.popover",i=new t(this,s));typeof n=="string"&&i[n]()})};e.fn.popover.Constructor=t;e.fn.popover.noConflict=function(){e.fn.popover=n;return this}}(jQuery);
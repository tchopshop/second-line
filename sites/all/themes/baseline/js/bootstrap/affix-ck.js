/* ========================================================================
 * Bootstrap: affix.js v3.1.1
 * http://getbootstrap.com/javascript/#affix
 * ========================================================================
 * Copyright 2011-2014 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 * ======================================================================== */+function(e){"use strict";var t=function(n,r){this.options=e.extend({},t.DEFAULTS,r);this.$window=e(window).on("scroll.bs.affix.data-api",e.proxy(this.checkPosition,this)).on("click.bs.affix.data-api",e.proxy(this.checkPositionWithEventLoop,this));this.$element=e(n);this.affixed=this.unpin=this.pinnedOffset=null;this.checkPosition()};t.RESET="affix affix-top affix-bottom";t.DEFAULTS={offset:0};t.prototype.getPinnedOffset=function(){if(this.pinnedOffset)return this.pinnedOffset;this.$element.removeClass(t.RESET).addClass("affix");var e=this.$window.scrollTop(),n=this.$element.offset();return this.pinnedOffset=n.top-e};t.prototype.checkPositionWithEventLoop=function(){setTimeout(e.proxy(this.checkPosition,this),1)};t.prototype.checkPosition=function(){if(!this.$element.is(":visible"))return;var n=e(document).height(),r=this.$window.scrollTop(),i=this.$element.offset(),s=this.options.offset,o=s.top,u=s.bottom;this.affixed=="top"&&(i.top+=r);typeof s!="object"&&(u=o=s);typeof o=="function"&&(o=s.top(this.$element));typeof u=="function"&&(u=s.bottom(this.$element));var a=this.unpin!=null&&r+this.unpin<=i.top?!1:u!=null&&i.top+this.$element.height()>=n-u?"bottom":o!=null&&r<=o?"top":!1;if(this.affixed===a)return;this.unpin&&this.$element.css("top","");var f="affix"+(a?"-"+a:""),l=e.Event(f+".bs.affix");this.$element.trigger(l);if(l.isDefaultPrevented())return;this.affixed=a;this.unpin=a=="bottom"?this.getPinnedOffset():null;this.$element.removeClass(t.RESET).addClass(f).trigger(e.Event(f.replace("affix","affixed")));a=="bottom"&&this.$element.offset({top:n-u-this.$element.height()})};var n=e.fn.affix;e.fn.affix=function(n){return this.each(function(){var r=e(this),i=r.data("bs.affix"),s=typeof n=="object"&&n;i||r.data("bs.affix",i=new t(this,s));typeof n=="string"&&i[n]()})};e.fn.affix.Constructor=t;e.fn.affix.noConflict=function(){e.fn.affix=n;return this};e(window).on("load",function(){e('[data-spy="affix"]').each(function(){var t=e(this),n=t.data();n.offset=n.offset||{};n.offsetBottom&&(n.offset.bottom=n.offsetBottom);n.offsetTop&&(n.offset.top=n.offsetTop);t.affix(n)})})}(jQuery);
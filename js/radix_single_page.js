/**
 * @file
 * Attaches the behaviors for the radix single page module.
 */

(function ($) {

Drupal.behaviors.radix_single_page = {
  attach: function (context, settings) {
    // Use smoothScroll for single page links.
    $('.single-page-link', context).smoothScroll();
  }
};

})(jQuery);

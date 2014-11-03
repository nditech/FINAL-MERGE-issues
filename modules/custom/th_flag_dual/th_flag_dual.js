(function ($) {

  Drupal.behaviors.th_flag_dual = {
    attach: function ( context, settings ) {
      $(context).one('flagGlobalBeforeLinkUpdate', function( event, data ) {

        var url = Drupal.settings.basePath
                + "th_flag_dual/get_json/"
                + data.flagName
                + '/'
                + data.contentId;

        $.getJSON( url, function( data ) {

          var $flagLink = $( data.selector ).find('.flag');
          $flagLink.removeClass('unflag-action')
                   .removeClass('flag-action')
                   .addClass(data.action_class)
                   .text(data.link_text)
                   .attr('href', data.link_href)
                   .attr('title', data.link_title);
        });
        return true;
      });
    }
  };

})(jQuery);
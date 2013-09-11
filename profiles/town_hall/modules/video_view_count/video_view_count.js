(function ($) {
  Drupal.video_views_count = function (id) {

    var players = Drupal.settings.video_view_count;

    for(var key in players) {
      var player = players[key];
      if (player['id'] == id ) {
        if (!player['counted']) {
          debugger;
          $.ajax({
            type: "POST",
            dataType: "json",
            url: Drupal.settings.basePath + 'video_view_count',
            data: {'nid': player['nid']},
            success : function(data) {
              debugger;
              player['counted'] = 1;
            }
          });
          return player['counted'];
        }
      }
    }
  }
})(jQuery);

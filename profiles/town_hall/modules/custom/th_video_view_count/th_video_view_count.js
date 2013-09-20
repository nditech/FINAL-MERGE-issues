(function ($) {
  Drupal.th_video_views_count = function (id) {

    var players = Drupal.settings.th_video_views_count;

    for(var key in players) {
      var player = players[key];
      if (player['id'] == id ) {
        if (!player['counted']) {
          $.ajax({
            type: "POST",
            dataType: "json",
            url: Drupal.settings.basePath + 'th_video_views_count',
            data: {'nid': player['nid']},
            success : function(data) {
              player['counted'] = 1;
            }
          });
          return player['counted'];
        }
      }
    }
  }
})(jQuery);

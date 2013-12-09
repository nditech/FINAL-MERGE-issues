<?php
/**
 * @file media_youtube/includes/themes/media-youtube-video.tpl.php
 *
 * Template file for theme('media_youtube_video').
 *
 * Variables available:
 *  $uri - The media uri for the YouTube video (e.g., youtube://v/xsy7x8c9).
 *  $video_id - The unique identifier of the YouTube video (e.g., xsy7x8c9).
 *  $id - The file entity ID (fid).
 *  $url - The full url including query options for the Youtube iframe.
 *  $options - An array containing the Media Youtube formatter options.
 *  $api_id_attribute - An id attribute if the Javascript API is enabled;
 *  otherwise NULL.
 *  $width - The width value set in Media: Youtube file display options.
 *  $height - The height value set in Media: Youtube file display options.
 *  $title - The Media: YouTube file's title.
 *  $alternative_content - Text to display for browsers that don't support
 *  iframes.
 *
 */

?>
<script src="https://www.youtube.com/iframe_api"></script>
<div id="media-youtube-<?php print $video_id; ?>"></div>
<script>
  setTimeout(function(){
    (function(YT){
      YT.ready(function(){
        Drupal.settings.th_video_view_count['<?php print $video_id; ?>'] = [];
        Drupal.settings.th_video_view_count['<?php print $video_id; ?>']['player'] = new YT.Player('media-youtube-<?php print $video_id; ?>', {
          height: '<?php print $height; ?>',
          width: '<?php print $width; ?>',
          videoId: '<?php print $video_id; ?>',
          events: {
            'onStateChange': function(event) {
              var id = '<?php print $video_id; ?>';
              if (event !== undefined && event.data !== undefined) {
                if (event.data == 1) {
                  Drupal.th_video_view_count(id);
                }
              }
            }
          }
        });
      });
    })(YT)}, 2000);
</script>

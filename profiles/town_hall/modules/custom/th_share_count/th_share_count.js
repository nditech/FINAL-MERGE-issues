(function ($) {
  $(document).ready(function(){
    $('.share_count').click(function(){

      debugger;
      $this = $(this);
      var data = {
        'url' : $this.attr('st_url')
      }

      $.ajax({
        type: "POST",
        dataType: "json",
        url: "/share_count_get_count",
        data: data,
        success : function( json ) {
          console.log(json);
        }
      });
    });
  });
})(jQuery);
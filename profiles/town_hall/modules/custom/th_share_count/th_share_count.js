(function ($) {
  $(document).ready(function(){
    $('.th_share_count').click(function(){

      debugger;
      $this = $(this);
      var data = {
        'url' : $this.attr('st_url')
      }

      $.ajax({
        type: "POST",
        dataType: "json",
        url: "/th_share_count_get_count",
        data: data,
        success : function( json ) {
          console.log(json);
        }
      });
    });
  });
})(jQuery);
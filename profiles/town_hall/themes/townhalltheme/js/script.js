jQuery(document).ready(function() {
jQuery('.view-id-candidates #edit-jump').chosen({disable_search:true});
jQuery('.view-id-parties #edit-jump--2').chosen({disable_search:true});
jQuery("#scroll-top").click(function() {
  jQuery("html, body").animate({ scrollTop: 0 }, "fast");
  return false;
 });

	var text_h = jQuery(".node-candidate .field-type-text-with-summary").height();
	var img_h = jQuery(".node-candidate .field-name-field-image img").height();
	if (text_h > img_h)
	{
		jQuery(".node-candidate .field-name-field-image").css({"height": text_h + 100});
	}
	var text_h2 = jQuery(".node-party .field-type-text-with-summary").height() + jQuery(".node-party .field-name-field-th-video").height();
	var img_h2 = jQuery(".node-party .field-name-field-image img").height();
	if (text_h2 > img_h2)
	{
	jQuery(".node-party .field-name-field-image").css({"height": text_h2 + 100});
	}
});

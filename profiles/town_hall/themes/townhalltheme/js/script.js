jQuery(document).ready(function() {
jQuery('.ctools-jump-menu-select').chosen({disable_search:true});
jQuery('.view-id-parties #edit-jump--2').chosen({disable_search:true});
jQuery("#scroll-top").click(function() {
  jQuery("html, body").animate({ scrollTop: 0 }, "fast");
  return false;
 });
visibility1=false;
visibility2=false;
jQuery("#block-th-main-menu-th-main-menu #edit_jump_chosen a.chosen-single").click(function() {  
  if (visibility1==false)
	{
		jQuery("#block-th-main-menu-th-main-menu #edit_jump__2_chosen .chosen-drop").css({"display": "none"});
  jQuery("#block-th-main-menu-th-main-menu #edit_jump_chosen .chosen-drop").css({"display": "block"});
  visibility1=true;
  visibility2=false;
	}
	else {
		 jQuery("#block-th-main-menu-th-main-menu #edit_jump_chosen .chosen-drop").css({"display": "none"});
		 visibility1=false;
	}
  return false;
 });
jQuery("#block-th-main-menu-th-main-menu #edit_jump__2_chosen a.chosen-single").click(function() {
if (visibility2==false)
	{
  jQuery("#block-th-main-menu-th-main-menu #edit_jump_chosen .chosen-drop").css({"display": "none"});
  jQuery("#block-th-main-menu-th-main-menu #edit_jump__2_chosen .chosen-drop").css({"display": "block"});
  visibility2=true;
  visibility1=false;
	}
	else {
		 jQuery("#block-th-main-menu-th-main-menu #edit_jump__2_chosen .chosen-drop").css({"display": "none"});
		 visibility2=false;
	}
  return false;
 });
});


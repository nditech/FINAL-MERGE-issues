// Behavior for mobile menu.
function mobileMenu(width) {

  if (width < 783) {
    jQuery('#block-th-main-menu-th-main-menu > .content > ul').addClass("mobile-enabled").removeClass('mobile-disabled');
  } else {
    jQuery('#block-th-main-menu-th-main-menu > .content > ul').removeClass("mobile-enabled").addClass('mobile-disabled');
  }

}

jQuery(document).ready(function() {

  jQuery('.ctools-jump-menu-select').chosen({disable_search:true});
  jQuery('.view-id-parties #edit-jump').chosen({disable_search:true});
  jQuery('.view-id-parties #edit-jump--2').chosen({disable_search:true});

  jQuery("#scroll-top").click(function() {
    jQuery("html, body").animate({ scrollTop: 0 }, "fast");
    return false;
  });

  var text_h2 = jQuery(".node-party .field-type-text-with-summary").height();
  var img_h2 = jQuery(".node-party .field-name-field-image img").height() - 40;
    if (text_h2 < img_h2)
    {
    jQuery(".node-party .field-type-link-field").css({"margin-left": 0});
    }

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

  var width = jQuery( window ).width();
  mobileMenu(width);
  jQuery('#block-th-main-menu-th-main-menu .mobile-menu-control').click(function() {
    jQuery('#block-th-main-menu-th-main-menu > .content > ul').slideToggle();
  });
  jQuery('#block-th-main-menu-th-main-menu .view-header').click(function() {
    jQuery(this).next('.view-content').slideToggle();
  });

});

jQuery( window ).resize(function() {

  var width = jQuery( window ).width();
  console.log(width);
  mobileMenu(width);

});
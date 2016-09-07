$(function() {
  $('.toggle-nav').click(function() {
    toggleNav();
  });
});
function toggleNav() {
  if($('#main-wrapper').hasClass('show-nav')) {
    $('#main-wrapper').removeClass('show-nav');
  }
  else {
    $('#main-wrapper').addClass('show-nav');
  }
}

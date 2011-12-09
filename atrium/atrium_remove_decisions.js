Drupal.behaviors.atrium = function(context) {
  $('ul li a').each(function() {
     if (($(this).attr('href') == '/node/add/decisions-selection') || ($(this).attr('href').search('/node/add/decisions-selection') != -1))  {
       $(this).parent().remove();
     }
  });
  if ((window.location.href == '/node/add/decisions-selection' ) || (window.location.href.search('/node/add/decisions-selection') != -1)){
      window.location.href = window.location.href.replace('/node/add/decisions-selection', '/node/add/decisions-selection');
  }
}
Drupal.behaviors.atrium = function(context) {
  $('ul li a').each(function() {
     if (($(this).attr('href') == '/node/add/piratepad') || ($(this).attr('href').search('/node/add/piratepad') != -1))  {
       $(this).parent().remove();
     }
  });
  if ((window.location.href == '/node/add/piratepad' ) || (window.location.href.search('/node/add/piratepad') != -1)){
      window.location.href = window.location.href.replace('/node/add/piratepad', '/node/piratepad');
  }
}
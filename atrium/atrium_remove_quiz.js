Drupal.behaviors.atrium = function(context) {
  $('ul li a').each(function() {
     if (($(this).attr('href') == '/node/add/quiz') || ($(this).attr('href').search('/node/add/quiz') != -1))  {
       $(this).parent().remove();
     }
  });
  if ((window.location.href == '/node/add/quiz' ) || (window.location.href.search('/node/add/quiz') != -1)){
      window.location.href = window.location.href.replace('/node/add/quiz', '/node/quiz');
  }
}
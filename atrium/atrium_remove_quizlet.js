Drupal.behaviors.atrium = function(context) {
  $('ul li a').each(function() {
     if (($(this).attr('href') == '/node/add/quizlet') || ($(this).attr('href').search('/node/add/quizlet') != -1))  {
       $(this).parent().remove();
     }
  });
  if ((window.location.href == '/node/add/quizlet' ) || (window.location.href.search('/node/add/quizlet') != -1)){
      window.location.href = window.location.href.replace('/node/add/quizlet', '/node/quiz');
  }
}
Drupal.behaviors.atrium_remove_poll = function(context) {
  $('ul li a').each(function() {
     if (($(this).attr('href') == '/node/add/poll') || ($(this).attr('href').search('/node/add/poll') != -1)) {
       $(this).parent().remove();
     }
  });
  if ((window.location.href == '/node/add/poll' ) || (window.location.href.search('/node/add/poll') != -1)){
      window.location.href = window.location.href.replace('/node/add/poll', '/node/add');
  }

}
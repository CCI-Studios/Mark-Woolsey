(function($){    
    $(function(){
        $('.view-other-images .views-row a.swipebox').swipebox();
        $('.view-mls-listing-images .views-row a.swipebox').swipebox();
        $('.field-name-field-img a').swipebox();
         $('.view-open-houses .views-field-field-img a').swipebox();
        var max= $('.view-home-slider .views-row').length;
        for(var i=1; i<=max-1; i++)
        {	
	    	var imgSrc = $('.view-home-slider .views-row-'+i+' .views-field-field-background-image .field-content img').attr('src');
	    	var current1 = $('.view-home-slider .views-row-'+i+' .views-field-field-background-image .field-content');
			$('.view-home-slider .views-row-'+i+' .views-field-field-background-image .field-content img').remove();
			$(current1).html('<div class="backbg"></div>');
		    $('.view-home-slider .views-row-'+i+' .views-field-field-background-image .field-content .backbg').css('background-image', 'url(' + imgSrc + ')');		
       }
    });


})(jQuery);

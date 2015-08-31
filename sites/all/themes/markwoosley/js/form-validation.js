(function($) 
	{	

		$('#edit-field-price-mls1-value--2,#edit-field-price-mls1-value').prepend('<option value="ALL" selected="selected">Any</option>');

		$(function(){

			$("#edit-field-type-list-value--2,#edit-field-type-list-value,#edit-field-bedrooms-mls-value--2,#edit-field-bedrooms-mls-value,#edit-field-bathrooms-mls-value--2,#edit-field-bathrooms-mls-value,#edit-field-price-mls1-value--2,#edit-field-price-mls1-value,#edit-field-price-mls1-value-1,#edit-field-price-mls1-value-1--2").selectbox({
			onOpen: function (inst) {
				$(this).parent().parent().parent().find('.sbSelector').addClass('changeback');
			},
			onClose: function (inst) {
				$(this).parent().parent().parent().find('.sbSelector').removeClass('changeback');
			},
			
			effect: "slide"

		});

		
		if (document.location.href.indexOf('submitted') > -1  )
			{
				$('#block-block-9').fadeIn();
				$('#block-block-9').addClass('overlay');	
			}

			$(document).mouseup(function (e)
			{	
				var container =$('#block-block-9');
				if (!container.is(e.target)
					        && container.has(e.target).length === 0) 
					    {
					        container.fadeOut();
					    }
			});
			$('.view-mls .views-field-nothing a').click(function(event)
			{		
					event.preventDefault();
					var url=$(this).attr('href')
					var url1=$(location).attr('search');
					var path=url+url1
					$(location).attr('href',path);

		});
			$('.view-deatils-mls .blue-button').click(function(event){

				event.preventDefault();
				var url=$(this).attr('href')
				var url1=$(location).attr('search');
				var path=url+url1
				$(location).attr('href',path);

			});
		$("#block-webform-client-block-4 .form-submit")

		$("#block-webform-client-block-4 .form-submit").click(function(event) {

		var email = $("#block-webform-client-block-4 .webform-component--email input").val();
  
		var emailReg = new RegExp(/^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i);
		var valid = emailReg.test(email);

		var name = $("#block-webform-client-block-4 .webform-component--name input").val();
		var message = $("#block-webform-client-block-4 .webform-component--message textarea").val();


		if ( !valid || name=='' || message=='' ) 
		{	
		 event.preventDefault();
		
		 var div="<div id=\"error\"><p>Please fill all required fields</p></div>"
		 $('#error').remove();
		 $("#block-webform-client-block-4").append(div);
		 return false;
		}
		else
		{	
			return true;
		} 
		});

	});

		
}(jQuery));
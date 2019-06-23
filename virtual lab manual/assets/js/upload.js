$(document).ready(function(){
	$("#uploadManualForm").submit(function(){
		$("#preloader").fadeIn();
		var year=$("#manualYear").removeClass("is-invalid").val();
		var title=$("#manualTitle").removeClass("is-invalid").val();
		var mfile=$("#manualFile").removeClass("is-invalid").val();
		if(year<1){
			$("#manualYear").addClass("is-invalid").focus();
			alert("please select year");
			$("#preloader").fadeOut();
		}
		else if(title.length<5){
			$("#manualTitle").addClass("is-invalid").focus();
			alert("Enter valid Title");
			$("#preloader").fadeOut();
		}
		else if(!mfile){
			$("#manualFile").addClass("is-invalid").focus();
			alert("Please select file to upload");
			$("#preloader").fadeOut();
		}
		else{
			var formData=new FormData();
			formData.append("op","upload_manual");
			formData.append("year",year);
			formData.append("title",title);
			formData.append('mfile', $('input[type=file]')[0].files[0]);
			$.ajax({
				url:"verify.php",
				type:"POST",
				data:formData,
			    processData: false,
			    contentType: false,
				success:function(response){
					console.log(response);
					try{
						var resp=JSON.parse(response);
						if(resp.code=="UPLOAD_MANUAL_SUC"){
							alert("Manual Uploaded Successfull");
						}
						else{
							alert(resp.msg);
						}
						$('#uploadManualForm')[0].reset();
						$("#preloader").fadeOut();
					}catch(err){
						alert(err);
						$("#preloader").fadeOut();
					}
				},
				error:function(xhr,status,code){
					console.log(xhr);
					alert("Network Error! Please check your internet connection and try again!");
					$("#preloader").fadeOut();
				}
			})
		}
		return false;
	});
});
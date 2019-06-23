$(document).ready(function(){
	$("#year").on("change",function(){
		$("#preloader").fadeIn();
		$.ajax({
			url:"verify.php",
			type:"POST",
			data:{"op":"fetch_manuals",year:$("#year").val()},
			success:function(response){
				console.log(response);
				try{
					var resp=JSON.parse(response);
					if(resp.code=="FETCH_MANUALS_SUC"){
						var manuals="";
						for(var i=0;i<resp.manuals.length;i++){
							var tmp='<a href="'+resp.manuals[i].path+'">'+resp.manuals[i].title+'</a>';
							console.log(tmp);
							manuals+=tmp;
						}
						$("#manuals").html(manuals);
						$("#preloader").fadeOut();
					}
					else{
						alert(resp.msg);
						$("#preloader").fadeOut();
					}
				}catch(err){
						alert(err);
						$("#preloader").fadeOut();
				}
			},
			error:function(xhr,status,smt){
				console.log(xhr);
				alert("Network Error! Please check your internet connection and try again!");
			}
		})
	});
});
$(document).ready(function(){
	function isEmail(mail){
	 return (/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(mail))
	}
	$("#signupForm").submit(function(){
		var username=$("#username").removeClass("is-invalid").val();
		var email=$("#email").removeClass("is-invalid").val();
		var password=$("#password").removeClass("is-invalid").val();
		var password2=$("#password2").removeClass("is-invalid").val();
		if(username.length<5){
			$("#username").addClass("is-invalid").focus();
			alert("invalid Full Name");
		}
		else if(!isEmail(email)){
			$("#email").addClass("is-invalid").focus();
			alert("invalid email");
		}
		else if(password.length<5){
			$("#password").addClass("is-invalid").focus();
			alert("invalid password");
		}
		else if(password!=password2){
			$("#password2").addClass("is-invalid").focus();
			alert("passwords dont match");
		}
		else{
			$.ajax({
				url:"verify.php",
				type:"POST",
				data:{"op":"signup","username":username,"email":email,"password":password},
				success:function(response){
					console.log(response);
					try{
						var resp=JSON.parse(response);
						if(resp.code=="SIGNUP_SUC"){
							window.location="index.php";
						}
						else{
							alert(resp.msg);
						}
					}catch(err){
						alert(err);
					}
				},
				error:function(xhr,status,soemthing){
					console.log(xhr);
					alert("Network Error! Please check your internet connection and try again!");
				}
			})
		}
		return false;
	})
});
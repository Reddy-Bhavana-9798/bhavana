$(document).ready(function(){
	function isEmail(mail){
	 return (/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(mail))
	}
	$("#loginForm").submit(function(){
		var email=$("#email").removeClass("is-invalid").val();
		var password=$("#password").removeClass("is-invalid").val();
		if(!isEmail(email)){
			$("#email").addClass("is-invalid").focus();
			alert("invalid email");
		}
		else if(password.length<5){
			$("#password").addClass("is-invalid").focus();
			alert("invalid password");
		}
		else{
			$.ajax({
				url:"verify.php",
				type:"POST",
				data:{"op":"login","email":email,"password":password},
				success:function(response){
					console.log(response);
					try{
						var resp=JSON.parse(response);
						if(resp.code=="LOGIN_SUC"){
							window.location="index.php";
						}
						else{
							alert("Invalid Email/Password");
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
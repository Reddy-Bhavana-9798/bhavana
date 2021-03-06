<?php
if(isset($_COOKIE["uid"])){
	header("location: dashboard.php");
}
?>
<html>
	<head>
		<title>Login | IWT</title>
		<link rel="stylesheet" href="assets/css/bootstrap.min.css">
	</head>
	<body>
		<div class="container">
			<div class="row justify-content-center mt-5">
				<div class="col-md-6">
					<div class="card">
						<div class="card-body">
							<form action="" id="loginForm">
								<div class="form-group">
									<label for="email">Email</label>
									<input type="email" id="email" class="form-control">
								</div>
								<div class="form-group">
									<label for="password">Password</label>
									<input type="password" id="password" class="form-control">
								</div>
								<div class="form-group">
									<button class="btn btn-primary" type="submit">Login</button>
									<a href="signup.php">Not a Member? Signup Now!</a>
								</div>
							</form>
						</div>
					</div>
				</div>
			</div>
		</div>
		<script type="text/javascript" src="assets/js/jquery.min.js"></script>
		<script type="text/javascript" src="assets/js/popper.min.js"></script>
		<script type="text/javascript" src="assets/js/bootstrap.min.js"></script>
		<script type="text/javascript" src="assets/js/login.js"></script>
	</body>
</html>
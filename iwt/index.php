<?php
if(!isset($_COOKIE["uid"])){
	header("location: login.php");
}
?>
<html>
	<head>
		<title>Home</title>
		<link rel="stylesheet" href="assets/css/bootstrap.min.css">
		<link rel="stylesheet" href="assets/css/main.css">
	</head>
	<body>
		<div id="preloader">
			<div class="spinner-border text-primary" role="status">
			  <span class="sr-only">Loading...</span>
			</div>
		</div>
		<div class="text-center mt-4">
			<h1>
				DSCE AUTONOMOUS
				<a class="float-right btn btn-danger btn-sm mr-4" href="logout.php">Logout</a>
				<a class="float-right btn btn-warning btn-sm mr-4" href="upload.php">Upload Manual</a>
			</h1>

		</div>
		<div class="container">
			<div class="row justify-content-center mt-4">
				<div class="col-md-8">
					<div class="card">
						<div class="card-body">
							<form id="searchForm" action="">
								<div class="form-group">
									<label for="year">Select Year</label>
									<select id="year" class="form-control">
										<option value="-1" selected disabled>Select Year</option>
										<option value="1">1<sup>st</sup> Year</option>
										<option value="2">2<sup>nd</sup> Year</option>
										<option value="3">3<sup>rd</sup> Year</option>
									</select>
								</div>
							</form>
						</div>
					</div>
				</div>
			</div>
			<div class="row justify-content-center mt-5">
				<div class="col-md-10">
					<div class="card">
						<div class="card-body">
							<h1>Manuals</h1>
							<div id="manuals">
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
		<script type="text/javascript" src="assets/js/jquery.min.js"></script>
		<script type="text/javascript" src="assets/js/popper.min.js"></script>
		<script type="text/javascript" src="assets/js/bootstrap.min.js"></script>
		<script type="text/javascript" src="assets/js/main.js"></script>
	</body>
</html>
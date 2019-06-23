<?php
if(!isset($_COOKIE["uid"])){
	header("location: login.php");
}
?>
<html>
	<head>
		<title>Upload Manual</title>
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
				<a class="float-right btn btn-primary btn-sm mr-4" href="index.php">Go Home</a> 
			</h1>

		</div>
		<div class="container">
			<div class="row justify-content-center mt-5">
				<div class="col-md-10">
					<div class="card">
						<div class="card-body">
							<h1>Upload Manual</h1>
							<form id="uploadManualForm" enctype="multipart/form-data">
								<div class="form-group">
									<label for="manualYear">Select Year</label>
									<select id="manualYear" class="form-control">
										<option value="0" selected disabled>Select Year</option>
										<option value="1">1<sup>st</sup> Year</option>
										<option value="2">2<sup>nd</sup> Year</option>
										<option value="3">3<sup>rd</sup> Year</option>
									</select>
								</div>
								<div class="form-group">
									<label for="manualTitle">Title</label>
									<input type="text" id="manualTitle" class="form-control">
								</div>
								<div class="form-group">
									<label for="manualFile">Select File</label>
									<input type="file" id="manualFile" class="form-control">
								</div>
								<div class="form-group">
									<button type="submit" class="btn btn-primary">Upload</button>
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
		<script type="text/javascript" src="assets/js/upload.js"></script>
	</body>
</html>
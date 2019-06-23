<?php
include("config.php");
$response=array("code"=>"INV_RQT","msg"=>"Invalid Request");
if(isset($_POST["op"])){
	if($_POST["op"]=="login"){
		$email=$_POST["email"];
		$password=md5($_POST["password"]);
		$sql="SELECT * FROM users WHERE email='$email' AND password='$password'";
		$result=$conn->query($sql);
		if($result->num_rows>0){
			while($row=$result->fetch_assoc()){
				setcookie("uid",$row['uid']);
				setcookie("username",$row['username']);
				$response["code"]="LOGIN_SUC";
				$response["msg"]="Login Successfull";
			}
		}else{
			$response["code"]="LOGIN_ERR";
			$response["msg"]="Login Failed";
		}
	}
	else if($_POST["op"]=="signup"){
		$email=$_POST["email"];
		$username=$_POST["username"];
		$password=md5($_POST["password"]);
		$sql="SELECT * FROM users WHERE email='$email'";
		$result=$conn->query($sql);
		if($result->num_rows==0){
			$sql="INSERT INTO users (email,password,username) VALUES ('$email','$password','$username')";
			if(mysqli_query($conn,$sql)){
				$uid=mysqli_insert_id($conn);
				setcookie("uid",$uid);
				$response["code"]="SIGNUP_SUC";
				$response["msg"]="Signed up Successfully";
			}else{
				$response["code"]="SIGNUP_ERR_2";
				$response["msg"]="Error Occured while inserting new user";
				$response["err"]=mysqli_error($conn);
			}
		}
		else{
			$response["code"]="SIGNUP_ERR_1";
			$response["msg"]="Email already registered";
		}
	}
	else if($_POST["op"]=="fetch_manuals"){
		$manuals=[];
		$year=$_POST["year"];
		$sql="SELECT * FROM manuals WHERE year='$year'";
		$result=$conn->query($sql);
		if($result->num_rows>0){
			while($row=$result->fetch_assoc()){
				$manuals[]=array("path"=>$row["path"],"title"=>$row["title"]);
			}
		}
		$response["code"]="FETCH_MANUALS_SUC";
		$response["msg"]="Fetched Manuals Successfully";
		$response["manuals"]=$manuals;
	}
	else if($_POST["op"]=="upload_manual"){
		$year=$_POST["year"];
		$title=$_POST['title'];
		$target_dir = "files/";
		$target_file = $target_dir . basename($_FILES["mfile"]["name"]);
		$fileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));
		if (file_exists($target_file)) {
			$response["code"]="UPLOAD_MANUAL_ERR_1";
			$response["msg"]="File Already Exists! Rename and Upload";
		}
		else if($fileType!="doc" && $fileType!="docx" && $fileType!="pdf"){
			$response["code"]="UPLOAD_MANUAL_ERR_2";
			$response["msg"]="Only DOC, DOCX and PDF files allowed";
		}
		else{
			if (move_uploaded_file($_FILES["mfile"]["tmp_name"], $target_file)) {
				$sql="INSERT INTO manuals (`year`,`title`,`path`) VALUES ('$year','$title','$target_file')";
				if(mysqli_query($conn,$sql)){
					$response["code"]="UPLOAD_MANUAL_SUC";
					$response["msg"]="Manual Uploaded Successfully";
				}
				else{
					$response["code"]="UPLOAD_MANUAL_ERR_3";
					$response["msg"]="Error occured whle uploading Manual";
					$response["err"]=mysqli_error($conn);
				}
			}
		}
	}
}
echo json_encode($response);
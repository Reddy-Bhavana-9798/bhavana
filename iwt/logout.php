<?php
if(isset($_COOKIE["uid"])){
	setcookie("uid","",-3600);
}
header("location: login.php");
?>
<?php
date_default_timezone_set('asia/kolkata');
$db_host = "localhost";
$db_username = "root";
$db_password = "";
$db_name = "iwt";
$conn = new mysqli($db_host, $db_username, $db_password, $db_name);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
?>
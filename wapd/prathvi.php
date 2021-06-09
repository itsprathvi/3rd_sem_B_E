<?php
$conn=mysqli_connect("localhost","root","","prathviraj");
if($conn==false)
{
    dir("connection failed");
}
echo "hi";
$usn=$_POST["usn"];
$name=$_POST["name"];
$sem=$_POST["sem"];
$cgpa=$_POST["cgp"];
$sgpa=$_POST["sgp"];
echo $usn;
$sql="INSERT INTO Student(USN,NAME,SEM,CGPA,SGPA) VALUES('$usn','$name','$sem','$cgpa','$sgpa')";
$result=mysqli_query($conn,$sql);
if($result){
    echo "hhhh";
}
else{
    echo "k";
}
?>
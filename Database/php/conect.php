<?php
$database = 'db1';
$user = 'postgres';
$password = '123';
$hostname = 'localhost';
$port = 5432;
$db = odbc_connect("Driver={Devart ODBC Driver for PostgreSQL};HOSTNAME=$hostname;
                    Database=$database;PORT=$port;PROTOCOL=TCPIP;", $user, $password);
if($db){
    echo 'conectado';
}

odbc_close($db);

?>
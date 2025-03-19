<?php

header('Content-Type: application/json');

$response = [
    'message' => 'Hello, I was waiting for you',
    'image_url' => 'https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExemoxYTU1cGJqbTdyaXZleW5mMWlyZXk5M2ViaXN6MHAzemEwNmg4aSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/YJ85eVpdZDy7e/giphy.gif'
];

echo json_encode($response);

?>

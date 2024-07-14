<?php
/* @autor Gaston Descalzo */
include_once '../../class/autoload.php';

$database = new Database();
$db = $database->getConnection();

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $producto = new Producto($db);
    $producto->nombre = $_POST['nombre'];
    $producto->descripcion = $_POST['descripcion'];
    $producto->categoria_id = $_POST['categoria_id'];

    if ($producto->guardar()) {
        echo "Producto guardado exitosamente.";
    } else {
        echo "Error al guardar el producto.";
    }
}
?>
<?php
/* @autor Gaston Descalzo */
include_once '../../class/autoload.php';

$database = new Database();
$db = $database->getConnection();

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $categoria = new Categoria($db);
    $categoria->nombre = $_POST['nombre'];

    if ($categoria->guardar()) {
        echo "Categoría guardada exitosamente.";
    } else {
        echo "Error al guardar la categoría.";
    }
}
?>
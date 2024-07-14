<?php
/* @autor Gaston Descalzo */
include_once '../../class/autoload.php';

$database = new Database();
$db = $database->getConnection();

$query = "SELECT * FROM categorias";
$categorias = $db->select($query, []);
?>
<!DOCTYPE html>
<html>

<head>
    <title>Listado de Categorías</title>
    <link rel="stylesheet" type="text/css" href="../../assets/css/estilos.css">
</head>

<body>
    <h1>Listado de Categorías</h1>
    <table>
        <tr>
            <th>ID</th>
            <th>Nombre</th>
        </tr>
        <?php foreach ($categorias as $categoria): ?>
            <tr>
                <td><?php echo $categoria['id']; ?></td>
                <td><?php echo $categoria['nombre']; ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
    <a href="categorias.php">Agregar Categoría</a>
    <div class="center">Gastón Des
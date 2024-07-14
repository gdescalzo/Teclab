<?php
/* @autor Gaston Descalzo */
include_once '../../class/autoload.php';

$database = new Database();
$db = $database->getConnection();

$query = "SELECT p.id, p.nombre, p.descripcion, c.nombre as categoria FROM productos p LEFT JOIN categorias c ON p.categoria_id = c.id";
$productos = $db->select($query, []);
?>
<!DOCTYPE html>
<html>

<head>
    <title>Listado de Productos</title>
    <link rel="stylesheet" type="text/css" href="../../assets/css/estilos.css">
</head>

<body>
    <h1>Listado de Productos</h1>
    <table>
        <tr>
            <th>ID</th>
            <th>Nombre</th>
            <th>Descripción</th>
            <th>Categoría</th>
        </tr>
        <?php foreach ($productos as $producto): ?>
            <tr>
                <td><?php echo $producto['id']; ?></td>
                <td><?php echo $producto['nombre']; ?></td>
                <td><?php echo $producto['descripcion']; ?></td>
                <td><?php echo $producto['categoria']; ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
    <a href="productos.php">Agregar Producto</a>
    <div class="center">Gastón Descalzo</div>
</body>

</html>
$(document).ready(function () {
    $('#form-categorias').submit(function (event) {
        var idCategoria = $('#id_categoria').val().trim();
        var nombreCategoria = $('#nombre_categoria').val().trim();
        var camposInvalidos = [];

        if (idCategoria === "") {
            camposInvalidos.push('ID Categoría');
        }
        if (nombreCategoria === "") {
            camposInvalidos.push('Nombre Categoría');
        }

        if (camposInvalidos.length > 0) {
            event.preventDefault();
            alert("Campos vacíos o inválidos: " + camposInvalidos.join(', ') + "\nNombre: Tu Nombre y Apellido");
        }
    });

    $('#form-productos').submit(function (event) {
        var idProducto = $('#id_producto').val().trim();
        var nombreProducto = $('#nombre_producto').val().trim();
        var imagenProducto = $('#imagen_producto').val().trim();
        var descripcionProducto = $('#descripcion_producto').val().trim();
        var precioProducto = $('#precio_producto').val().trim();
        var categoriaProducto = $('#categoria_producto').val().trim();
        var camposInvalidos = [];

        if (idProducto === "") {
            camposInvalidos.push('ID Producto');
        }
        if (nombreProducto === "") {
            camposInvalidos.push('Nombre Producto');
        }
        if (imagenProducto === "") {
            camposInvalidos.push('Imagen Producto');
        }
        if (descripcionProducto === "") {
            camposInvalidos.push('Descripción Producto');
        }
        if (precioProducto === "") {
            camposInvalidos.push('Precio Producto');
        }
        if (categoriaProducto === "") {
            camposInvalidos.push('Categoría Producto');
        }

        if (camposInvalidos.length > 0) {
            event.preventDefault();
            alert("Campos vacíos o inválidos: " + camposInvalidos.join(', ') + "\nNombre: Tu Nombre y Apellido");
        }
    });
});

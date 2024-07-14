<?php
/* @autor Gaston Descalzo */

class Producto
{
    private $conn;
    private $table_name = "productos";

    public $id;
    public $nombre;
    public $descripcion;
    public $categoria_id;

    public function __construct($db)
    {
        $this->conn = $db;
    }

    public function guardar()
    {
        $query = "INSERT INTO " . $this->table_name . " SET nombre=:nombre, descripcion=:descripcion, categoria_id=:categoria_id";
        $params = [
            ':nombre' => $this->nombre,
            ':descripcion' => $this->descripcion,
            ':categoria_id' => $this->categoria_id
        ];
        return $this->conn->insert($query, $params);
    }

    public function eliminar()
    {
        $query = "DELETE FROM " . $this->table_name . " WHERE id=:id";
        $params = [':id' => $this->id];
        return $this->conn->delete_($query, $params);
    }
}
?>
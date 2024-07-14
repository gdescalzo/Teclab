<?php
/* @autor Gaston Descalzo */

class Categoria
{
    private $conn;
    private $table_name = "categorias";

    public $id;
    public $nombre;

    public function __construct($db)
    {
        $this->conn = $db;
    }

    public function guardar()
    {
        $query = "INSERT INTO " . $this->table_name . " SET nombre=:nombre";
        $params = [':nombre' => $this->nombre];
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
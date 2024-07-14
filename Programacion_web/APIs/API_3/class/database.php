<?php
/* @autor Gaston Descalzo */

class Database
{
    private $host = 'localhost';
    private $db_name = 'MIPROYECTO';
    private $username = 'root';
    private $password = '';
    public $conn;

    public function getConnection()
    {
        $this->conn = null;

        try {
            $this->conn = new PDO("mysql:host=" . $this->host . ";dbname=" . $this->db_name, $this->username, $this->password);
            $this->conn->exec("set names utf8");
        } catch (PDOException $exception) {
            echo "Connection error: " . $exception->getMessage();
        }

        return $this->conn;
    }

    public function insert($query, $params)
    {
        $stmt = $this->conn->prepare($query);
        return $stmt->execute($params);
    }

    public function update($query, $params)
    {
        $stmt = $this->conn->prepare($query);
        return $stmt->execute($params);
    }

    public function delete_($query, $params)
    {
        $stmt = $this->conn->prepare($query);
        return $stmt->execute($params);
    }

    public function select($query, $params)
    {
        $stmt = $this->conn->prepare($query);
        $stmt->execute($params);
        return $stmt->fetchAll(PDO::FETCH_ASSOC);
    }
}
?>
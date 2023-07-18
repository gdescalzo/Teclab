-- 4.1 PROCEDIMIENTO ALMACENADO DE DEVOLUCION DE UN LIBRO

CREATE OR REPLACE FUNCTION devolver_libro(idLector INTEGER, idLibro INTEGER) RETURNS VOID AS $$
BEGIN
  DELETE FROM lectoreslibros
  WHERE id_lectores = idLector AND id_libros = idLibro;
END;
$$ LANGUAGE plpgsql;


SELECT * FROM lectoresLibros;


SELECT devolver_libro(2, 9);

-- 4.2 CREACION DE TTABLA DE LOGS PARA ALMACENAR EL IDENTIFICADOR DE LECTOR Y EL IDENTIFICADOR
-- DE LIBRO JUNTO A LA FECHA Y HORA DE LA DEVOLUCION.

CREATE TABLE devolucion_log(id_lectores INTEGER NOT NULL, id_libros INTEGER NOT NULL, fecha TIMESTAMP);

-- FUNCION TRIGGER

CREATE OR REPLACE FUNCTION funcion_tr_delete() RETURNS TRIGGER AS $$
BEGIN
INSERT INTO devolucion_log(id_lectores, id_libros, fecha) VALUES (OLD.id_lectores, OLD.id_libros, now());
RETURN OLD;
END
$$ LANGUAGE plpgsql;

-- CREAMOS EL TRIGGER

CREATE TRIGGER trigger_delete
BEFORE
DELETE on lectoresLibros
FOR EACH ROW EXECUTE PROCEDURE funcion_tr_delete();

SELECT devolver_libro(1, 4);
SELECT * FROM devolucion_log;

-- 4.3 FUNCION QUE PERMITE SABER LA CANTIDAD DE EJEMPLARES PRESTADOS ACTUALMENTE

CREATE OR REPLACE FUNCTION retornar_cantidad_prestados(INTEGER) RETURNS BIGINT AS 'SELECT COUNT(id_libros) AS cantidad FROM lectoresLibros WHERE id_libros = $1;' LANGUAGE SQL;

SELECT retornar_cantidad_prestados(5);
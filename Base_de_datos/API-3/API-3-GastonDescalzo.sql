-- CREAR TABLA LECTORES
CREATE TABLE Lectores( 
    id serial, nombre varchar(100),
    apellido varchar(100),
    email varchar (100),
    nacimiento date, 
    PRIMARY KEY (id)
);

-- INSERTAR LECTORES
/*1*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Juan Alberto', 'Cortez', 'juancortez@gmail.com', '20/06/1983');

/*2*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Antonia', 'De los Rios', 'antoniarios_23@yahoo.com', '24/11/1978');

/*3*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Nicolas', 'Martin', 'nico_martin23@gmail.com', '11/07/1986');

/*4*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Nestor', 'Casco', 'nestor_casco2331@hotmail.com', '11/02/1981');
						
/*5*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Lisa', 'Perez', 'lisperez@hotmail.com', '11/08/1994');

/*6*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Ana Rosa', 'Estagnolli', 'anros@abcdatos.com', '15/10/1974');

/*7*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Milagros', 'Pastoruti', 'mili_231@gmail.com', '22/01/2001');

/*8*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Pedro', 'Alonso', 'alonso.pedro@imperemeabilizantesrosario.com', '05/09/1983');

/*9*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Arturo Ezequiel', 'Ramirez', 'artu.rama@outlook.com', '23/03/1998');

/*10*/ INSERT INTO Lectores (nombre, apellido, email, nacimiento) values 
						('Juan Ignacio', 'Altarez', 'juanaltarez.223@yahoo.com', '24/08/1975');

-- VER CONTENIDO DE LECTORES
SELECT * FROM Lectores;

-- CREAR TABLA LECTORES
CREATE TABLE Libros(
    id serial, 
    nombre varchar(100),
    editorial varchar(100),
    autor varchar (100),
    isbn int,
    PRIMARY KEY (id)
);

-- INSERTAR LIBROS
/*1*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('Cementerio de animales','Ediciones de Mente','Stephen King',4568874);

/*2*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('En el nombre de la rosa','Editorial España','Umberto Eco',44558877);
						
/*3*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('Cien años de soledad','Sudamericana','Gabriel Garcia Marquez',7788845);

/*4*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('El diario de Ellen Rimbauer','Editorial Maine','Stephen King',45699874);

/*5*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('La hojarasca','Sudamericana','Gabriel Garcia Marquez',7787898);

/*6*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('El amor en los tiempos del colera','Sudamericana','Gabriel Garcia Marquez',2564111);
						
/*7*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('La casa de los espiritus','Ediciones Chile','Isabel Allende',5544781);
						
/*8*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('Paula','Ediciones Chile','Isabel Allende',22545447);

/*9*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('La tregua','Alfa','Mario Benedetti',2225412);

/*10*/ INSERT INTO Libros (nombre, editorial, autor, isbn) values 
                        ('Gracias por el fuego','Alfa','Mario Benedetti',88541254);

/* 
-- VISUALIZAMOS LAS TABLAS
SELECT * FROM lectores;
SELECT * FROM libros;
SELECT * FROM lectoresLibros;
SELECT * FROM lectoresLibros where id_lectores = 6;
*/

/* 
-- BORRAMOS
DELETE FROM Libros WHERE id = 5;
TRUNCATE TABLE Libros;
DROP TABLE lectores;
DROP TABLE Libros;
DROP TABLE lectoresLibros;
*/

-- CREAMOS TABLA PIVOT
CREATE TABLE lectoresLibros(
    id_lectores int;
    id_libros int;
    CONSTRAINT lectoresLibros_idLectores FOREIGN KEY(id_lectores) REFERENCES Lectores(id),
    CONSTRAINT lectoresLibros_idLibros FOREIGN KEY(id_libros) REFERENCES libros(id),
    PRIMARY KEY(id_lectores, id_libros)
);

-- 4 LECTORES TIENEN EN PRESTAMO 5 LIBROS CADA UNO
-- insertar en tabla pivote
-- prestamos al primer lector
/*1*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (1, 1);
/*1*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (1, 2);
/*1*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (1, 3);
/*1*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (1, 4);
/*1*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (1, 5);

-- prestamos al segundo lector
/*2*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (2, 5);
/*2*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (2, 6);
/*2*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (2, 7);
/*2*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (2, 8);
/*2*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (2, 9);

-- prestamos al tercer lector
/*3*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (3, 2);
/*3*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (3, 4);
/*3*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (3, 6);
/*3*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (3, 8);
/*3*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (3, 1);

-- prestamos al cuarto lector
/*4*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (4, 1);
/*4*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (4, 3);
/*4*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (4, 5);
/*4*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (4, 7);
/*4*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (4, 9);

-- 3 LECTORES TIENEN EN PRESTAMOS 3 LIBROS
-- insertar en tabla pivote
-- prestamo al quinto lector
/*5*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (5, 1);
/*5*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (5, 3);
/*5*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (5, 5);

-- prestamo al sexto lector
/*6*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (6, 7);
/*6*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (6, 8);
/*6*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (6, 9);

-- prestamo al septimo lector
/*7*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (7, 2);
/*7*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (7, 4);
/*7*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (7, 6);

-- 2 LECTORES TIENEN EN PRESTAMOS 1 LIBROS
-- insertar en tabla pivote
-- prestamo al octavo lector
/*8*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (8, 2);

-- prestamo al octavo lector
/*9*/ INSERT INTO lectoresLibros (id_lectores, id_libros) values (9, 5);

-- CONSULTA PARA SABER CUANTAS VECES SE PRESTA UN DETERMINADO LIBRO, ORDENADO DE MAYOR A MENOR
SELECT id_libros, COUNT(id_libros) AS cantidad FROM lectoresLibros GROUP BY id_libros ORDER BY cantidad DESC;

SELECT COUNT(id_libros) AS cantidad FROM lectoresLibros WHERE id_libros = 6;

-- CONSULTA PARA SABER CUANTAS VECES, TIENE EN PRESTAMO CADA LECTOR
-- Lector 1
SELECT COUNT(id_lectores) FROM lectoresLibros WHERE id_lectores = 1;
-- Lector 2
SELECT COUNT(id_lectores) FROM lectoresLibros WHERE id_lectores = 2;
-- Lector 3
SELECT COUNT(id_lectores) FROM lectoresLibros WHERE id_lectores = 3;
-- Lector 9
SELECT COUNT(id_lectores) FROM lectoresLibros WHERE id_lectores = 9;

-- Con uno de los lectores al que cargaste 5 libros, simula que devolvio uno de ellos
DELETE FROM lectoresLibros WHERE id_lectores = 1 AND id_libros = 2;

-- Obtene el promedio de edad de los lectores,
SELECT AVG (date_part('YEAR', AGE(nacimiento))) AS promedioEdad From Lectores;

-- Obtene lector con mas años.
SELECT MAX (date_part('YEAR', AGE(nacimiento))) AS mayorEdad From Lectores;

-- Obtene lector mas joven
SELECT MIN(date_part('YEAR', AGE(nacimiento))) AS menorEdad FROM Lectores;

CREATE OR REPLACE VIEW libros_prestados
AS
SELECT Lectores.apellido, Lectores.nombre, libros.nombre as nombreLibro, libros.editorial, libros.isbn
FROM Lectores
INNER JOIN lectoresLibros ON lectoresLibros.id_lectores = Lectores.id
INNER JOIN libros ON lectoresLibros.id_libros = libros.id

drop view libros_prestados;

SELECT * FROM libros_prestados WHERE nombre = 'Pedro' AND apellido = 'Alonso';




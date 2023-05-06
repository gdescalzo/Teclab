/*

Objetivos

Mediante la realización de esta actividad, se podrán alcanzar los siguientes objetivos correspondientes a la materia :

● Comprender las características, partes y tipos de algoritmos, empleando la lógica proposicional en la construcción de procesos de solución.
● Construir algoritmos, utilizando estructuras algorítmicas y diferentes formas de representación en la solución de problemas.
● Aplicar métodos de ordenamiento, utilizando diferentes estructuras de manejo de datos en la construcción de soluciones.
● Diferenciar los conceptos básicos de programación, profundizando en la  programación orientada a objetos en el modelamiento de soluciones.

Contexto

Nos acaban de contratar de una empresa para desarrollar un juego de adivinanzas de números. El juego debe tener las siguientes particularidades:

● Al inicio del juego, se debe solicitar al usuario que ingrese el rango de números para el juego y la cantidad de intentos máximos.
● El programa debe generar un número aleatorio dentro del rango ingresado por el usuario.
● El programa debe permitir al usuario la posibilidad de adivinar el número generado en la cantidad de intentos especificada.
● El programa debe indicar si el número ingresado por el usuario es mayor o menor que el número generado.
● El programa debe indicar al usuario cuántos intentos lleva y cuántos intentos le quedan.
● El programa debe permitir al usuario ingresar varios números para intentar adivinar el número generado, y guardarlos en un array.
● El programa debe verificar si el número ingresado ya fue ingresado anteriormente.
● El programa debe ordenar los números ingresados por el usuario de manera ascendente.
● El programa debe indicar al usuario los números que ya fueron ingresados ordenados.
● El juego debe terminar cuando el usuario adivina el número o se quedan sin intentos.

A continuación, para poder realizar la actividad encontrarás dos consignas con diferentes niveles de complejidad, ambas opciones son correctas, elige la opción que mejor consideres.

Consigna A

● Instalar el software Dev C++. Es posible acceder al link de descarga haciendo clic acá.
● El programa debe solicitar al usuario que ingrese un límite inferior y superior de números para el juego.
● El programa debe solicitar al usuario que ingrese la cantidad de intentos máximos.
● El programa debe generar un número aleatorio dentro del rango ingresado por el usuario.
● El programa debe solicitar al usuario que ingrese un número para intentar adivinar el número generado.

Consigna B

● Instalar el software P-seint. Accede al link de descarga haciendo clic acá. 
● El programa debe tener un rango de números para el juego.
● El programa debe tener una cantidad de intentos máximos.
● El programa debe generar un número aleatorio dentro del rango ingresado por el usuario.
● El programa debe solicitar al usuario que ingrese un número para intentar adivinar el número generado.

*/

#include <iostream>

using namespace std;

int main(){
    int rango_numero_inf;
    int rango_numero_sup;

    cout << "Ingrese el rango de numeros para el juego\n";

    cout << "Ingrese rango inferior: ";
    cin >> rango_numero_inf;

    cout << "Ingrese rango superior: ";
    cin >> rango_numero_sup;

    return 0;
}



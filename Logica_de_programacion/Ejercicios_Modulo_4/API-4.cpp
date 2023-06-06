/*
Mediante la realización de esta actividad, se podrán alcanzar los siguientes
objetivos correspondientes a la materia:

    ● Comprender las características, partes y tipos de algoritmos, empleando la lógica proposicional en la construcción de procesos de solución.
    ● Construir algoritmos, utilizando estructuras algorítmicas y diferentes formas de representación en la solución de problemas. 
    ● Aplicar métodos de ordenamiento, utilizando diferentes estructuras de manejo de datos en la construcción de soluciones.
    ● Diferenciar los conceptos básicos de programación, profundizando en la programación orientada a objetos en el modelamiento de soluciones.

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

Consigna

    ● El programa debe ordenar los números ya ingresados por el usuario de manera ascendente.
    ● El programa debe indicar al usuario los números ordenados.
    ● Se debe implementar una función que realice lo descrito anteriormente.
*/

// Cargamos librerias
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrar_reglas()
{
    /* Reglas del juego*/
    cout << "\n### Comienzo del Juego ###\n\n";

    cout << "- Consigna: Ingrese un rango de numeros y la cantidad de intentos, el juego generara un numero aleatoreo.\n  intente adivinarlo dentro de la cantidad de intentos ingresada.\n\n";
    cout << "- Instrucciones para configurar el juego:\n\n";

    cout << " 1. No defina un rango de numeros inferior negativo\n";
    cout << " 2. No defina un rango de numeros inferior superior o igual a 100\n";
    cout << " 3. No defina un rango de numeros superiores inferior al rango inferior ingresado\n";
    cout << " 4. No defina un rango de numeros superiores negativo\n";
    cout << " 5. No defina un rango de numeros superiores mayor a 100\n";
    cout << " 6. No defina una cantidad de intentos negativo\n\n";
    cout << " 7. No defina una cantidad de intentos superior a 10\n\n";

    cout << "- Instrucciones para jugar:\n\n";
    cout << " 1. No ingrese numeros menores al rango inferior\n";
    cout << " 2. No ingrese numeros superiores al rango superior\n";
    cout << " 3. No repita numeros.\n\n";
}

int validar_rango_inferior(int num_rango_inferior)
{
    if (num_rango_inferior < 0)
    {
        cout << "- Usted ingreso un numero negativo,\n  por favor ingrese numeros positivos: ";
        cin >> num_rango_inferior;
    }
    else if (num_rango_inferior >= 100)
    {
        cout << " - Usted ingreso un numero mayor o igual a 100,\n por favor ingrese numeros menores: ";
        cin >> num_rango_inferior;
    }
}

// esta maaaaaaaaaaaaaaal
int validar_rango_superior(int num_rango_superior)
{
    while (num_rango_superior > 100)
    {
        cout << "\n - Usted ingreso un numero superior a 100\n   por favor ingrese numeros menores: ";
        cin >> num_rango_superior;
    }
    while (num_rango_superior < num_rango_superior && num_rango_superior > 0 || num_rango_superior < 0)
    {
        if (num_rango_superior < num_rango_superior && num_rango_superior > 0)
        {
            cout << "\n - Usted ingreso un numero menor a al numero rango inferior '" << num_rango_superior << "'\n   por favor ingrese numeros mayores: ";
            cin >> num_rango_superior;
        }
        else if (num_rango_superior < 0)
        {
            cout << "\n - Usted ingreso un numero negativo,\n   por favor ingrese numeros positivos y mayores al rango inferior '" << num_rango_superior << "': ";
            cin >> num_rango_superior;
        }
    }
}

int main()
{
    srand(time(NULL));

    // Declaramos las variables
    int num_rango_inferior;
    int num_rango_superior;
    int cantidad_intentos;
    int *adivina_numero;
    int intentos = 0;
    int numero_anterior;
    int numero_ingresado;

    /* Reglas del juego*/
    mostrar_reglas();

    // Solicitamos Rango Inferior
    do
    {
        cout << "\n - Ingrese un numero, para el rango Inferior: ";
        cin >> num_rango_inferior;
    } while (validar_rango_inferior(num_rango_inferior) < 0 || validar_rango_inferior(num_rango_inferior) >= 100);

    // Ingreso rango superior
    do
    {
        cout << "\n - Ingrese un numero, para el rango superior: ";
        cin >> num_rango_superior;
    } while (validar_rango_superior(num_rango_superior) < 0 || validar_rango_superior(num_rango_superior) > 100 || validar_rango_superior(num_rango_superior) < num_rango_inferior);
}
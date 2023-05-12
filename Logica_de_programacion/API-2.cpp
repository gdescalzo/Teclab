/*
Objetivos

Mediante la realización de esta actividad, el alumno podrá alcanzar los siguientes objetivos correspondientes a la materia :
        
    ● Comprender las características, partes y tipos de algoritmos, empleando la lógica proposicional en la construcción de procesos de solución.
    ● Construir algoritmos, utilizando estructuras algorítmicas y diferentes formas de representación en la solución de problemas.
    ● Aplicar métodos de ordenamiento, utilizando diferentes estructuras de manejo de datos en la construcción de soluciones.
    ● Diferenciar los conceptos básicos de programación, profundizando en la programación orientada a objetos en el modelamiento de soluciones.

Situación

Te acaba de contratar una empresa para desarrollar un juego de adivinanzas de números.

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
    
    A continuación, para poder realizar la actividad encontrarás dos consignas con diferentes niveles de complejidad, 
    ambas opciones son correctas, elige la opción que mejor consideres.
    
    Consigna A

    ● El programa debe permitir al usuario la posibilidad de adivinar el número generado en la cantidad de intentos especificada.
    ● El programa debe validar los rangos inferiores y superiores ingresados, como así también la cantidad de intentos.
    ● El programa debe indicar si el número ingresado por el usuario es mayor o menor que el número generado.
    ● El programa debe validar si el número ingresado se encuentra dentro de los rangos establecidos.
    ● El programa debe indicar al usuario cuántos intentos lleva y cuántos intentos le quedan.Consigna B
    ● Instalar el software P-seint. Accede al link de descarga haciendo clic acá.

    ● El programa debe tener un rango de números para el juego(1 al 5)
    ● El programa debe tener una cantidad de intentos máximos(5)
    ● El programa debe generar un número aleatorio dentro del rango ingresado por el usuario.
    ● El programa debe solicitar al usuario que ingrese un número para intentar adivinar el número generado.
    ● El programa debe generar debe indicarnos la tabla de multiplicar de dicho número utilizando la estructura de control PARA.
*/

/* Cargamos las librerias*/
#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main()
{
    /* Declaro las variables */
    int rango_num_inferior;
    int rango_num_superior;
    int cantidad_intentos;
    int *adivina_numero;
    int intento;

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

    cout << "## Configuracion del juego ##\n\n";

    /* Ingreso rango inferior */
    do
    {
        cout << " - Ingrese un numero, para el rango inferior: ";
        cin >> rango_num_inferior;

        while (rango_num_inferior < 0 || rango_num_inferior >= 100)
        {
            if (rango_num_inferior < 0)
            {
                cout << "\n - Usted ingreso un numero negativo,\n   por favor ingrese numeros positivos: ";
                cin >> rango_num_inferior;
            }
            else if (rango_num_inferior >= 100)
            {
                cout << "\n - Usted ingreso un numero superior a 100,\n   por favor ingrese numeros inferiores: ";
                cin >> rango_num_inferior;
            }
        }

    } while (rango_num_inferior < 0 || rango_num_inferior >= 100);

    /* Ingreso rango superior */
    do
    {
        cout << "\n - Ingrese un numero, para el rango superior: ";
        cin >> rango_num_superior;

        while (rango_num_superior > 100)
        {
            cout << "\n - Usted ingreso un numero superior a 100\n   por favor ingrese numeros menores: ";
            cin >> rango_num_superior;
        }
        while (rango_num_superior < rango_num_inferior && rango_num_superior > 0 || rango_num_superior < 0)
        {
            if (rango_num_superior < rango_num_inferior && rango_num_superior > 0)
            {
                cout << "\n - Usted ingreso un numero menor a al numero rango inferior '" << rango_num_inferior << "'\n   por favor ingrese numeros mayores: ";
                cin >> rango_num_superior;
            }
            else if (rango_num_superior < 0)
            {
                cout << "\n - Usted ingreso un numero negativo,\n   por favor ingrese numeros positivos y mayores al rango inferior '" << rango_num_inferior << "': ";
                cin >> rango_num_superior;
            }
        }
    } while (rango_num_superior < 0 || rango_num_superior > 100 || rango_num_superior < rango_num_inferior);

    /* Ingreso cantidad de intentos */
    do
    {
        cout << "\n - Ingrese un numero, para la cantidad de intentos: ";
        cin >> cantidad_intentos;

        while (cantidad_intentos < 0 || cantidad_intentos > 10)
        {
            if(cantidad_intentos < 0 )
            {
                cout << "\n - Usted ingreso un numero negativo,\n   por favor ingrese numeros positivos: ";
                cin >> cantidad_intentos;
            }
            else if (cantidad_intentos > 10)
            {
                cout << "\n - Usted ingreso un numero superior a 10\n   por favor ingrese numeros menores: ";
                cin >> cantidad_intentos;
            }           
        }

    } while (cantidad_intentos < 0 || cantidad_intentos > 10);
    
    /* Generamos el numero aleatoreo */
    int numero_aleatoreo = rand() % (rango_num_inferior - rango_num_superior +1) + rango_num_inferior;

    /* Creamos el array */
    adivina_numero = new int [cantidad_intentos];

    cout << "\n### Inicio del Juego ###\n";
    cout << "- A divine el numero entre '" << rango_num_inferior << "' y '" << rango_num_superior << "' \n\n";

    for (int i = 0; i < cantidad_intentos ; i++){
        intento = cantidad_intentos;

        cout << "- Ingrese un numero: ";
        cin >> adivina_numero[i];
        cout << "\n";

        /* Control de ingreso */
        while (adivina_numero[i] < 0 && adivina_numero[i] < rango_num_inferior || adivina_numero[i] > rango_num_superior || adivina_numero[i] < rango_num_inferior)
        {
            if (adivina_numero[i] < 0 && adivina_numero[i] < rango_num_inferior)
            {
                cout << "- Usted ingreso un numero negativo,\n  por favor ingrese numeros positivos: ";
                cin >> adivina_numero[i];
                cout << "\n";
            }
            else if (adivina_numero[i] > 0 && adivina_numero[i] < rango_num_inferior)
            {
                cout << "- Usted ingreso un numero inferior \n  al numero de rango inferior '" << rango_num_inferior << "' \n  por favor ingrese numeros superiores al rango inferior: ";
                cin >> adivina_numero[i];
                cout << "\n";
            }
            else if (adivina_numero[i] > rango_num_superior)
            {
                cout << "- Usted ingreso un numero superior \n  al numero de rango superior '" << rango_num_superior << "' \n  por favor ingrese numeros inferiores al rango supoerior: ";
                cin >> adivina_numero[i];
                cout << "\n";
            }
        }

        /* Validamos acierto */
        
        intento =  intento -1;
    }
    

    /* cout << "\n\n## El numero aleatoreo es: '" << numero_aleatoreo << "' ##"; */
    return 0;
}

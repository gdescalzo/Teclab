/*

Objetivos

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

    ● El programa debe permitir al usuario ingresar varios números para intentar adivinar el número generado, y guardarlos en un array.
    ● El programa debe verificar si el número ingresado ya fue ingresado anteriormente y no contemplarlo como un intento.
    ● El programa debe indicar al usuario mediante una función los números que ya fueron ingresados. No se deben contemplar los números repetidos, 
      es decir solo se contabilizan una vez.

*/

// Cargamos librerias
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int numero_repetido(int numero_ingresado, int intentos, int adivina_numero[]);

void mostrar_reglas(){
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

    // Configuracion del Juego
    cout << "## Configuracion del juego ##\n\n";

    // Solicitamos Rango Inferior
    do
    {
        cout << "\n - Ingrese un numero, para el rango Inferior: ";
        cin >> num_rango_inferior;

        if (num_rango_inferior < 0)
        {
            cout << "- Usted ingreso un numero negativo,\n  por favor ingrese numeros positivos: ";
            cin >> num_rango_inferior;
        }
        else if (num_rango_inferior >= 100)
        {
            cout << "- Usted ingreso un numero mayor o igual a 100,\n por favor ingrese numeros menores: ";
            cin >> num_rango_inferior;
        }
        
    } while (num_rango_inferior < 0 || num_rango_inferior >= 100);

    // Ingreso rango superior
    do
    {
        cout << "\n - Ingrese un numero, para el rango superior: ";
        cin >> num_rango_superior;

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
    } while (num_rango_superior < 0 || num_rango_superior > 100 || num_rango_superior < num_rango_superior);

    // Ingreso cantidad de intentos
    do
    {
        cout << "\n - Ingrese un numero, para la cantidad de intentos: ";
        cin >> cantidad_intentos;

        while (cantidad_intentos < 0 || cantidad_intentos > 10)
        {
            if (cantidad_intentos < 0)
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

    int numero_aleatoreo = rand() % (num_rango_inferior - num_rango_superior + 1) + num_rango_inferior;
    adivina_numero = new int[cantidad_intentos];
    int intentos_restantes = cantidad_intentos;

    cout << "\n### Inicio del Juego ###\n\n";
    cout << "- Adivine el numero entre '" << num_rango_inferior << "' y '" << num_rango_superior << "' \n";

    for (int i = 0; i < cantidad_intentos; i++)
    {
        cout << "\n- Ingrese un numero : ";
        cin >> adivina_numero[i];
        numero_ingresado = adivina_numero[i];
        cout << "\n";

        /* Control de ingreso */
        while (adivina_numero[i] < 0 && adivina_numero[i] < num_rango_inferior || adivina_numero[i] > num_rango_superior || adivina_numero[i] < num_rango_inferior || numero_repetido(numero_ingresado, intentos, adivina_numero) == 1)
        {
            if (adivina_numero[i] < 0 && adivina_numero[i] < num_rango_inferior)
            {
                cout << "- Usted ingreso un numero negativo,\n  por favor ingrese numeros positivos: ";
                cin >> adivina_numero[i];
                cout << "\n";
            }
            else if (adivina_numero[i] > 0 && adivina_numero[i] < num_rango_inferior)
            {
                cout << "- Usted ingreso un numero inferior \n  al numero de rango inferior '" << num_rango_inferior << "' \n  por favor ingrese numeros superiores al rango inferior: ";
                cin >> adivina_numero[i];
                numero_ingresado = adivina_numero[i];
                cout << "\n";
            }
            else if (adivina_numero[i] > num_rango_superior)
            {
                cout << "- Usted ingreso un numero superior \n  al numero de rango superior '" << num_rango_superior << "' \n  por favor ingrese numeros inferiores al rango supoerior: ";
                cin >> adivina_numero[i];
                numero_ingresado = adivina_numero[i];
                cout << "\n";
            }
            else if (numero_repetido(numero_ingresado, intentos, adivina_numero) == 1)
            {
                cout << "- Usted ya ingreso este numero superior \n  por favor ingrese numeros diferentes: ";
                cin >> adivina_numero[i];
                numero_ingresado = adivina_numero[i];
                cout << "\n";
            }
        }

        /* Validamos acierto */
        if (adivina_numero[i] == numero_aleatoreo)
        {
            cout << "\n\n !!! Felicitaciones !!! usted adivino el numero aleatoreo '" << numero_aleatoreo << "' \n";
            cout << "  Intento: '" << intentos_restantes - 1 << "' \n";
            intentos++;
            break;
        }
        else if (adivina_numero[i] < numero_aleatoreo)
        {
            cout << "- El numero que ingreso '" << adivina_numero[i] << "' es menor al numero aleatoreo\n";
            cout << "  Usted tiene '" << intentos_restantes - 1 << "' intentos restantes\n";
            intentos++;
        }
        else if (adivina_numero[i] > numero_aleatoreo)
        {
            cout << "- El numero que ingreso '" << adivina_numero[i] << "' es mayor al numero aleatoreo\n";
            cout << "  Usted tiene '" << intentos_restantes - 1 << "' intentos restantes\n";
            intentos++;
        }

        intentos_restantes--;

        /* Mostramos el contenido del array */
        if (intentos_restantes == 0)
        {
            sort(adivina_numero, adivina_numero + cantidad_intentos);

            cout << "\n- Usted ingreso los siguientes numeros: ";
            for (int p = 0; p < cantidad_intentos; p++)
            {
                numero_anterior = adivina_numero[p];
                cout << adivina_numero[p] << " ";
            }
            cout << "\n- El numero Random es: '" << numero_aleatoreo << "'";
        }
    }
    return 0;
}

int numero_repetido(int numero_ingresado, int intentos, int adivina_numero[])
{
    int coincide = 0;

    for (int i = 0; i < intentos; i++)
    {
        if (intentos > 0 && numero_ingresado == adivina_numero[i])
        {
            coincide = 1;
            break;
        }
    }

    return coincide;
}

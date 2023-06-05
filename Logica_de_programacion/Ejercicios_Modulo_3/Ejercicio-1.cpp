/*

Escribir en lenguaje C un programa que calcule la potencia de un número y sume todas las potencias.
    1. Pida por teclado un número.
    2. Pida por teclado la potencia.
    3. Muestre por pantalla el mensaje:
        a. “<número> elevado a la <potencia> es: <resultado>
    4. Preguntar al usuario si desea introducir otro número.
    5. Repita los pasos 1, 2 y 3 mientras que el usuario no responda ‘n’ de no.
    6. Muestre por pantalla la suma de las potencias calculadas.

    Nota: Se debe utilizar una función que realice el cálculo. Utilizar do while

*/

//Importamos librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaro las variables
    int numero;
    int potencia;
    char opcion;
    int resultado;

    cout << "\n\n### Calculador de la potencia de un número y sumador todas las potencias ###\n";

    do
    {
        cout << "\nIngrese un numero: ";
        cin >> numero;

        cout << "Ingrese una potencia: ";
        cin >> potencia;

        if (potencia > 0)
        {
            resultado = 1;
        }
        else if (potencia < 0)
        {
            resultado = -1;
        }
        
        for (int i = 0; i < potencia; i++)
        {
            resultado = resultado * numero;
        }

        cout << "\nEl numero '" << numero << "' elevado a la potencia '" << potencia << "' es: '" << resultado << "'\n";

        cout << "\n¿Desea introducir otro número? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');
    
    return 0;
}
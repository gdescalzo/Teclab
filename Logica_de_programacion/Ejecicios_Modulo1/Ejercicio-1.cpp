/* 
Ejercicio 1

    Escribir en lenguaje C un programa que convierte pesos argentinos en dólares.
    1. Pida por teclado la cantidad de pesos.
    2. Calcule su equivalente en dólares.
    3. Muestre por pantalla el resultad

    pesos / dolares

*/

#include <iostream>
#include <curl/curl.h>

using namespace std;

int main()
{

    /* Declaro variables */
    int pesos;
    int dolares;

    cout << "\n\n#### Conversor de Pesos Argentinos a Dolares Estadounidenses ####\n\n";
    cout << "Ingrese por favor el monto a convertir: ";
    cin >> pesos;

    /* Validamos ingresos de usuario*/
    do
    {
        cout << "\n - Usted ingreso un numero negativo o ingreso 0,\n - por favor ingrese numeros mayores a 0,\n\nIngrese un numero: ";
        cin >> pesos;
    } while (pesos <= 0);

    

    return 0;
}



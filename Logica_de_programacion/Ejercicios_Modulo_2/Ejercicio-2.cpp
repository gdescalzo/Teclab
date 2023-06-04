/*

Escribir en lenguaje C un programa que nos indique si un año es bisiesto o no.
    1. Pida por teclado un año.
    2. Muestre por pantalla:
        a. “Es bisiesto”.
        b. “No es bisiesto”.
    
    Nota: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son múltiplos de 100, pero no de 400

*/

// Importamos librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables
    int anio;

    cout << "\n\n### Validador de año bisiesto ###\n\n";

    // Validamos ingreso de usuario (Año)
    do
    {
        cout << " Ingrese el año a validar: ";
        cin >> anio;

        if (anio <= 0)
        {
            cout << "\n Usted ingreso un numero negativo o cero,\n por favor ingrese años validos\n Ingrese nuevamente el año a validar: ";
            cin >> anio;
        }
    } while (anio <= 0);

    if (anio % 4 == 0 && anio % 100 != 0 && anio % 400 == 0)
    {
        cout << "\n El año " << anio << " ingresado ES bisiesto";
    }
    else
    {
        cout << "\n El año " << anio << " ingresado NO es bisiesto\n\n";
    }

    return 0;
}
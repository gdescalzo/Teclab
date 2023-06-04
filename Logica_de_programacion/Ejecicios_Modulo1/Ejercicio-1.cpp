/* 
Ejercicio 1

    Escribir en lenguaje C un programa que convierte pesos argentinos en dólares.
    1. Pida por teclado la cantidad de pesos.
    2. Calcule su equivalente en dólares.
    3. Muestre por pantalla el resultad

    pesos / dolares

*/

#include <iostream>
using namespace std;

int main()
{

    /* Declaro variables */
    int pesos;
    int dolares;
    int equivalencia_dolares;

    cout << "\n\n#### Conversor de Pesos Argentinos a Dolares Estadounidenses ####\n\n";


    /* Validamos ingresos de usuario (Pesos a convertir) */
    do
    {
        cout << "Ingrese por favor el monto a convertir: ";
        cin >> pesos;

        if (pesos <= 0)
        {
            cout << "\n - Usted ingreso un numero negativo o ingreso 0,\n - por favor ingrese numeros mayores a 0,\n\nIngrese un numero: ";
            cin >> pesos;
        }
    } while (pesos <= 0);

    /* Validamos ingresos de usuario (Cotizacion dolar) */
    do
    {
        cout << "Ingrese por favor la cotizacion del dolar: ";
        cin >> dolares;

        if (dolares <= 0)
        {
            cout << "\n - Usted ingreso un numero negativo o ingreso 0,\n - por favor ingrese numeros mayores a 0,\n\nIngrese la cotizacion: ";
            cin >> dolares;
        }

    } while (dolares <= 0);

    // Conversion
    equivalencia_dolares = (pesos / dolares);

    cout << "\nLa equivalencia en dolares es: USD " << equivalencia_dolares; 

    return 0;
}
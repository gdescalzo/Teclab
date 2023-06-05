/*

Escribir en lenguaje C un programa que calcule los cuadrados de los primeros 10 números naturales.
    1. Se debe mostrar por pantalla:
        a. 1 4 9 16 25 36 49 64 81 100.
    2. Se debe contar y mostrar la cantidad de cuadrados mayores a 50.

    Nota: Se debe utilizar una función que realice el cuadrado. Utilizar for

*/

// Importamos librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables
    int numeros_naturales[10]{1,2,3,4,5,6,7,8,9,10};
    int* cuadrado = new int[10];
    
    cout << "\n\n### Calculador de los primeros diez numeros naturales ###\n\n";

    for(int i = 0; i < 10 ; i++)
    {
        cuadrado[i] = numeros_naturales[i] * numeros_naturales[i];
    }

    for (int p = 0; p < 10; p++)
    {
        cout << " El cuadrado del numero: '" << numeros_naturales[p] << "' es: '" << cuadrado[p] << "'\n";        
    }

    cout << "\nLa cantidad de cuadrados mayores a cincuenta son: \n\n";
    
    for (int j = 0; j < 10; j++)
    {
        if (cuadrado[j] > 50)
        {
            cout << " El cuadrado del numero: '" << numeros_naturales[j] << "' es: " << cuadrado[j] << "' y es mayor a 50\n";
        }
        
    }

    return 0;
}
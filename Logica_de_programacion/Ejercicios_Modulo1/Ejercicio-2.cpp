/*

Escribir en lenguaje C un programa que calcule el volumen de un cubo.

    1. Pida por teclado la arista de un cubo.
    2. Calcule el volumen de un cubo.
    3. Muestre por pantalla el resultado.

*/

// Cargamos las librerias
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaro las variables
    int arista_cubo;
    int volumen;
    
    cout << "\n\n## Calculador de volumen de cubo ##\n\n";

    /* Validamos ingresos de usuario (Longitud de arista) */
    do
    {
        cout << "Ingrese la longitud de uno de sus lados: ";
        cin >> arista_cubo;

        if (arista_cubo <= 0)
        {
            cout << "Usted ingreso un numero negativo o ingreso 0,\npor favor ingrese numeros mayores a 0\nVuelva a ingresar la longitud de uno de sus lados: ";
            cin >> arista_cubo;
        }
    } while (arista_cubo <= 0);

    // Calculamos el volumen
    volumen = pow(arista_cubo, 3);

    cout << "\n\nEl volumen del cubo es: " << volumen;

    return 0;
}
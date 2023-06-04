/*

Escribir en lenguaje C un programa que intercambie los valores de 2 variables.

    1. Pida por teclado 2 números enteros y los guarda en las variables v1 y v2
    2. Intercambie los valores de las variables de la siguiente manera:
        a. El contenido de v1 pasa a v2.
        b. El contenido de v2 pasa a v1.
    3. Muestre por pantalla el resultado.

*/

// Importamos las librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaro las variables
    int v1;
    int v2;
    int v3;

    cout << "### Intercambio de los valores de v1 a v2 ###\n\n";

    cout << " Ingrese el valor de la variable 'v1': ";
    cin >> v1;

    cout << " Ingrese el valor de la variable 'v2': ";
    cin >> v2;

    // Realizamos el intercambio
    v3 = v1;
    v1 = v2;
    v2 = v3;

    cout << "\n El valor de v1 es: " << v1;
    cout << "\n El valor de v2 es: " << v2;
}
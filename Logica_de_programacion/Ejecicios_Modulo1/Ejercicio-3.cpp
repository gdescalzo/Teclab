/*

Escribir en lenguaje C un programa que calcule la nota promedio de 3 exámenes.
    1. Pida por teclado cada una de las notas.
    2. Calcule el promedio de las 3 notas.
    3. Muestre por pantalla el resultado.

*/

// Cargamos las librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables
    float notas[3];  
    float promedio;
    int indice;

    cout << "\n\n### Calculador de promedio de notas (3) ###\n\n";

    for (int i = 0; i < 3; i++)
    {
        indice = i +1;
        cout << " Por favor ingrese la nota numero (" << indice << "): ";
        cin >> notas[i];
    }
    
    cout << "\nLas notas ingresadas son: ";
    for (int p = 0; p < 3; p++)
    {
        indice = p +1;
        cout << "\n Nota ("<< indice << "): " << notas[p];
    }
    
}
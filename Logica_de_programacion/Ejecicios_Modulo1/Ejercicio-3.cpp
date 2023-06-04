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
    float promedio = 0;
    int indice;

    cout << "\n\n### Calculador de promedio de notas (3) ###\n";

    
    // Ingreso de notas en un array (nota 1, 2, 3)
    for (int i = 0; i < 3; i++)
    {
        // Validamos ingreso de usuario (notas)
        do
        {
            indice = i + 1;
            cout << "\n Por favor ingrese la nota numero (" << indice << "): ";
            cin >> notas[i];

            if (notas[i] < 0)
            {
                cout << "\n Usted ingreso un numero negativo,\n por favor ingrese numeros positivos\n\n por favor ingrese la nota numero (" << indice << "): ";
                cin >> notas[i];
            }
        } while (notas[i] < 0);
    }
    
    cout << "\nLas notas ingresadas son: ";
    for (int p = 0; p < 3; p++)
    {
        indice = p +1;
        promedio = promedio + notas[p];
        cout << "\n Nota ("<< indice << "): " << notas[p];
        
    }

    cout << "\n\n El promedio es: " << (promedio / 3) ;
}
/*

Escribir en lenguaje C un programa que calcule el perímetro de una circunferencia.
    1. Pida por teclado el radio de una circunferencia.
    2. Calcule el perímetro de la circunferencia.
    3. Muestre por pantalla el resultado.

    Nota: π (pi) debe declararse como una constante

*/

// Importamos librerias
#include <iostream>
using namespace std;


int main()
{
    // Declaramos las variables
    float radio;
    float perimetro;
    float pi = 3.14159;

    cout << "\n\n### Calculador de perimetro de una circunferencia ###\n\n";

    // Validamos ingreso de usuario (radio)
    do
    {
        cout << " Ingrese el radio de la circunferencia: ";
        cin >> radio;

        if (radio < 0)
        {
            cout << "\n Usted ingreso un numero negativo,\n porfavor ingrese numeros positivos,\n Ingrese nuevamente el radio de la circunferencia: ";
            cin >> radio;
        }
    } while (radio < 0);
    
    // Calculamos el perimetro de la circunferencia
    perimetro = 2 *  pi * radio;

    cout << "\n El perimetro es: " << perimetro;
}
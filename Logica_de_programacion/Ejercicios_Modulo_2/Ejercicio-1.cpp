/*

Escribir en lenguaje C un programa que nos indique si un número es par o impar.
    1. Pida por teclado un número entero.
    2. Muestre por pantalla:
        a. “Es par”.
        b. “Es impar”.

*/

// Importamos las librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaro las variables.
    int numero;
    int validar_numero;

    cout << "\n\n### Validador de numeros pares o impares ###\n\n";

    cout << " Ingrese el numero a validar: ";
    cin >> numero;

    // Validamos si es par o impar
    validar_numero = numero % 2;

    if (validar_numero == 0)
    {
        cout << "El numero: " << numero << " es par";
    }
    else
    {
        cout << "El numero: " << numero << " es impar";
    }
    
}
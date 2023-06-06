/*

Escribir en lenguaje C un programa que nos indique si una palabra es palindromo.
    1. Pida por teclado una palabra.
    2. Mostrar por pantalla:
        a. Es palindrome.
        b. No es palindrome.
    Nota: No es necesario utilizar recursividad, pero si lo desea puede hacerlo.

*/

// Importamos las librerias
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaro las variables
    string palabra;
    char opcion;

    cout << "\n\n### Detector de palabras palindromes ###\n\n";

    do
    {
        cout << "Ingrese una palabra: ";
        cin >> palabra;

        cout << "Desea ingresar otra palabra ? (s/n)";
        cin >> opcion;

        // Validamos ingreso de usuario (Opcion s/n)
        while (opcion != 's' || opcion != 'S' || opcion != 'n' || opcion != 'N')
        {
            cout << "\nUsted ingreso un caracter no valido,\npor favor ingrese 's' o 'S' para (si) y 'n' o 'N' para no,\nDesea ingresar otra palabra ? (s/n)";
            cin >> opcion;
        }
        
    } while (opcion == 's' || opcion == 'S');
    

    return 0;
}


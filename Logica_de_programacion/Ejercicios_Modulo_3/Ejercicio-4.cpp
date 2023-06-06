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
    

    cout << "\n\n### Detector de palabras palindromes ###\n\n";

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "\nImprimimos en pantalla al DERECHO la palabra ingresada\n";

    

    for (int i = 0; i < palabra.length(); i++)
    {
        cout << palabra[i] << " ";

    }

    cout << "\nImprimimos en pantalla al REVEZ la palabra ingresada\n";

    char *al_revez = new char[palabra.length()];

    for (int p = palabra.length() - 1; p >= 0; p--)
    {
        cout << palabra[p] << " ";
        al_revez[p] = palabra[p];
    }

    int longitud = sizeof(al_revez[0]) / sizeof(al_revez);
    string palabra_al_revez(al_revez, longitud);

    cout << "\n******" << palabra_al_revez ;

    return 0;
}
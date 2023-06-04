/*

Escribir en lenguaje C un programa que valida que la nota ingresada es correcta.
    1. Pida por teclado la nota del examen.
    2. En el caso de que la nota sea incorrecta, mostrar el mensaje “Nota incorrecta”.
    3. Repetir los pasos 1 y 2 mientras que la nota introducida sea incorrecta.
    4. Mostrar por pantalla:
        a. “Aprobado” si la nota es mayor o igual a 4.
        b. “Reprobado” si la nota es menor que 4.

Nota: Se considera una nota incorrecta si es menor a 1 o mayor a 10. Utilizar while.

*/

// Importamos las librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaro las variables
    float nota;

    cout << "\n\n### Validador de notas de examen ###\n\n";

    // Validamos ingreso de usuario (Nota de examen)
    do
    {
        cout << "Ingrese una nota: ";
        cin >> nota;

        if(nota < 1 || nota > 10)
        {
            cout << "\n Usted ingreso una nota incorrecta,\n por favor ingrese numeros entre 1 y 10\n\nIngrese una nota nuevamente: ";
            cin >> nota;
        }
    } while (nota < 1 || nota > 10);

    if (nota > 4 && nota < 11)
    {
        cout << "\n La nota ingresada " << nota << " tiene una calificacion de 'Aprobado'\n";
    }
    else if (nota < 4 && nota > 0)
    {
        cout << "\n La nota ingresada " << nota << " tiene una calificacion de 'Desaprobado'\n";
    }   
    
    return 0;
}

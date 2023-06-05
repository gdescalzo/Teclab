/*

Escribir en lenguaje C un programa con un menú que simula ser una calculadora de 2 números.
    1. Muestre un menú con 5 opciones:
        a. Sumar dos números.
        b. Restar dos números.
        c. Multiplicar dos números.
        d. Dividir 2 números. (No se debe permitir dividir por 0).
        e. Salir.
    2. Pida por teclado la opción deseada. Deberá ser introducida mientras que la opción no sea mayor o igual que ‘1’ y menor o igual que ‘5’.
    3. Ejecute la opción seleccionada del menú.
    4. Repita los pasos 1, 2 y 3 mientras que el usuario no seleccione la opción 5 del menú. (Salir).
    
    Nota: Se debe crear una función para cada operación. Utilizar do while para el menú.

*/

//Importamos librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables
    int opcion;
    int numero_uno;
    int numero_dos;

    do
    {

        cout << "\n\n### calculadora de 2 números ###\n\n";

        cout << "Menú:\n";
        cout << " 1. Sumar dos números.\n";
        cout << " 2. Restar dos números.\n";
        cout << " 3. Multiplicar dos números.\n";
        cout << " 4. Dividir dos números.\n";
        cout << " 5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "\n## Suma de dos numeros ##\n\n";

            cout << " Ingrese el primer numero: ";
            cin >> numero_uno;

            cout << " Ingrese segundo numero: ";
            cin >> numero_dos;

            // Realizamos la suma
            int resultado = numero_uno + numero_dos;

            cout << "\n El resultado de la suma de '" << numero_uno << "' mas '" << numero_dos << "' es '" << resultado << "' \n\n";
        }
        else if (opcion == 2)
        {
            cout << "\n## Resta de dos numeros ##\n\n";

            cout << " Ingrese el primer numero: ";
            cin >> numero_uno;

            cout << " Ingrese segundo numero: ";
            cin >> numero_dos;

            // Realizamos la resta
            int resultado = numero_uno - numero_dos;

            cout << "\n El resultado de la suma de '" << numero_uno << "' menos '" << numero_dos << "' es '" << resultado << "' ";
        }
        else if (opcion == 3)
        {
            cout << "\n## Multiplica de dos numeros ##\n\n";

            cout << " Ingrese el primer numero: ";
            cin >> numero_uno;

            cout << " Ingrese segundo numero: ";
            cin >> numero_dos;

            // Realizamos la multiplicacion
            int resultado = numero_uno * numero_dos;

            cout << "\n El resultado de la suma de '" << numero_uno << "' por '" << numero_dos << "' es '" << resultado << "' ";
        }
        else if (opcion == 4)
        {
            cout << "\n## Divide de dos numeros ##\n\n";

            cout << " Ingrese el primer numero: ";
            cin >> numero_uno;

            cout << " Ingrese segundo numero: ";
            cin >> numero_dos;

            // Realizamos la division
            int resultado = numero_uno / numero_dos;

            cout << "\n El resultado de la suma de '" << numero_uno << "' dividido '" << numero_dos << "' es '" << resultado << "' ";
        }
        else if (opcion == 5)
        {
            cout << "Ha seleccionado salir";
            break;
        }
        else if (opcion != 1 || opcion != 2 || opcion != 3 || opcion != 4 || opcion != 5)
        {
            cout << "\n\nError: usted ingreso una opcion incorrecta\n por favor ingrese numeros del 1 al 5\n\n";
        }
        
    } while (opcion != 5);
    
    return 0;
}

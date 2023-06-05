/*

Escribir en lenguaje C un programa que calcule el promedio y la nota más alta de todos los alumnos de un curso.
    1. Pida por teclado la cantidad de alumnos.
    2. Pida por teclado la nota por cada alumno.
    3. Muestre por pantalla:
        a. Todas las notas ingresadas.
        b. El promedio de todas las notas.
        c. La nota más alta.

    Nota: Debe utilizar arrays

*/

// Importamos las librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaro las variables
    int cantidad_alumnos;
    float nota;
    float suma;
    float aux;

    cout << "\n\n### Calculador del promedio y la nota más alta ###\n\n";

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad_alumnos;
    cout << "\n";

    // Creamos el array de alumnos
    float *alumnos = new float[cantidad_alumnos];

    // Cargamos las notas en el array
    for (int i = 1; i < cantidad_alumnos +1; i++)
    {
        cout << "Ingrese la nota para el alumno '" << i << "': ";
        cin >> alumnos[i];

        do
        {
            if (alumnos[i] < 0)
            {
                cout << "\n Error: Usted ingreso una nota menor a cero,\n por favor ingrese numeros ente 0 y 10,\nIngrese nuevamente la nota para el alumno '" << i << "': ";
                cin >> alumnos[i];
            }
            else if (alumnos[i] > 10)
            {
                cout << "\n Error: Usted ingreso una nota mayor a diez,\n por favor ingrese numeros ente 0 y 10,\n\nIngrese nuevamente la nota para el alumno '" << i << "': ";
                cin >> alumnos[i];
            }

        } while (alumnos[i] < 0 || alumnos[i] > 10);
    }
    
    // Mostramos las notas ingresadas y sumamos las mismas
    for (int j = 1; j < cantidad_alumnos +1; j++)
    {
        cout << "\nLa nota ingresada para el alumno '" << j << "' es: " << alumnos[j];
        suma = suma + alumnos[j];

        // Almacenamos la nota mas alta
        if (alumnos[j] > alumnos[j+1])
        {
            aux = alumnos[j];
        }
        else if (alumnos[j] < alumnos[j+1])
        {
            aux = alumnos[j+1];
        }
    }

    // Calculamos el promedio
    float promedio = suma / cantidad_alumnos;

    cout << "\n\nEl promedio es: " << promedio;
    cout << "\n\nLa nota mas alta es: " << aux;
    
    return 0;
}
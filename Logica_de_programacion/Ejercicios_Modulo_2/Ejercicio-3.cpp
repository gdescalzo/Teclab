/*

Escribir en lenguaje C un programa que dado el número del mes nos diga el nombre.
    1. Pida por teclado el número de un mes del año (1-12).
    2. Muestre por pantalla el nombre correspondiente a dicho mes.
    3. Si el número de mes introducido es incorrecto, se debe mostrar el mensaje “Mes incorrecto”.

    Nota: Utilizar switch

*/

// Importamos librerias
#include <iostream>
using namespace std;

int main()
{
    // Declaro las variables
    int mes;

    cout << "\n\n### Nombre del mes ###\n\n";

    // Validamos ingreso de usuario (Mes)
    do
    {
        cout << "Ingrese el numero del mes: ";
        cin >> mes;

        if (mes <= 1 || mes > 12)
        {
            cout << "\n Usted ingreso un numero de mes menor a cero,\n por favor ingrese un numero de mes valido\n Ingrese nuevamente el numer del mes: ";
            cin >> mes;
        }
    } while (mes <= 1 || mes > 12);

    switch (mes)
    {
    case 1:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Enero";
        break;
    case 2:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Febrero";
        break;
    case 3:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Marzo";
        break;
    case 4:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Abril";
        break;
    case 5:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Mayo";
        break;
    case 6:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Junio";
        break;
    case 7:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Julio";
        break;
    case 8:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Agosto";
        break;
    case 9:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Setiembre";
        break;
    case 10:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Octubre";
        break;
    case 11:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Noviembre";
        break;
    case 12:
        cout << "\nEl mes que ingreso: " << mes << " corresponde a Diciembre";
        break;
    default:
        cout << "\nOpcion invalida";
        break;
    }

    return 0;
}

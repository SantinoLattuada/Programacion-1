/*7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación.
[]
*/

#include <iostream>
using namespace std;

int main()
{
    int posiciones;

    cout << "Ingrese el número de posiciones: ";
    cin >> posiciones;

    int dato[posiciones], mejorDato[2];

    for (int i = 0; i < posiciones; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> dato[i];

        if (i == 0 || i == 1)
        {
            mejorDato[i] = dato[i];
        }
        else if (dato[i] >= mejorDato[1])
        {
            if (dato[i] >= mejorDato[0])
            {
                mejorDato[0] = dato[i];
            }
            else
            {
                mejorDato[1] = dato[i];
            }
        }
    }

    cout << "El mayor valor ingresado fue " << mejorDato[0] << ", y el segundo mayor, " << mejorDato[1];

    return 0;
}

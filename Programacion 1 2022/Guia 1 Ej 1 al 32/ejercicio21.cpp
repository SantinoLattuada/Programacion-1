#include <iostream>
using namespace std;

int main()
{
    system("cls");
    
    int valInformar, valor;
    
    int valorMayor;
    int valorMenor;
    int posicionIngresadaMayor = 0;
    int posicionIngresadaMenor = 0;

    cout << "Ingrese la cantidad de valores a informar" << endl;
    cin  >> valInformar;

    for (int i = 1; i <= valInformar; i++)
    {   
        cout << "Ingrese un valor " << endl;
        cin  >> valor;

        if (i == 1)
        {
            valorMayor = valorMenor = valor;
            posicionIngresadaMayor = posicionIngresadaMenor = i;
        }
        
        if (valorMayor < valor)
        {
            valorMayor = valor;
            posicionIngresadaMayor = i;
        }
        if (valorMenor > valor)
        {
            valorMenor = valor;
            posicionIngresadaMenor = i;
        }
        
    }
    cout << "El mayor valor fue: " << valorMayor << " y fue ingresado en la posicion: " << posicionIngresadaMayor << endl;
    cout << "El menor valor fue: " << valorMenor << " y fue ingresado en la posicion: " << posicionIngresadaMenor << endl;

    system("pause");
    return 0;
}

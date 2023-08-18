#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    
    int valor;
    int cantValores = 10;
    int valorMayor = 0;
    

    for (int i = 0; i < cantValores; i++)
    {
        cout << "Ingrese un valor" << endl;
            cin  >> valor;

        if (valorMayor < valor)
        {
            valorMayor = valor;
        }
        
    }
    cout << "El mayor valor es:" << valorMayor << endl;
    return 0;
}

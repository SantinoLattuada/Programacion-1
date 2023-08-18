#include <iostream>
using namespace std;

int fibonacci(int posicion)
{
    if (posicion <= 1)
    {
        return posicion;
    }
    
    return fibonacci (posicion - 1) + fibonacci (posicion - 2);
}

int main ()
{
    int posicion;

    cout << "Ingrese la cantidad de términos de Fibonacci que desea: ";
    cin >> posicion;

    for (int i = 0; i < posicion; i++)
    {
        cout << fibonacci(i) << endl;
    }
    return 0;
}
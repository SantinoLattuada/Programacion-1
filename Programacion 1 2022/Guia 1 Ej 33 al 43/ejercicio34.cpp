#include <iostream>
using namespace std;

int factorial(int val1)
{
    int fact = 1;
    for (int i = 1; i < val1; i++)
    {
        fact= fact * (i+1);
    }
    return fact;
}

void leer(string mensaje,int &val1)
{
    cout << mensaje;
    cin  >> val1;
    return;
}

int main () {
 system("cls");

 int valor1;
 leer("Ingrese un valor: ", valor1);

 cout << "El factorial de: " << valor1 << " es " << factorial(valor1) << endl;


 system("pause");
 return 0;
}
#include <iostream>
using namespace std;

int factorial(int numero)
{
    if(numero == 0 || numero == 1)
    {
        return 1;
    }
    else
    {
        return numero * factorial(numero - 1);
    }
}

void pedirDatos(string mensaje, int &num){
    cout << mensaje << endl;
    cin  >> num;
    return;
}

int main () {
 int numero;

 pedirDatos("Ingrese un numero para saber su factorial", numero);

 cout << "El factorial es: " << factorial(numero) << endl;

 system("pause"); 
 return 0;
}
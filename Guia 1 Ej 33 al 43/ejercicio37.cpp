#include <iostream>
using namespace std;

float calcularPorcentajeDiferencia(int &a ,int &b)
{   
    float resultado;
    resultado = (b - a) * 100 / (a + b);

    return resultado;
}

void leer(string mensaje, int &valA, int &valB )
{
    cout << mensaje;
    cin  >> valA;
    cout << mensaje;
    cin  >> valB;
    return;
}

int main () 
{
 int valorA, valorB;
 
 leer("Ingrese un valor: ", valorA, valorB);
 
 cout << "El resultado del calculo es: " << calcularPorcentajeDiferencia(valorA, valorB) << endl;

 system("pause");
 return 0;
}
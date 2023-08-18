/*(2 puntos)
1 Realizar un programa que reciba un número, y que muestre por pantalla, saltando de línea
en cada número, todos los números del 1 hasta el ingresado por el usuario, excepto: Los
múltiplos de 3, aunque si son también múltiplos de 10 los debe mostrar.*/

#include <iostream>
using namespace std;

void programa(int numero)
{
    for (int i = 1; i <= numero; i++)
    {
        if (i % 3 != 0)
        {
            cout << i << endl;
           
        }
        else if (i % 10 == 0)
        {
            cout << i << endl; 
            
        }
        
    }
    return;
}

void ingreseNumero(string mensaje, int &num)
{
    cout << mensaje << endl;
    cin  >> num;
    return;
}

int main () {
 int numero;

 ingreseNumero("Ingrese un numero ", numero);
 programa(numero);

 system("pause");
 return 0;
}
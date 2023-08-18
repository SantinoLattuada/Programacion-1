/*2.5 puntos
3 Realizar un programa que reciba un número entero del usuario, y que devuelva:
a- su factorial. Este cálculo debe ser solucionado en una función.
b- que informe si es múltiplo de 2. Este cálculo deberá ser resuelto en otra función.*/
#include <iostream>
using namespace std;
// A
int factorial(int numero) {
    int fact = 1; 
    for (int i = 1; i < numero ; i++) {
        fact = fact * (i + 1);
    }
    return fact;
}
// B
bool multiplo2(int num, bool multiploDe2)
{
    if (num % 2 == 0)
    {
        return multiploDe2 = true;
    }
    else if (num % 2 != 0)
    {
        return multiploDe2 = false;
    }
}
void ingresoDatos(string mensaje, int &num)
{
    cout << mensaje << endl;
    cin  >> num;
    return;
}

int main () {
 int numero;
 bool multiploDe2;
 int fact;
 ingresoDatos("Ingrese un numero entero ", numero);
 fact = factorial(numero);
 multiploDe2 = multiplo2(numero, multiploDe2);

 cout << "El factorial de " << numero << " Es " << fact << endl; 

 if (multiploDe2 == true)
 {
    cout << "Es multiplo de 2" << endl;
 }
 else if (multiploDe2 == false)
 {
    cout << "No es multiplo de 2" << endl;
 }
 
 
 return 0;
}
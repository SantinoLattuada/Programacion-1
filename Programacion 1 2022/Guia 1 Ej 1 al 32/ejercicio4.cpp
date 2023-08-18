#include <iostream>
using namespace std;

int main()
{   system("cls");
 
   int num, quinta, resto, septima;
   cout << "Ingrese un numero entero";
   cin  >> num;

   quinta = num / 5;
   resto = num % 5;
   septima = quinta / 7;

    cout << "La quinta parte del numero es: " << quinta;
    cout << " El resto de la division x5 es: " << resto;
    cout << " La septima parte de la quinta es: " << septima;


  return 0;
}
#include <iostream>
using namespace std;

int main () {
 system("cls");

 int numero,cantidad;
 numero = 0;
 cantidad = 0;

  cout << "Ingrese un numero";
  cin  >> numero;

 while (numero >= 0)
 {
     cout << "Se ingreso un: ", numero;
     cantidad = cantidad + 1;
    
     cout << "Ingrese un numero";
     cin  >> numero;

 }
 
    cout << "Se ingresaron "<< cantidad << " De numeros ";


 return 0;
}

#include <iostream>
using namespace std;

int main () {
 
int cantidad, val;

cout << "Ingrese cantidad de elementos: ";
cin >> cantidad;

int valores[cantidad] = {0};

for (int i = 0; i < cantidad; i++)
{
   valores[i]=99;
}

for (int i = 0; i < cantidad; i++)
{
    cout << "Valor: ";
    cin >> valores[i];
}

for (int i = 0; i < cantidad; i++)
{
    cout << valores[i] << endl;
}



system("pause");
 return 0;
}
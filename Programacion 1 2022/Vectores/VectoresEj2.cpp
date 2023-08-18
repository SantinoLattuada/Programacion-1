/*2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. 
Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás.*/

#include <iostream>
using namespace std;

void leer(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}

int main () {

 int cantidad = 0;
    leer("Ingrese la cantidad de elementos: ", cantidad);

 int valores[cantidad];

 for (int i = 0; i < cantidad; i++){
    cout << "Valor: ";
    cin >> valores[i];
}
 if (valores[cantidad - 1]< 10){
    for (int i = 0; i < cantidad; i++)
    {
        if (valores[i] < 0)
        {
            cout << "Negativo" << valores[i] << endl;
        }
    }
 }
 else{
     for (int i = 0; i < cantidad; i++)
     {
         if (valores[i] >= 0)
         {
            cout << "Positivo" << valores[i] << endl;
         }
         
     }
     
 }
 system("pause");
 return 0;
}
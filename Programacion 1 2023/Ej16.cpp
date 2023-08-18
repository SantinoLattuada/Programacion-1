/*Ej. MI-16: Ingresar e informar valores, mientras que el valor ingresado no sea negativo. Informar la cantidad de valores
ingresados. */

#include <iostream>
using namespace std;

int main () {

    int valor;
    int cantidadValores = 0;

    cout << "Ingrese un valor (negativo para salir) " << endl;
    cin  >> valor;

    while (valor >= 0){
        cantidadValores++;
        cout << "Ingrese un valor (negativo para salir) " << endl;
        cin  >> valor;
    }
     
    cout << "La cantidad de valores ingresados son: " << cantidadValores << endl;
 return 0;
}
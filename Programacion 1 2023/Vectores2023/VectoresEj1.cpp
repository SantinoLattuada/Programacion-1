/* 1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.*/

#include <iostream>
using namespace std;

void pedirDatos(int &n){
    cout << "Ingrese un numero entre 0 y 24" << endl;
    cin  >> n;
}

int main () {
    
    int n;
    pedirDatos(n);
    int vector[];
    vector[n];

    llenar(vector, n);

 return 0;
}
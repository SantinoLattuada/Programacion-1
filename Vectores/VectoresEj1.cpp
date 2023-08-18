/**
 * Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.
 * */

#include <iostream>
using namespace std;

void leer(string msg, int &val) {
    cout << msg << endl;;
    cin >> val;
    return;
}

void imprimir(int valores[], int cantidad) {
    for (int i = 0; i < cantidad; i++)
    {
        cout << valores[i] << endl;
    }
}
// valores = {1, 4, 2, 5, 9}
int max(int valores[], int cantidad) {
    int mayor = valores[0];
    for (int i = 1; i < cantidad; i++) {
        if(valores[i] > mayor) {
            mayor = valores[i];
        }
    }
    return mayor;
}

void llenar(int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++)
    {
        cin >> vec[i];
    }
}

int min(int valores[], int cantidad) {
    
}

float prom(int valores[], int cantidad) {
    int sum = 0;
    for (int i = 0; i < cantidad; i++) {
        sum = sum + valores[i];
    }
    return sum / (float) cantidad;
}

int main () {
    int cantidad = 0;
    leer("Ingrese la cantidad de elementos: ", cantidad);

    int valores[cantidad];

    int pares = 2;
    for (int i = 0; i < cantidad; i++)
    {
        valores[i] = pares;
        pares = pares + 2;
    }

    for (int i = 0; i < cantidad; i++)
    {
        valores[i] = i * 2;
    }

    for (int i = 0; i < cantidad; i++)
    {
        valores[i] = (i+1) * 2;
    }
    
    imprimir(valores, cantidad);
    imprimir(valores, cantidad);


    int valores2[] = {7,6,8,4};
    cout << "promedio:" << prom(valores2, 4);

    system("pause");

 return 0;
}
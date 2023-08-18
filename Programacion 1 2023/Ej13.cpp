/* Ej. MI-13: Dados N y M números naturales, informar su producto por sumas sucesivas.*/

#include <iostream>
using namespace std;

void pedirDatos(int &n, int &m){

    cout << "Ingrese el primer numero natural " << endl;
    cin  >> n;

    cout << "Ingrese el segundo numero natural " << endl;
    cin  >> m; 
}

// Función para calcular el producto por sumas sucesivas
int productoSumasSucesivas(int n, int m) {
    int producto = 0;
    for (int i = 0; i < m; i++) {
        producto += n;
    }
    return producto;
}

int main () {
    system("cls");

    int n, m;
    int producto;
    pedirDatos(n, m);

    producto = productoSumasSucesivas(n, m);

    cout << "El producto de " << n << " y de " << m << " es = " << producto << endl;
 return 0;
}
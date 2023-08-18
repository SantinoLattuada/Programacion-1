#include <iostream>
using namespace std;

/**
 * Calcula el factorial de un numero dado
*/
int factorial(int numero) {
    // 6! = 6*5*4*3*2*1
    // 3! = 3*2*1 = 6
    int fact = 1; 
    for (int i = 1; i < numero ; i++) {
        fact = fact * (i + 1);
    }
    return fact;
}

void leer(string mensaje, int &valor) {
    cout << mensaje;
    cin >> valor;
    return;
}

int leer(string mensaje) {
    int val;
    cout << mensaje;
    cin >> val;
    return val;
}

int main () {
 
 int valor = 0;
 leer("Ingrese un valor: ", valor);
 //valor = leer("Ingrese un valor: ");

 cout << "El factorial de " << valor << " es " << factorial(valor) << endl;

 system("pause");
 return 0;
}
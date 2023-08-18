/*Ej. MI-18: Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales.*/

#include <iostream>
using namespace std;

int main () {
    int M;

    cout << "Ingrese el valor M: ";
    cin >> M;
    
    int contador = 0;
    int i = 1;
    
    while (contador < M){
        if (i % 3 == 0 && i % 5 != 0){
            cout << i << endl;
            contador++;
        }
        i++;
    }
    
 return 0;
}
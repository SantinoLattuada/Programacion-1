/*Ej. MI-12 Informar los primeros 100 números naturales y su sumatoria*/


#include <iostream>
using namespace std;

int main () {
    int sumatoria = 0;

    for (int i = 0; i < 100; i++){
        cout << i << "  ";
        sumatoria += i; // Sumatoria = Sumatoria + i;
    }

    cout << "La sumatoria de los primeros 100 numeros naturales es: " << sumatoria << endl;

 system("pause");
 return 0;
}
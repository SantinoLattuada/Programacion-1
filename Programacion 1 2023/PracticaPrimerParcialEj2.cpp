/* 2) Dados N números naturales de 3 dígitos ingresados, informar cuántos eran capicúa. Realizar diagrama o
codificación*/

#include <iostream>
using namespace std;

int main () {
    
    int n;
    int numero;
    int primerDigito;
    int tercerDigito;
    int cantCapicua = 0;
    cout << "Ingrese la cantidad de numeros a ingresar: " << endl;
    cin  >> n;

    for (int i = 0; i < n; i++){
        cout << "Ingrese un numero de 3 digitos " << endl;
        cin  >> numero;

        primerDigito = numero / 100;
        tercerDigito = numero % 10;

        if (primerDigito == tercerDigito){
            cantCapicua++;
        }
        
    }
    cout << "La cant de capicua es: " << cantCapicua << endl;


 return 0;
}
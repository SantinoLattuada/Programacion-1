/*4. Ingresar un valor entero N (< 25). 
A continuación ingresar un conjunto VEC de N componentes. 
Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros elementos.*/


#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}

int main () {
    int cantidad;
    pedirDatos("Ingrese la cantidad de elementos", cantidad);
    int vec[cantidad];
    int acumulador = 0;

    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese un numero" << endl;
        cin >> vec[i];
        acumulador = acumulador + vec[i];
    }
    if (acumulador > 0){
        for (int i = 0; i < cantidad; i++){
            if (vec[i] % 2 != 0) {
                cout << "Impar " << vec[i] << " ";
            }
            
        }
        
    }
    else if (acumulador < 0){
        for (int i = 0; i < cantidad; i++) {
            if (vec[i] % 2 == 0) {
                cout << "Par " << vec[i] << " ";
            }
            
        }
        
    }
    

 return 0;
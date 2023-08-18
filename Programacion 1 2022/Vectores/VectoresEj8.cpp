/*8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación*/

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}
void llenar(int vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese valor para la posicion " << i << endl;
        cin  >> vec[i];
    }
}
int main () {
    //Defino variable y pido cantidad de elementos
    int cantidad;
    
    pedirDatos("Ingrese la cantidad de elementos", cantidad);

    //Declaro los vectores y asigno cantidad
    int GG[cantidad];

    //Lleno el vector
    llenar(GG,cantidad);

    //Imprimo uno por linea
    for (int i = cantidad - 1; i >= 0; i--){
        cout << GG[i] << endl;
    }
    //Imprimo diez por linea
    int contadorDiez = 0;
    for (int i = cantidad - 1; i >= 0 ; i--){
        contadorDiez++;
        if (contadorDiez == 10){
            cout << GG[i];
            cout << endl;
            contadorDiez = 0;
        }
        else{
            cout << GG[i] << " ";
        }
    }
    //Imprimo 5 por linea con identificacion
    int contadorCinco = 0;
    for (int i = cantidad - 1; i >= 0; i--){
        contadorCinco++;
        if (contadorCinco == 5){
            cout << GG[i] << " Iden " << i << endl;
            contadorCinco = 0;
        }
        else{
            cout << GG[i] << " Iden " << i << "  ";
        }
    }
    
 return 0;
}
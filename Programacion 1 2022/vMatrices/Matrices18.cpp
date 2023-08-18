/*18. Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y
columnas. Desarrollar un programa que determine e imprima:
a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la
sumatoria de elementos.
b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor
(considerando que N fuera par).
c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria
de elementos.*/

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(int vec[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingrese numero " << endl;
        cin  >> n;
    }
    return;
}
void primerPunto(int vec[], int n){
    //Elementos de la diagonal principal
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                cout << vec[i][j] << "\t ";
            }
            
        }
        
    }    
    return;
}
void segundoPunto(){

}
int main () {
    int n;
    pedirDatos("Ingrese un valor menor a 25 ", n);
    
    int vector[n][n];
    llenar(vector, n);

    primerPunto(vector, n);

 return 0;
}
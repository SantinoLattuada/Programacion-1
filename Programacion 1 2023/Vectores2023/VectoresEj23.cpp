/*23.Dado un arreglo de enteros (Max = 1000) y otro entero (DATO) se pide desarrollar:
a) Una rutina que indique si DATO es o no un elemento del arreglo.
b) Una rutina que indique si DATO es o no un elemento del arreglo y si lo es devuelva la posición
de la primera aparición del mismo (Búsqueda Secuencial).
c) Una rutina que devuelva todas las posiciones en las cuales aparece DATO en el arreglo.
d) Una rutina que devuelva la posición de la primera y de la última aparición de DATO en el
arreglo.*/

#include <iostream>
using namespace std;

int busquedaBinaria(int vec[], int n, int dato){
    int inicio = 0;
    int fin = n - 1;
    while (fin >= inicio){
        int mitad = inicio + (fin - inicio) / 2;
        if (vec[mitad] == dato){
            return mitad;
        }
        else if (vec[mitad] > dato){
            fin = mitad - 1;
        }
        else{
            inicio = mitad + 1;
        }
    }
    return -1;
}
void busquedaSecuencial(){
    
}
int main () {
    int n = 10;
    int vec[n];

    vec[n] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int dato = 10;
    int guardar;
    guardar = busquedaBinaria(vec, n, dato);
    //A 
    if (guardar >= 0){
        cout << "El valor dato se encuentra en el arreglo, en la posicion: " << guardar << endl;
    }
    



 return 0;
}
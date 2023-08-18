#include <iostream>
using namespace std;

void distintos(int vecA[], int n, int vecB[], int m, int vecC[], int &c){
    int i = 0;
    int j = 0;
    c = 0;
    while (i < n && j < m){
        int dato = vecA[i];
        int esta = busquedaBinaria(dato, vecB, m);
        if (esta == -1){
            vecC[c] = dato;
            i++;
            c++;
        }
        int otroDato = vecB[j];
        int estaB = busquedaBinaria(otroDato, vecA, n);
        if (esta == -1){
            vec[c] = otroDato;
            j++;
            c++;
        }
    }
    while (i < n){
        vecC[c] = vecA[i];
        i++;
        c++;
    }
    while (j < m){
        vecC[c] = vecB[j];
        j++;
        c++;
    }
    
}
int busquedaBinaria(int dato, int vecB[], int m){
    int inicio = 0;
    int fin = m - 1;

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
int main () {
    
    int n = 4;
    int m = 5;

    int vecA[n] = {0, 2, 4, 9},
    int vecB[m] = {1, 2, 3, 5, 9},

    int o = n + m;
    int vecC[o]

    distintos(vecA, n, vecB, m, vecC, o)


 return 0;
}
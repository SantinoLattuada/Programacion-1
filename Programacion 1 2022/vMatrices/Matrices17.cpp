
/**
Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada
fila.
 * */

#include <iostream>
using namespace std;

#define MAX_FILAS 30
#define MAX_COLS 25

void llenar(int mat[][MAX_COLS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingerse el valor para la posicion (" << i << "," << j << "):";
            cin >> mat[i][j];
        }
    }
}

void leer(string msg, int &val)
{
    cout << msg;
    cin >> val;
    return;
}

int main () {
int mat[MAX_FILAS][MAX_COLS];

int filas, columnas;
leer("Ingrese cantidad de filas: ", filas);
leer("Ingrese cantidad de columnas: ", columnas);

llenar(mat, filas, columnas);

for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
        cout << mat[i][j] << "\t";
    }
}

cout << endl; 
/*
1 2 3 4  
4 5 6 7
7 8 9 9 
9 9 9 9

0,0 1,1, 2,2 n-1, n-1

0, n-1 1, n-2 2, n-3, n-1,0



vecsumcol = {5, 7, 9}
*/
for (int j = 0; j < columnas; j++) {
    for (int i = 0; i < filas; i++) {
        cout << mat[i][j] << "\t";
    }
}

int suma = 0;
for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
        suma += mat[i][j];
    }
}
cout << "Promedio de todos los elementos: " << suma / (filas * columnas) << endl;

int vecSumCol[columnas] = {};
for (int j = 0; j < columnas; j++) {
    for (int i = 0; i < filas; i++) {
        vecSumCol[j] += mat[i][j];
    }
}

for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
        cout << mat[i][j] << "\t";
    }
    cout << endl;
}

for(int i = 0; i < columnas; i++) {
    cout << vecSumCol[i] << "\t";
}
cout << endl;

int vecMaxFil[filas] = {};
for (int i = 0; i < filas; i++) {
    vecMaxFil[i] = mat[i][0];
    for (int j = 1; j < columnas; j++) {
        if(mat[i][j] > vecMaxFil[i]) {
            vecMaxFil[i] = mat[i][j];
        }
    }
}

for (int i = 0; i < filas; i++) {
    cout << "Maximo de la fila " << i << ": " << vecMaxFil[i] << endl;
}


system("pause");
 return 0;
}
matriz-ej17.cpp
Mostrando matriz-ej17.cpp.
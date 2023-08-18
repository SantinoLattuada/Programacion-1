/*17. Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada
fila.*/

#include <iostream>
using namespace std;

void pedirDatos(int &filas, int &columnas){
    cout << "Ingrese cantidad de filas menor a 30" << endl;   
    cin  >> filas;
    cout << "Ingrese cantidad de columnas menor a 25 " << endl;   
    cin  >> columnas;
}
void llenar(int matriza[][25], int filas, int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Ingrese el numero para la fila "<< i << " y la columna " << j << endl;
            cin  >> matriza[i][j];
        }
        
    }
    
}
//A
void imprimirXColumna(int matriza[][25], int filas, int columnas){
    for (int j = 0; j < columnas; j++){
        for (int i = 0; i < filas; i++){
            cout << matriza[i][j] << "\t ";
        }
        cout << endl;
    }
    
}
//B
int valorPromedio(int matriza[][25], int filas, int columnas, int cant){
    int sumatoria = 0;
    int resultado = 0;
     for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            sumatoria += matriza[i][j];
        }
        
    }
    resultado = sumatoria / cant;
    return resultado;
}
int main () {
    int filas;
    int columnas;

    pedirDatos(filas, columnas);

    int matriza[30][25];
    llenar(matriza, filas, columnas);

    //A
    imprimirXColumna(matriza, filas, columnas);

    //B
    int cant;
    int resultado = 0;
    cant = filas * columnas;
    resultado = valorPromedio(matriza, filas, columnas, cant);
    cout << "El valor promedio es: " << resultado << endl;
 
 return 0;
}
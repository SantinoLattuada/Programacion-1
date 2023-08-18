#include <iostream>
using namespace std;



void burbujeoMejorado(int vecA[], int n){
    int aux;
    int i = 0;
    bool ordenado = false;

    while (i < n && ordenado == false){
        ordenado = true;

        for (int j = 0; j < n - i - 1; j++){
            if (vecA[j] > vecA[j + 1]){
                aux = vecA[j];
                vecA[j] = vecA[j + 1];
                vecA[j + 1] = aux;
                ordenado = false;
            }
            
        }
        i++;
    }
    
}
/*Realizar una función que reciba un vector de pedidos agrupados por codigo de camion y que utlizando corte de control imprima:
1) Cantidad de pedidos de cada camion
2) El peso total de cada camion
3) y al final cantidad de pedidos totales y el monto total/ */

struct Pedido{
    int codigoCamion;
    float peso;
    int bultos;
    float precio;
};

void corteDeControl(int vecA[], int n){
    int i = 0;
    int key;

    int pedidosTotales = 0;
    int montoTotal = 0;

    while (i < n){
        key = vecA[i].codigoCamion;
        int cantPedidosxCamion = 0;
        int pesoxCamion = 0;
        while (i < n && key == vecA[i].codigoCamion;){
            cantPedidosxCamion++;
            pesoxCamion++;

            pedidosTotales++;
            montoTotal += vecA[i].precio;
        }
        
        cout << "Camion: " << key << endl;
        cout << " Cant pedidos: " << cantPedidosxCamion << " Peso total: " << pesoxCamion << endl;
    }
    cout << "Cant pedidos totales: " << pedidosTotales << " Monto total: " << montoTotal << endl;
}
int busquedaBinaria(int vecA[], int n, int dato){
    int inicio = 0;
    int fin = n - 1;
    int mitad;

    while (fin >= inicio){
        mitad = inicio + (fin - inicio) /2;
        if (vecA[mitad] == dato){
            return mitad;
        }
        if (vecA[mitad] > dato){
            fin = mitad - 1;
        }
        else{
            inicio = mitad + 1;
        }
        
    }
}
void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k){
    int i = 0;
    int j = 0;
    k = 0;

    while (i < n && j < m){
        if (vecA[i] < vecB[j]){
            vecC[k] = vecA[i];
            i++;
        }
        else{
            vecC[k] = vecB[j]
            j++;
        }
        k++;
    }

    while (i < n){
        vecC[k] = vecA[i];
        i++;
        k++;
    }

    while (j < m){
        vecC[k] = vecB[j]
        j++;
        k++;
    }
    
}
int main () {
    


 return 0;
}
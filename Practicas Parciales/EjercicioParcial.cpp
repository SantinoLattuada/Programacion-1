/*Realizar una función que reciba un vector de pedidos agrupados por codigo de camion y que utlizando corte de control imprima:
1) Cantidad de pedidos de cada camion
2) El peso total de cada camion
3) y al final cantidad de pedidos totales y el monto total */
#include <iostream>
using namespace std;

struct Pedido{
    int codigoCamion;
    float peso;
    int bultos;
    float precio;
};
void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(Pedido vec[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingrese datos para el Pedido " << i + 1 << endl;

        cout << "Codigo de camion " << endl;
        cin  >> vec[i].codigoCamion;
        cout << "Peso del camion " << endl;
        cin  >> vec[i].peso;
        cout << "Cant bultos " << endl;
        cin  >> vec[i].bultos;
        cout << "Precio " << endl;
        cin  >> vec[i].precio;
    }
    return;
}
void imprimir(Pedido vec[], int n){
    int i = 0;
    int key;

    //Acumulador y Contador por sublotes
    int cantPedidosCadaCamion;
    int pesoTotalCadaCamion;

    //Acumulador y Contador por Lote Completo
    int pedidosTotales = 0;
    int montoTotal = 0;
    
    while (i < n){
        key = vec[i].codigoCamion;

        cantPedidosCadaCamion = 0;
        pesoTotalCadaCamion = 0;
        while (i < n && key == vec[i].codigoCamion){
            cantPedidosCadaCamion++;
            pesoTotalCadaCamion += vec[i].peso;

            pedidosTotales++;
            montoTotal += vec[i].precio;
            i++;
        }
        cout << "Camion: " << key << endl;

        cout << "Pedidos \t Peso Camion " << endl;
        cout << cantPedidosCadaCamion << "\t\t " << pesoTotalCadaCamion << endl;
    }
    cout << "La cantidad de pedidos totales son: " << pedidosTotales << endl;
    cout << "El monto total es: " << montoTotal;
}
int main () {

    int vec[10];
    cout << vec[100];

    int cantPedidos;
    pedirDatos("Ingrese la cantidad de pedidos ", cantPedidos);

    Pedido pedidos[cantPedidos];
    llenar(pedidos, cantPedidos);

    imprimir(pedidos, cantPedidos);

 return 0;
}
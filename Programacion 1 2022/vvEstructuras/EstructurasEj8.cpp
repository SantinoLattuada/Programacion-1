/*Ej. 8: Dado un vector de productos que contiene 100 registros, y cada registro corresponde a un producto
que está codificado del 1 a 100, ordenado por código de producto con el siguiente diseño:
Código de producto (1..100) Stock (int)
y otro vector de pedidos, con el siguiente diseño:
Número de pedido(int) Número de cliente(long)
Código de producto (1..100, char) Cantidad pedida (int)

Se pide desarrollar un procedimiento que reciba ambos vectores, y procese los pedidos haciendo lo siguiente
a) Actualizar el campo stock del vector de productos, por cada pedido que pueda ser realizado.
b) Imprima el listado de los pedidos satisfechos con el siguiente formato:

c) Complete un tercer vector con el mismo diseño que el vector de pedidos, con aquellos pedidos que no
pueden ser satisfechos en su totalidad.*/

#include <iostream>
using namespace std;

struct PRODUCTOS{
    int codigoDeProducto;
    int stock;
};
struct PEDIDOS{
    int numeroDePedido;
    int numeroDeCliente;
    int codigoDeProducto;
    int cantidadPedida;
};
void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(PEDIDOS vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese numero de pedido " << endl;
        cin  >> vec[i].numeroDePedido;

        cout << "Ingrese numero de cliente " << endl;
        cin  >> vec[i].numeroDeCliente;

        cout << "Ingrese codigo de producto " << endl;
        cin  >> vec[i].numeroDeProducto;
        
        cout << "Ingrese la cantidad pedida " << endl;
        cin  >> vec[i].cantidadPedida;
    }
    
}
int main (){
    //Defino los vectores
    PRODUCTOS productos[100];

    //Declaro y pido la cantidad de pedidos
    int cantPedidos;
    pedirDatos("Ingrese la cantidad de pedidos ",cantPedidos);

    //Declaro el vector de pedidos y lo lleno
    PEDIDOS vecPedidos[cantPedidos];
    llenar(vecPedidos, cantPedidos);



    
 return 0;
}
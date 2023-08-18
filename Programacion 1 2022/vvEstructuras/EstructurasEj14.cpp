/*Ej. 14: Una discográfica desea obtener un listado de los discos más vendidos en un determinado período.
Para ello cuenta con los datos de los discos vendidos en una tabla donde cada columna representa un año y
cada fila una venta. Cada venta posee la siguiente información:
Id. del disco vendido (Código alfanumérico de 6 caracteres)
Cantidad de discos vendidos (Entero largo)


Nota: cada disco sólo aparecerá 1 vez por año, es decir, no se repetirá el mismo disco en la misma columna.
La discográfica cuenta además con la información de cada disco que comercializa. De cada disco posee los
siguientes datos:
● Id. del disco vendido (Código alfanumérico de 6 caracteres)
● Nombre del disco (Cadena de 40 caracteres).
● Id. de la banda:(Entero corto entre 0 y 100)
● Nombre de la banda (Cadena de 40 caracteres).
La discográfica tiene en su poder 1000 discos para vender. Los datos de los discos se encuentran ordenados
por id de disco.
Se pide:
● Obtener un listado ordenado por nombre de banda con las ventas realizadas en los últimos 10 años.
● Consideraciones: Realizar la menor cantidad de búsquedas posibles sobre el conjunto de discos.
*/
#include <iostream>
using namespace std;

struct Ventas{
    int IdDisco;
    int cantDiscosVendidos;
};
struct Discos{
    int idDiscoV;
    string nombreDisco;
    int idBanda;
    string nombreBanda;
};
struct Bandas{
    char id;
    string nombre;
    int ventas;
};

void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenarVentas(Ventas vec[], int cant){
    for (int i = 0; i < count; i++){
        cout << "Ingrese id de disco vendido " << endl;
        cin  >> vec[i].IdDisco;
        cout << "Ingrese cantidad de discos vendidos " << endl;
        cin  >> vec[i].cantDiscosVendidos;
    }
    return;    
}
void llenarDiscos(Discos vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese id de disco vendido " << endl;
        cin  >> vec[i].idDiscoV;
        cout << "Ingrese el nombre del disco " << endl;
        cin  >> vec[i].nombreDisco;
        cout << "Ingrese el id de la banda " << endl;
        cin  >> vec[i].idBanda;
        cout << "Ingrese el nombre de la banda " << endl;
        cin  >> vec[i].nombreBanda;
    }
    return;
}
void procesarVentas(Ventas venta[][10], int cantidadVentas, int cantAnios, Discos disco[], int cantidadDiscos){
    for (int i = 0; i < cantidadVentas; i++){
        for (int j = 0; j < cantAnios; j++){
            int posDisco = busqBinaria(venta[i][j].IdDisco, disco, cantidadDiscos);
        }    
    }
    
    return;
}
int busqBinaria(Venta venta[][].idDisco, Discos disco[], int cantDiscos){
    int inicio = 0;
    int final = cantDiscos - 1;
    int mitad;
    while (inicio <= final){
        mitad = inicio + (fin - inicio) / 2;
        if (disco[mitad] == venta[][mitad].idDisco){
            return mitad;
        }
        else{
            if (disco[mitad] < venta[][mitad].idDisco){
                /* code */
            }
            
        }
    }
    
}
int main () {

    //Armo los vectores de estructuras
    Ventas venta[100][10];
    Discos disco[1000];
    Bandas banda[100];

    //Lleno ambos vectores
    llenarVentas(venta, cantVentas);
    llenarDiscos(disco, cantDiscos);

    //Mando valores a funcion
    procesarVentas(venta, cantVentas, cantAnios, disco, cantDiscos);

 return 0;
}
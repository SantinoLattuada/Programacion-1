/*Ej. 10: El dueño de un local de venta de libros desea relevar el stock que posee en el local y en el depósito,
para realizar las compras del mes. Para ello cuenta con dos conjuntos de datos:
a) StockEnLocal, ordenado por código del libro, con un registro por cada libro que se encuentra en el local, con el siguiente diseño:
● Código de libro ( 4 dígitos )
● Autor (cadena)
● Stock en el local (int)
● Título del libro (cadena)
● Editorial (cadena)
● Genero ( cadena)

b) StockEnDeposit, ordenado por código del libro, con un registro por cada libro que se encuentra en el
depósito, con el siguiente diseño:
● Código de libro ( 4 dígitos )
● Stock en depósito (int)
Se pide desarrollar la metodología necesaria para escribir un algoritmo que reciba ambos conjuntos de datos
y emita un listado ordenado por código de libro, con un renglón por cada libro que tenga faltante en stock sea
en depósito, local o en ambos lugares, con el siguiente formato: */

#include <iostream>
using namespace std;

struct StockLocal{
    int codigoLibro;
    string autor;
    int stockLocal;
    string titulo;
    string editorial;
    string genero;
};
struct StockDeposit{
    int codigoDeLibro;
    int stockDeposito;
};
void imprimirLibro(int codLibro, string mensaje){
    cout << codLibro << "\t\t" << mensaje << endl;
}
void imprimirDatos(StockLocal stockLocal[], int cantLocal, StockDeposit stockDeposito[], int cantDeposito ){
    int i = 0;
    int j = 0;
    int cantFaltantes;
    while(i < cantLocal && j < cantDeposito){
        if (stockLocal[i].stockLocal == stockDeposito[j].stockDeposito){
            if (stockLocal[i].stockLocal == 0 && stockDeposito[j].stockDeposito == 0){
                imprimirLibro(stockLocal[i].stockLocal, "Falta en local y deposito");
                cantFaltantes++;
            }
            else if (stockLocal[i].stockLocal == 0){
                imprimirLibro(stockLocal[i].stockLocal, "Falta en local");
                cantFaltantes++;
            }
            else if (stockDeposito[j].stockDeposito == 0){
                imprimirLibro(stockDeposito[j].stockDeposito, "Falta en deposito");
                cantFaltantes++;
            }
            i++;
            j++;
        }
        else if (stockLocal[i].codigoLibro < stockDeposito[j].codigoDeLibro){
            if (stockLocal[i].stockLocal == 0){
                imprimirLibro(stockLocal[i].stockLocal, "Falta en local");
                cantFaltantes++;
            }
            i++;
            else{
                if (stockDeposito[j].stockDeposito == 0){
                    imprimirLibro(stockDeposito[j].stockDeposito, "Falta en deposito");
                    cantFaltantes++;
                }
                
            }
            j++;
        }
        
    }
    // Saco lo que queda del conjunto de Local
    i = 0;
    while(i < cantLocal) {
        if(stockLocal[i].stockLocal == 0) {
            imprimirLibro(stockLocal[i].codigoLibro, "Falta en local");
            cantFaltantes++;
        }

        i++;
    }

    // Saco lo que queda del conjunto de Deposito
    j = 0;
    while(j < cantDeposito) {
        if(stockDeposito[j].stockDeposito == 0) {
            imprimirLibro(stockDeposito[j].codigoDeLibro, "Falta en Deposito");
            cantFaltantes++;
        }

        j++;
    }
    cout << "Total de Libros en Falta:" << cantFaltantes << endl;
}
int main(){
    
    return 0;
}

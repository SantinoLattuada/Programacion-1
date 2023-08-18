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
void emitirListado(StockLocal stockLocal[], int cantLocal, StockDeposit stockDeposito[], int cantDeposito){

    cout << "Libros Faltantes" << endl;
    cout << "Codigo\t\tObservacion" << endl;

    int i = 0;
    int j = 0;
    int cantFaltantes = 0;
    while(i < cantLocal && j < cantDeposito){

        if(stockLocal[i].codigoLibro == stockDeposito[j].codigoDeLibro) {
            if(stockLocal[i].stockLocal == 0 && stockDeposito[j].stockDeposito == 0) {
                imprimirLibro(stockLocal[i].codigoLibro, "Falta en local y en deposito");
                cantFaltantes++;
            } else if(stockLocal[i].stockLocal == 0) {
                imprimirLibro(stockLocal[i].codigoLibro, "Falta en local");
                cantFaltantes++;
            } else if(stockDeposito[j].stockDeposito == 0) {
                imprimirLibro(stockDeposito[j].codigoDeLibro, "Falta en Deposito");
                cantFaltantes++;
            }

            i++;
            j++;
        } else if(stockLocal[i].codigoLibro < stockDeposito[j].codigoDeLibro) {
            if(stockLocal[i].stockLocal == 0) {
                imprimirLibro(stockLocal[i].codigoLibro, "Falta en local");
                cantFaltantes++;
            }
            i++;
        } else {
            if(stockDeposito[j].stockDeposito == 0) {
                imprimirLibro(stockDeposito[j].codigoDeLibro, "Falta en Deposito");
                cantFaltantes++;
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

    cout << "Total de Lbibros en Falta:" << cantFaltantes << endl;
};
void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
};
void llenarLocal(StockLocal vec[], int cant){
    cout << "Datos del local" << endl;
    for (int i = 0; i < cant; i++){
        cout << "Ingrese el codigo de libro " << endl;
        cin  >> vec[i].codigoLibro;
        cout << "Ingrese el stock del local " << endl;
        cin  >> vec[i].stockLocal;
        /*cout << "Ingrese nombre del autor" << endl;
        cin  >> vec[i].autor;
        cout << "Ingrese titulo del libro" << endl;
        cin  >> vec[i].titulo;
        cout << "Ingrese nombre de la editorial" << endl;
        cin  >> vec[i].editorial;
        cout << "Ingrese genero del libro " << endl;
        cin  >> vec[i].genero;*/
    }
    return;
}
void llenarDeposito(StockDeposit vec[], int cant){
    cout << "Datos del deposito " << endl;
    for (int i = 0; i < cant; i++){
        cout << "Ingrese codigo del libro " << endl;
        cin  >> vec[i].codigoDeLibro;
        cout << "Ingrese stock en deposito "<< endl;
        cin  >> vec[i].stockDeposito;
    }
    return;
}
int main () {
    //Declaro variables
    int librosLocal;    
    int librosDeposito;

    //Pido valor y guardo en variable
    pedirDatos("Ingrese la cantidad de libros en local", librosLocal);
    pedirDatos("Ingrese la cantidad de libros en deposito", librosDeposito);

    //Creo vectores 
    StockLocal vectorLocal[librosLocal];
    StockDeposit vectorDeposito[librosDeposito];

    //Lleno los vectores
    llenarLocal(vectorLocal, librosLocal);
    cout << "-------------------------------------------" << endl;
    llenarDeposito(vectorDeposito, librosDeposito);

    //Creo el tercer vector  realizo apareo
    int k = 0;
    emitirListado(vectorLocal, librosLocal, vectorDeposito, librosDeposito);



 return 0;
}
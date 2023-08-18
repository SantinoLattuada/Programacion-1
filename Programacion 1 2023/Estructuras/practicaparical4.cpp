#include <iostream>
using namespace std;
struct Gustos{
    string nombre;
    int cGusto;
};
struct Sucursales{
    int horaVenta;
    int cGusto;
    int gramos;
};
void apareo(Sucursales suc1[], int cantSuc1, Sucursales suc2[], int cantSuc2, Sucursales unificado[]){
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < cantSuc1 && j < cantSuc2){
        if (suc1[i].horaVenta < suc2[j].horaVenta){
            unificado[k] = suc1[i];
            i++;
        }
        else{
            unificado[k] = suc2[j];
            j++;
        }
        k++;
    }
    while (i < cantSuc1){
        unificado[k] = suc1[i];
        i++;
        k++;
    }
    while (j < cantSuc2){
        unificado[k] = suc2[j];
        j++;
        k++;
    }
}
void calcularFactTotal(Sucursales unificado[], int cantUnificado){
    int facturacionTotal = 0;
    for (int i = 0; i < cantUnificado; i++){
        if (unificado[i].horaVenta > 000000 && unificado[i].horaVenta <= 180000){
            facturacionTotal += (unificado[i].gramos * 2000) / 1000;
        }
        else{
            facturacionTotal += (unificado[i].gramos * 3000) / 1000;
        }
    }
    cout << "La facturacion total es de: " << facturacionTotal << endl;
    return;
}
void imprimirListado(Sucursales unificado[], int cantUnificado, Gustos gusto[], int cantGustos){
    //Ordeno el vector por codigo de gusto
    burbujeoMejorado(unificado, cantUnificado);

    int cantOrdenadoXGusto = cantUnificado;
    Sucursales ordenadoXGusto[cantOrdenadoXGusto];
    int k = 0;

    int i = 0;
    while (i < cantUnificado){
        int key = unificado[i].cGusto;
        int cantGramos = 0;

        while (i < cantUnificado && key == unificado[i].cGusto){
            cantGramos += unificado[i].gramos;
            i++;
        }
        ordenadoXGusto[k].gramos = cantGramos;
        ordenadoXGusto[k].cGusto = unificado[i].cGusto;
        k++;
    }
    //Ordeno el vector resultante por consumo total en gramos
    burbujeoMejorado(ordenadoXGusto, cantOrdenadoXGusto);

    cout << "Gusto \t Consumo Total" << endl;
    i = 0;
    while (i < cantOrdenadoXGusto){
        int codigoGusto = ordenadoXGusto[i].cGusto;
        int posicion = busquedaBinaria(gusto, cantGustos, codigoGusto);
        cout << gusto[posicion].nombre << "\t" << ordenadoXGusto[i].gramos;
        i++;
    }
    
}
int busquedaBinaria(Gustos vec[], int cant, int valor){
    int inicio = 0;
    int fin = cant - 1;

    while (fin >= inicio){
        int mitad = inicio + (fin - inicio) / 2;
        if (vec[mitad] == valor){
            return mitad;
        }
        else if (vec[mitad] > valor){
            fin = mitad - 1;
        }
        else{
            inicio = mitad + 1;
        }
    }
    return -1;
}
int main () {
    int cantSuc1, cantSuc2;
    cout << "Ingrese cant ventas suc 1; " << endl;
    cin  >> cantSuc1;
    cout << "Ingrese cant ventas suc 2 " << endl;
    cin  >> cantSuc2;

    Sucursales suc1[cantSuc1];
    Sucursales suc2[cantSuc2];
    Gustos gusto[50];
    int cantUnificado = cantSuc1 + cantSuc2;
    Sucursales unificado[cantUnificado];
    //A
    apareo(suc1, cantSuc1, suc2, cantSuc2, unificado);

    //B
    calcularFactTotal(unificado, cantUnificado);

    //C
    imprimirListado(unificado, cantUnificado, gusto, 50);


 return 0;
}
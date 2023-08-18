#include <iostream>
using namespace std;

struct Sucursales{
    int hora; //HHMMSS
    int cGusto;
    int cantGramos;
};
struct Gustos{
    string nombre;
    int cGusto;
};

void apareo(Sucursales s1, int n, Sucursales s2, int m, Sucursales ambas, int j){
    int i = 0, j = 0;

    int k = 0;

    while (i < n && j < m){
        if (s1[i].hora < s2[j].hora){
            ambas[k].hora = s1[i].hora;
            ambas[k].cGusto = s1[i].cGusto;
            ambas[k].cantGramos = s1[i].cantGramos;
            i++;
        }
        else{
            ambas[k].hora = s2[j].hora;
            ambas[k].cGusto = s2[j].cGusto;
            ambas[k].cantGramos = s2[j].cantGramos;
            j++;
        }
        k++;
    }
    while (i < n){
        ambas[k].hora = s1[i].hora;
        ambas[k].cGusto = s1[i].cGusto;
        ambas[k].cantGramos = s1[i].cantGramos;
        i++;
        k++;
    }
    while (j < m){
        ambas[k].hora = s2[j].hora;
        ambas[k].cGusto = s2[j].cGusto;
        ambas[k].cantGramos = s2[j].cantGramos;
        j++;
        k++;
    }
    
}
void imprimir(Sucursales vec[], int j){
    cout << "Hora \t Cod.Gusto \t Gr " << endl;
    for (int i = 0; i < j; i++){
        cout << vec[i].hora << "\t " << vec[i].cGusto << "\t " << vec[i].cantGramos << endl;
    }
    
}
void facturacionTotal(Sucursales vec[], int j){
    int cantPrimerTurno = 0;
    int cantSegundoTurno = 0;
    int cantTotal = 0;

    for (int i = 0; i < j; i++){
        if (vec[i].hora >= 000000 && vec[i].hora <= 180000){
            cantPrimerTurno += (vec[i].cantGramos * 2000) / 1000;
        }
        else{
            cantSegundoTurno += (vec[i].cantGramos * 3000) / 1000;
        }
    }
    cantTotal = cantPrimerTurno + cantSegundoTurno;
    cout << "Cant total: " << cantTotal;

}
struct Consumo{
    string gusto;
    int consumo;
};
void recibiLoQueQuieras(Sucursales vec[], int n, Gustos gusto[], int m){
    Consumo con[];
    int contadorConsumos = 0;

    for (int i = 0; i < n; i++) {
        int codigoGusto = vec[i].cGusto;
        int cantidadGramos = vec[i].cantGramos;

        // Buscar el nombre del gusto en el vector de Gustos
        string nombreGusto;
        for (int j = 0; j < m; j++) {
            if (gusto[j].cGusto == codigoGusto) {
                nombreGusto = gusto[j].nombre;
            }
        }
    }
    
     // Ordenar los consumos por consumo descendente
    for (int i = 0; i < contadorConsumos - 1; i++) {
        for (int j = 0; j < contadorConsumos - i - 1; j++) {
            if (consumos[j].consumo < consumos[j + 1].consumo) {
                Consumo temp = consumos[j];
                consumos[j] = consumos[j + 1];
                consumos[j + 1] = temp;
            }
        }
    }
}
int main () {
    
    int n, m = 50;
    Sucursales sucursal1[n];
    Sucursales sucursal2[m];

    int j = n + m;
    Sucursales ambas[j];

    apareo(sucursal1, n, sucursal2, m, ambas, j);

    imprimir(ambas, j);
    
    Gustos gusto[5] = {
        {Chocolate, 1};
        {Frutilla, 2};
        {DDL, 3};
        {Banana, 4};
        {Vainilla, 5};
    };

    imprimirListado(ambas, j, gusto, 50);

 return 0;
}
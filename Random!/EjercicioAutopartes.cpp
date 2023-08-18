#include <iostream>
using namespace std;

struct Entrada{
    int sucursal;
    int dia;
    int total;
};
struct Salida{
    int dia;
    int monto;
};

void montoTotalporDia(int montoDias[], Entrada vectorACargar[], int n){
    int i = 0;
    while(i<n){
        int key= vectorACargar[i].dia;
        while (i<n && key==vectorACargar[i].dia)
        {
            montoDias[key-1] += vectorACargar[i].total;
            i++;
        }
    }
    return;
}

void cargarDatos(int montoDias[], Salida vectorResultado[31]){
    for (int i=0; i<31; i++){
        vectorResultado[i].dia=i+1;
        vectorResultado[i].monto=montoDias[i];
    }
    return;
}

void ordenarVector(Salida VectorResultado[], int n){
    Salida aux;
    int i = 0;
    bool ordenado = false;
    while (!ordenado && i<n){
        ordenado=true;
        for (int j=0; j<n-i-1; j++){
            if(VectorResultado[j].monto > VectorResultado[j + 1].monto){
                aux=VectorResultado[j];
                VectorResultado[j]=VectorResultado[j + 1];
                ordenado=false;
            }
        }
        i++;
    }
    return;
}
int main(){




    return 0;
}
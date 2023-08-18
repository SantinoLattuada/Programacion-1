/*Ejercicio 1
Un local de comida al paso necesita de nuestra ayuda para procesar los datos que ha relevado de su desempeño. Los
datos que ha registrado son las ventas (en pesos facturados) y cantidad de clientes por cada hora de atención.
Realice el programa que le permita cargar los datos registrados durante un mes (30 días) a cada hora (el local trabaja
de 9hs a 21hs) y luego informe:
a. El día y hora con menor facturación registrada.
b. El día con mayor facturación diaria.
c. El promedio de facturación por cliente (facturación total / clientes totales)*/

#include <iostream>
using namespace std;

void sintitulo(int cantFacturado, int cantClientes){

    int diaMenor = 0;
    int horaMenor = 0;
    int menorFact = 99999999999999;

    int facturacionDiaria;
    int mayorFacturacionDia = 0;
    int diaMayorFact = 0;
    int facturacionTotal = 0;
    int cantClientesTotal = 0;

    for (int i = 0; i < 30; i++){

        facturacionDiaria = 0;

        for (int j = 9; j < 21; j++){
            cout << "Ingrese facturacion " << endl;
            cin  >> cantFacturado;
            cout << "Ingrese cantClientes" << endl;
            cin  >> cantClientes;

            facturacionDiaria += cantFacturado;
            facturacionTotal += facturacionDiaria;
            cantClientesTotal += cantClientes;

            //A
            if (cantFacturado < menorFact){
                menorFact = cantFacturado;
                diaMenor = i;
                horaMenor = j;
            }

        }
        //B
        if (mayorFacturacionDia < facturacionDiaria){
            mayorFacturacionDia = facturacionDiaria;
            diaMayorFact = i;
        }
    }
    cout << "día y hora con menor facturación registrada " << diaMenor << horaMenor << endl;
    cout << "El día con mayor facturación diaria " << diaMayorFact << endl;
    cout << "promedio de facturación por cliente (facturación total / clientes totales)" << facturacionTotal / cantClientesTotal << endl;
}

int main () {
    int cantFacturado = 0;
    int cantClientes = 0;

    sintitulo(cantFacturado, cantClientes);

 return 0;
}


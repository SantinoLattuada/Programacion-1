/*3) Una empresa lo contrata para construir un sistema que le permita calcular las estadísticas de sus ventas mensuales.
Para ello, los empleados de la empresa ingresan por cada venta:
● Número de factura
● La fecha en formato AAAAMMDD
● Monto total facturado.

El ingreso de datos finaliza con un número de factura negativo.
Se desea obtener:

a. El día en que ocurrió la factura de mayor monto.
b. El número de factura de la factura de menor monto.
c. El promedio de facturación del mes.*/

#include <iostream>
using namespace std;

void pedirDatos(int &fecha, float &montoTotal){
    cout << "Ingrese fecha en formato AAAAMMDD " << endl;
    cin  >> fecha;
    cout << "Ingrese el monto total facturado " << endl;
    cin  >> montoTotal;
    return;
}
void facturaMayorMonto(int fecha, float montoTotal, float &facturaMayor, int &diaFacturaMayor){
    if (facturaMayor < montoTotal){
        facturaMayor = montoTotal;
        diaFacturaMayor = fecha;
    }
    
}
void facturaMenorMonto(int numFactura, float montoTotal, int &numFacturaMenor, float &facturaMenor){
    if (facturaMenor > montoTotal || facturaMenor == -1){
        facturaMenor = montoTotal;
        numFacturaMenor = numFactura;
    }
    
}
int main () {
    int numFactura;
    int fecha;
    float montoTotal;

    //A
    float facturaMayor = -1;
    int diaFacturaMayor;

    //B
    float facturaMenor = -1;
    int numFacturaMenor;

    //C
    float sumatoriaFacturas = 0;
    int cantFacturas = 0;
    float promedioFacturas;

    cout << "Ingrese numero de factura " << endl;
    cin  >> numFactura;

    while (numFactura >= 0){
        pedirDatos(fecha, montoTotal);
        
        //A
        facturaMayorMonto(fecha, montoTotal, facturaMayor, diaFacturaMayor);

        //B
        facturaMenorMonto(numFactura, montoTotal, numFacturaMenor, facturaMenor);

        //C
        sumatoriaFacturas = sumatoriaFacturas + montoTotal;
        cantFacturas++;

        cout << "Ingrese numero de factura " << endl;
        cin  >> numFactura;
    }
    
    //A
    int dia;
    int mes;
    int anio;

    dia = diaFacturaMayor % 100;
    mes = (diaFacturaMayor / 100) % 100;
    anio = diaFacturaMayor / 10000;
    cout << "El dia que ocurrio la factura de mayor monto fue: " << dia << " mes: " << mes << " anio" << anio << endl;

    //B
    cout << "El numero de factura de menor monto fue: " << numFacturaMenor << endl;

    //C
    promedioFacturas = sumatoriaFacturas / cantFacturas;
    cout << "El promedio de facturas es: " << promedioFacturas << endl;

 return 0;
}
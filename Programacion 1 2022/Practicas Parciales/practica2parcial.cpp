/*Desarrollar una aplicación que lea las ventas efectuadas por una farmacia.
Por cada venta se ingresa un número de factura, código indicador de la operación (O, E ó T) y su importe.
● Si el código es 'O, significa que corresponde a una obra social (se abona sólo en efectivo), le
corresponde un 40% de descuento.
● Si el código es E, significa que se abona en efectivo, le corresponde un 10% de descuento.
● Si el código es T, significa que se abona con tarjeta, le corresponde un 15% de recargo.
Al terminar el día se ingresa un movimiento con ‘*’ en el código.
Se pide informar:
● Total de operaciones y monto del día
● Total de operaciones y total de montos en efectivo, discriminando cuáles fueron por obra social y
cuáles no
● Total de operaciones y montos por tarjeta.
● Las 3 facturas de mayor monto.
NOTA: el total de montos debe ser el efectivamente cobrado luego de efectuar los descuentos o recargos
correspondientes.
Punto mínimos que debe contener este ejercicio:
a. Procedimiento para el ingreso de los datos.
b. Función o procedimiento que permita obtener el porcentaje de descuento
c. Función o procedimiento que permita obtener las 3 facturas de mayor monto.
d. Desarrollar el diagrama de flujo del programa principal.
/*/
#include <iostream>
using namespace std;

void ingresoDatosOperacion(string mensaje, char &a)
{
    cout << mensaje;
    cin  >> a;
    return;
}
void ingresoDatosMonto(string mensaje, float &a)
{
    cout << mensaje;
    cin  >> a;
    return;
}
void funcionDescuentos(char operacion, float &monto)
{   float total;
    if (operacion == 'O')
    {
        monto = (monto * 40) / 100;
    }
    else if (operacion == 'E')
    {
        monto = (monto * 10) / 100;
    }
    else if (operacion == 'T')
    {
        monto = monto * 1,15;
    }
    return;
}
void  facturasMayorMonto(float valorNuevo, float &valorAlto, float &valorMedio, float &valorChico)
{
    if (valorNuevo > valorAlto)
    {
        valorChico = valorMedio;
        valorMedio = valorAlto;
        valorAlto = valorNuevo;
    }
    else if (valorNuevo > valorMedio)
    {
        valorChico = valorMedio;
        valorMedio = valorNuevo;
    }
    else if (valorNuevo > valorChico)
    {
        valorChico = valorNuevo;
    }
    return;
}

int main () {
    char operacion;
    float monto;
    int totalOperaciones = 0;
    float montoDelDia = 0;
    int montosEnEfectivo = 0;
    float totalDeMontosEnEfectivo;
    int montosPorObraSocial = 0;
    int montosPorE = 0;
    int montosPorTarjeta = 0;
    float valor1 = 0;
    float valor2 = 0;
    float valor3 = 0;

    ingresoDatosOperacion("Ingrese O, E y T segun corresponda", operacion);
    ingresoDatosMonto("Indique el monto de su factura ", monto);

    while (operacion != '*')
    {
        funcionDescuentos(operacion, monto);
        totalOperaciones++;
        montoDelDia = montoDelDia + monto;

        if (operacion == 'O' || operacion == 'E')
        {
            montosEnEfectivo++;
            totalDeMontosEnEfectivo = totalDeMontosEnEfectivo + monto;
        }
        if (operacion == 'O')
        {
            montosPorObraSocial++;
        }
        else if (operacion == 'E')
        {
            montosPorE++;
        }
        else if (operacion == 'T')
        {
            montosPorTarjeta++;
        }
        
        facturasMayorMonto(monto, valor1, valor2, valor3);
        
        ingresoDatosOperacion("Ingrese O, E y T segun corresponda", operacion);
        ingresoDatosMonto("Indique el monto de su factura ", monto);
    }

    

 cout << "El total de operaciones fueron " << totalOperaciones << " y el monto del dia" << montoDelDia << endl;
 cout << "La cantidad de montos en efectivo fueron " << montosEnEfectivo << " con un total de " << totalDeMontosEnEfectivo << "De los cuales " << montosPorObraSocial << " Fueron por obra social y " << montosPorE << " Fueron sin obra social " << endl;
 cout << "El total de montos por tarjeta fueron " << montosPorTarjeta << endl;
 cout << "Las 3 facturas de mayor monto son: " << valor1 << valor2 << " y " << valor3 << endl;

 return 0;
}
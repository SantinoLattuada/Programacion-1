#include <iostream>
using namespace std;

void ingreseOperacion(string mensaje, char &operacion)
{
    cout << mensaje << endl;
    cin  >> operacion;
    return;
}
void ingreseNumeroEImporte(string mensaje, int &numFactura, string mensaje2, int &importe)
{
    cout << mensaje << endl;
    cin  >> numFactura;

    cout << mensaje2 << endl;
    cin  >> importe;
    return;
}

int main () {
    char operacion;
    int numeroFactura, importe;
 ingreseOperacion("Ingrese o, e o t segun corresponda ", operacion);
 ingreseNumeroEImporte("Ingrese el numero de factura ", numeroFactura, "Ingrese el importe", importe);

 cout << "La operacion es " << operacion << " El num de factura es: " << numeroFactura << " y el importe es " << importe;




 system("pause");
 return 0;
}
#include <iostream>
using namespace std;



int main () {

 system("cls");
 int idContenedor, pesoContenedor, puertoArribo;
 int pesoTotal;
 int contenedorMayorPeso, identificacionMasPeso;
 int puerto1 = 0, puerto2 = 0, puerto3 = 0;

 for (int i = 0; i < 4; i++)
 {
    cout << "Ingrese la identificacion del contenedor" << endl; 
    cin  >> idContenedor;

    cout << "Ingrese elPeso del contenedor" << endl;
    cin  >> pesoContenedor;
    
    cout << "Indique puerto de arribo (1,2 o 3)" << endl;
    cin  >> puertoArribo;

    pesoTotal = pesoTotal + pesoContenedor;

    if (contenedorMayorPeso < pesoContenedor)
    {
        contenedorMayorPeso = pesoContenedor;
        identificacionMasPeso = idContenedor
    }
    if (puertoArribo == 1)
    {
        puerto1++
    }
    else if (puertoArribo == 2)
    {
        puerto2++;
    }
    else if (puertoArribo == 3)
    {
        puerto3++;
    }
 }
 
 cout << "El peso total que debe trasladar el buque es: " << pesoTotal << endl;
 cout << "La identificacion del contenedor con mayor peso es: " << identificacionMasPeso << endl;
 cout << "Se deben trasladar " << puerto1 << " a puerto 1" << puerto2 << " a puerto 2" << " y " << puerto3 << " al puerto 3 " << endl;

 system("pause");
 return 0;
}
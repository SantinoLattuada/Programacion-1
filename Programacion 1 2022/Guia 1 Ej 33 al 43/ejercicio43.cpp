//a) Una función que reciba un número natural de 4 dígitos en formato de HHMM que corresponde a un tiempo
//determinado en horas y minutos, retorne ese tiempo en minutos.
#include <iostream>
using namespace std;

//Funcion recibe numero (HHMM)
//Hago que la funcion devuelva el tiempo en solo minutos

int funcionMinutos(int &a)
{
    int resultado,horas,minutos, minutosTotales;
    horas = a / 100;
    minutos = a % 100;
    minutosTotales = (horas * 60) + minutos;

    return minutosTotales;
}

void mensaje(string mensaje, int &a)
{
    cout << mensaje;
    cin  >> a;
}
int main () {
 int numero, minutos;
 //pido al usuario un numero en formato (HHMM)
 mensaje("Escriba un numero en formato (HHMM", numero);

 //Armo una funcion
 minutos = funcionMinutos(numero);
 cout << "El retorno en minutos es: " << minutos << endl;


 system("pause");
 return 0;
}
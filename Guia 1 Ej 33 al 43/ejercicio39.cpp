//Desarrollar un procedimiento tal que dada una hora (HHMMSS) y un tiempo también en formato HHMMSS
//devuelva la nueva hora que surge de sumar el tiempo a la hora inicial, considere también si cambió el día.
#include <iostream>
using namespace std;

//Pido una hora (HHMMSS)

//Guardo la hora

//Pido un tiempo (HHMMSS)

//Guardo el tiempo

//Hago una funcion que sume la hora + el tiempo

//Devuelvo la nueva hora

//Creo condicion para ver si cambio el dia o no

void pedirHora(string mensaje, int &a)
{
    cout << mensaje;
    cin  >> a;
    return;
}

int horaMasTiempo(int &a, int &b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}

int main () {
 int hora, tiempo, horatotal;

 pedirHora("Ingrese una hora (HHMMSS) ",hora);
 pedirHora("Ingrese un tiempo (HHMMSS) ",tiempo);

 horatotal = horaMasTiempo(hora, tiempo);

 cout << "La nueva hora es: " << horatotal << endl;

 if (horatotal > 235959)
 {
    cout << "Cambio el dia" << endl;
 }
 else cout << "No cambio el dia" << endl;




 system("pause"); 
 return 0;
}
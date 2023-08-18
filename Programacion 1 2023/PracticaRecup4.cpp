

#include <iostream>
using namespace std;

int calcularDuracion(int hora1, int hora2){
    return hora2 - hora1;
}
int calcularDia(int fecha){
    int dia;
    dia = fecha % 100; 
    return dia;
}
int main () {
    int fecha;
    int horaInicio; //HHMM
    int horaFin;    //HHMM
    float monto;

    //A
    float montoMayor = -1;
    int fechaMayorMonto;

    //B
    int viajeMasLargo = -1;
    float recaudacionViajeMasLargo;

    //C
    float viajeMayorMonto = -1;
    int horaInicioMayorMonto;

    cout << "Ingrese la fecha del viaje AAAAMMDD " << endl;
    cin  >> fecha;

    while (fecha != 0){
        cout << "Ingrese Hora de inicio " << endl;
        cin  >> horaInicio;
        cout << "Ingrese Hora de Fin " << endl;
        cin  >> horaFin;
        cout << "Ingrese Monto " << endl;
        cin  >> monto;

        //A
        if (montoMayor < monto){
            montoMayor = monto;
            fechaMayorMonto = fecha;
        }
        //B
        int duracionViaje;
        duracionViaje = calcularDuracion(horaInicio, horaFin);
        if (viajeMasLargo < duracionViaje){
            viajeMasLargo = duracionViaje;
            recaudacionViajeMasLargo = monto;
        }
        //C
        if (viajeMayorMonto < monto){
            viajeMayorMonto = monto;
            horaInicioMayorMonto = horaInicio;
        }
        cout << "Ingrese la fecha del viaje AAAAMMDD " << endl;
        cin  >> fecha;
    }
    //A 
    cout << "El dia que mas se recaudo fue el dia: " << calcularDia(fechaMayorMonto) << endl;
    //B
    cout << "la duracion del viaje mas largo fue: " << viajeMasLargo << " y la recaudacion: " << recaudacionViajeMasLargo << endl;
    //C
    cout << "La hora a la que se inicio el viaje con mayor monto fue: " << horaInicioMayorMonto << endl;

 return 0;
}
#include <iostream>
using namespace std;

struct Estaciones{
    int idEstacion;
    string nombreEstacion;
    int cantMaxEst;
    int cantBicDisp;
};
struct Usuarios{
    int dni;
    string ApellidoNombre;
};
struct Prestamos{
    int dni;
    int idEstacionRet;
    int idEstacionDev;
    int tiempoUso;
};
void procesarPrestamos(Estaciones estacion[], int cantEstaciones, Usuarios usuario[], int cantUsuarios, Prestamos prestamo[], int cantPrestamos){
    int i = 0;
    int dni = prestamo[i].dni;
    int retiro[], devoluciones[];

    while (i < cantPrestamos){
        
        while (i < cantPrestamos && dni = prestamo[i].dni){
            //Actualizamos las estaciones
            estacion[prestamo[i].idEstacionRet - 1].cantBicDisp--;
            estacion[prestamo[i].idEstacionDev - 1].cantBicDisp++;

            retiro[prestamo[i].idEstacionRet - 1]++;
            devoluciones[prestamo[i].idEstacionDev - 1]++;
            //Averiguamos infractores si el tiempo fue > 60
            int exceso = 0;
            if (prestamo[i].tiempoUso > 60){
                exceso = prestamo[i].tiempoUso - 60;
                int posicionUsuario = busquedaBinaria(prestamo, cantPrestamos, dni);
            }

            i++
        }
    }
    for (int i = 0; i < cantEstaciones; i++){
        if (retiro[i] > devoluciones[i]){
            cout << estacion[i].idEstacion << estacion[i].nombreEstacion << endl;
        }
        
    }
    

}

int main () {
 
 return 0;
}

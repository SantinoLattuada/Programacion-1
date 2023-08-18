/*Ej. 13: Una empresa carga los datos del presentismo de sus empleados ingresando por cada empleado:
Legajo (entero de 8 dígitos) y por cada día del mes un 1 si se presentó a trabajar o un 0 si faltó. Para
simplificar, todos los empleados trabajan 31 días. Realizar un programa que permita:
a- Cargar los datos de N empleados, siendo N también informado por el usuario
b- Informar los legajos de los tres empleados con mejor presentismo
c- Informar el número del día con mayor ausentismo.*/

#include <iostream>
using namespace std;

struct Presentismo{
    int legajo;
    int presente[31]; //1 P 2 A
};
void llenar(Presentismo vec[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingrese legajo: " << endl;
        cin  >> vec[i].legajo;
        for (int j = 0; j < 31; j++){
            cout << "Asistió o no " << endl;
            cin  >> vec[i].presente[j];
        }
        
    }
    return;
}
void mejorPresentismo(Presentismo vec[], int n){
    int contador;
    int lPrimerPresentismo;
    int lSegundoPresentismo;
    int lTercerPresentismo;
    int contadorPrimero = 0;
    int contadorSegundo = 0;
    int contadorTercero = 0;

    for (int i = 0; i < n; i++){
        contador = 0;
        for (int j = 0; j < 31; j++){
            if (vec[i].presente[j] == 1){
                contador++;
            }
            
        }
        if (i == 0){
            lPrimerPresentismo = vec[i].legajo;
            lSegundoPresentismo = vec[i].legajo;
            lTercerPresentismo = vec[i].legajo;
            contadorPrimero = contador;
            contadorSegundo = contador;
            contadorTercero = contador;
        }
        else{
            if (contadorPrimero < contador){
                contadorTercero = contadorSegundo;
                lTercerPresentismo = lSegundoPresentismo;
                contadorSegundo = contadorPrimero;
                lSegundoPresentismo = lPrimerPresentismo;
                contadorPrimero = contador;
                lPrimerPresentismo = vec[i].legajo;
            }
            else if (contadorSegundo < contador){
                contadorTercero = contadorSegundo;
                lTercerPresentismo = lSegundoPresentismo;
                contadorSegundo = contador;
                lSegundoPresentismo = vec[i].legajo;
            }
            else if (contadorTercero < contador){
                contadorTercero = contador;
                lTercerPresentismo = vec[i].legajo;
            }
            
        }
        
    }
    cout << "Primero \t Segundo \t Tercero " << endl;
    cout << lPrimerPresentismo << "\t" << lSegundoPresentismo << "\t" << lTercerPresentismo << endl;

    return;
}
int main () {
    int n;
    cout << "Ingrese cant de empleados a analizar " << endl;
    cin  >> n;

    //A
    Presentismo vec[n];
    llenar(vec, n);

    //B
    mejorPresentismo(vec, n);

 return 0;
}
#include <iostream>
using namespace std;
struct Insomnes{
    int nro;
    int horasTotales;
    int horasDeCorrido;
};

void cargarPacientes(int pacientes[][9], int cantPacientes){
    int vec[9] = {22, 23, 00 , 01, 02, 03, 04, 05, 06};

    for (int j = 0; j < 9; j++){

        for (int i = 0; i < cantPacientes; i++){
            cout << "Indique con un 1 si el paciente esta durmiendo a la hora: " << calcularHora(j) << endl;
            cin  >> pacientes[j][i];
        }
        
    }
    
}
int calcularHora(int hora){
    int hora = hora + 22;
    if (hora > 23){
        hora = hora - 24;
    }
    return hora;
}
void dormirDeCorrido(int pacientes[][9], int cantPacientes){
    int contadorInsomnes = 0;
    for (int i = 0; i < cantPacientes; i++){
        int contadorHoraSeguidas = 0;
        bool durmiendoDeCorrido = false;
        int hsTotales = 0;
        for (int j = 0; j < 9; j++){
            if (pacientes[i][j] == 1){
                contadorHoraSeguidas++;
                hsTotales +=contadorHoraSeguidas;
            }
            else{
                contadorHoraSeguidas = 0;
            }
            if (contadorHoraSeguidas >= 4){
                durmiendoDeCorrido = true;
            }
        }
        Insomnes insomne[contadorInsomnes];
        if (durmiendoDeCorrido == false){
            insomne[contadorInsomnes].nro = i;
            insomne[contadorInsomnes].horasTotales = hsTotales;
            insomne[contadorInsomnes].horasDeCorrido = contadorHoraSeguidas;
        }
    }
}
int horasTotalesDormidas(int pacientes[][9], int cantPacientes){
    int totalHDormidas = 0;
    for (int i = 0; i < 9; i++){
        if (pacientes[i] == 1){
            totalHDormidas++;
        }
        
    }
    return totalHDormidas;
}
void horaMasDespiertos(int pacientes[][9], int cantPacientes){
    int masPacientesDespiertos = 99;
    int horaMasDespiertos;
    for (int j = 0; j < 9; j++){
        int dormidos = 0;
        for (int i = 0; i < cantPacientes; i++){
            dormidos += pacientes[i][j];
        }
        if (dormidos < masPacientesDespiertos){
            masPacientesDespiertos = dormidos;
            horaMasDespiertos = j;
        }
        
    }
    cout << "A la hora que mas pacientes estaban despiertos es: " << calcularHora(horaMasDespiertos) << ":00 hrs" <<endl;

    return;
}
int main () {
    int pacientes[5][9];
    cargarPacientes(pacientes, 5);

 return 0;
}
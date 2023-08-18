#include <iostream>
using namespace std;

struct Fichada {
    int legajo;
    int fecha; //AAAAMMDD
    int horaEntrada; //HHMM
    int horaSalida; // HHMM
};

struct Registro {
    int fecha; //AAAAMMDD
    int legajo;
    int hora; //HHMM
    char evento; // 'E' o 'S'
};


Fichada obtenerFichada(Registro fichadaEmpleado, Registro otraFichadaEmpleado) {
    Fichada fichada;
    fichada.fecha = fichadaEmpleado.fecha; // La fecha es la de cualquiera de los dos registros
    fichada.legajo = fichadaEmpleado.legajo;
    if(fichadaEmpleado.evento == 'E') {
        fichada.horaEntrada = fichadaEmpleado.hora;
        fichada.horaSalida = otraFichadaEmpleado.hora;
        
    } else {
        fichada.horaEntrada = otraFichadaEmpleado.hora;
        fichada.horaSalida = fichadaEmpleado.hora;
    }
    return fichada;
}
void actualizarFichadas(Fichada fichadasMes[], int cantFichadasMes, Registro fichadaDiaria[], int cantFichadaDiaria, 
 Fichada fichadaActualizada[], int &cantFichadasAct) {
    cantFichadasAct = 0;

    // Ordenamos las fichadas diarias por legajo ya que estan originalmente ordenadas por hora
    ordenarPorLegajo(fichadaDiaria, cantFichadaDiaria);
    int i = 0, j = 0;

    // Luego de ordenar las fichadas diarias hacemos un apareo entre ambos vectores
    while(i < cantFichadasMes && j < (cantFichadaDiaria - 1)) {
        if(fichadasMes[i].legajo <= fichadaDiaria[j].legajo) {
            // Tomo del vector de fichadas mes
            fichadaActualizada[cantFichadasAct] = fichadasMes[i];
            i++;
        } else {
            // Tomo de la fichada diaria, pero tengo que armar el nuevo registro
            // para hacerlo sabemos que al estar ordenado por legajo la entrada y salida
            // son consecutivas es decir j y j + 1 son del mismo empleado, hacemos una funcion
            // que se encargue de la logica
            fichadaActualizada[cantFichadasAct] = obtenerFichada(fichadaDiaria[j], fichadaDiaria[j + 1]);
            // Incremento el contador en 2 porque tome dos registros
            j = j + 2;
        }
        cantFichadasAct++;
    }

    while(i < cantFichadasMes) {
        fichadaActualizada[cantFichadasAct] = fichadasMes[i];
        cantFichadasAct++;
        i++;
    }

    while(j < (cantFichadaDiaria - 1)) {
        fichadaActualizada[cantFichadasAct] = obtenerFichada(fichadaDiaria[j], fichadaDiaria[j + 1]);
        cantFichadasAct++;
        j = j + 2;
    }
    return;
}


int main () {
 
 
 return 0;
}
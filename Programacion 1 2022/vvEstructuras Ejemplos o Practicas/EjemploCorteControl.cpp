#include <iostream>
using namespace std;

struct Presentismo {
int legajo;
int fecha;
bool presente;
};

void listarPresentismo(Presentismo vec[], int n) {
// Inicializamos contadores, acumuladores, etc. generales
int i = 0;
int ausentes = 0;
int key;

// El primer ciclo es el que recorre el lote completo
while(i < n) {

// Guardo el valor de la clave o agrupador
key = vec[i].legajo;

// Inicializo contadores, acumuladores, etc cada sublote
ausentes = 0;

// El segundo ciclo se mantiene por el sublote, mientras sea el mismo
// legajo y aun no se haya acabado el vector
while(i < n && key == vec[i].legajo) {

// Cuento si es un registro de ausente
if (vec[i].presente) {
ausentes++;
}

i++; // Avanza a la siguiente posicion
}

// Mostramos resultados por cada sublote (legajo)

cout << “Legajo: ” << key << “ faltas: ” << ausentes << endl;
}
// Mostramos resultados generales
}

int main () {
 
 return 0;
}
/*Ej. 2 Dados los siguientes dibujos que corresponden a distintos tipos de registros realice su declaración en
C++, y especifique la nomenclatura para acceder al registro y cada uno de sus campos.*/

#include <iostream>
using namespace std;

//Estructuras punto A
struct Alumno{
    string nombre;
    Fecha fechaNacimiento;
};
struct Fecha{
    int dia;
    int mes;
    int anio;
};

//Estructuras punto B
struct ApellidoNombre{
    string apellido;
    string nombre;
};
struct Notas{
    int nota1;
    int nota2;
    int nota3;
};
struct Alumno{
    int legajo;
    ApellidoNombre apellidoNombre;
    Notas calificaciones;
};
void leer(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
};
int main () {
    //Declaro y pido la cantidad de Alumnos a informar
    int cantidad;
    leer("Ingrese la cantidad de alumnos ", cantidad);

    //Pido informacion de los alumnos
    




 return 0;
}
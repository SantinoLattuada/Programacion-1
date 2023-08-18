/*Ej. 1: Dado el siguiente dibujo de un registro, especifique la nomenclatura para acceder al registro y cada uno
de sus campos, y las operaciones que se pueden realizar a nivel registro y a nivel campos. Defina otro registro
del mismo tipo de datos.*/

#include <iostream>
using namespace std;

struct Alumno{
    int legajo;
    string apellidoNombre;
    int nota;
};
void leer(string msg, int &a){
    cout << msg << endl;
    cin  >> a;
    return;
};
int main () {
    int cantAlumnos;
    cout << "Ingrese la cantidad de alumnos " << endl;
    cin  >> cantAlumnos;

    Alumno misAlumnos[cantAlumnos];

    for (int i = 0; i < cantAlumnos; i++){
        cout << "Ingrese el numero de legajo " << endl;
        cin  >> misAlumnos[i].legajo;

        cout << "Ingrese el apellido y nombre del alumno " << endl;
        cin  >> misAlumnos[i].apellidoNombre;

        cout << "Ingrese la nota del alumno " << endl;
        cin  >> misAlumnos[i].nota;
    }
    cout << endl;

    //Imprimo resultados
    cout << "Legajo \t ApellidoNombre \t Nota " << endl;
    for (int i = 0; i < cantAlumnos; i++){
        cout << misAlumnos[i].legajo << "\t" << misAlumnos[i].apellidoNombre << "\t\t" << misAlumnos[i].nota << endl;
    }
    


 system("pause");
 return 0;
}
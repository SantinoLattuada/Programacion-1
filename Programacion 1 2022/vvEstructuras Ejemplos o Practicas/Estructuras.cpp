/*Ejercicio Estructuras 1. 
Realizar un programa que almacene la cantidad de 10 alumnos.
Cada alumno deberá contener un número de documento, un nombre y pertenecer a una comisión. 
Cada comisión tendrá un nombre, y un código de referencia.
Se solicita cargar primeramente 3 comisiones, y luego cargar 10 alumnos. 
Al cargar los alumnos se debe poder elegir entre las comisiones cargadas primeramente.
Primero solicitar las 3 comisiones, y luego solicitar los datos de los 10 alumnos.
Al finalizar, mostrar los datos completos de cada alumno, con los datos de su comisión.*/

#include <iostream>
using namespace std;

struct comision{
    string nombre;
    int codigo;
};
struct alumno{
    int documento;
    string nombre;
    comision comision;
    int codigoComision
};
string nombreComision(comision listaComisiones[], int cantComisiones, int codigo){
    for (int i = 0; i < cantComisiones; i++){
        if (codigo == listaComisiones[i].codigo){
            return listaComisiones[i].nombre;
        }
        
    }
    return "Comision inexistente";
}
int main () {
    comision misComisiones[3];
    alumno misAlumnos[4];

    for (int i = 0; i < 3; i++){
        cout << "Ingrese el nombre de la comision numero " << i+1 << ": ";
        cin  >> misComisiones[i].nombre;

        cout << "Ingrese el codigo de la comision numero " << i+1 << ": ";
        cin  >> misComisiones[i].codigo;
    }
    for (int i = 0; i < 4; i++){
        cout << "Ingrese el documento del alumno ";
        cin  >> misAlumnos[i].documento;

        cout << "Ingrese el nombre del alumno ";
        cin  >> misAlumnos[i].nombre;

        cout << "Ingrese el numero de comision: ";
        for (int j = 0; i < 3; j++){
            cout << "- Comision " << misComisiones[j].codigo << endl;
        }
        cout << endl;
        cin  >> misAlumnos[i].comision;

        misAlumnos[i].comision.nombre = nombreComision(misComisiones,3, misAlumnos[i].comision.codigo);
    }

    //Muestro todos los alumnos
    for (int i = 0; i < 4; i++){
        cout << "Alumno " << i+1 << " :\n";
        cout << "Nombre: "<< misAlumnos[i].nombre << endl;
        cout << "Documento: "<< misAlumnos[i].documento << endl;
        cout << "Comision-Nombre: "<< misAlumnos[i].comision.nombre << endl;
        cout << "Comision-Codigo: "<< misAlumnos[i].comision.codigo << endl;
    }
    
 return 0;
}
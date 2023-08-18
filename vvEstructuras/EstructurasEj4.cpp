/*Ej. 4: Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo) a examen en el mes de
mayo. Cada boleta tiene los siguientes datos: apellido, número de legajo, código de materia, día, mes y año del
examen. Los datos finalizan con un legajo igual a 0.
Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un vector de
inscripción de alumnos a exámenes finales según el siguiente diseño:
a.1 Nro. de legajo (8 dígitos) a.2 Código de materia (6 dígitos)
a.3 Día del examen (1..31) a.4 Mes del examen (1..12)
a.5 Año del examen (4 dígitos) a.6 Apellido (25 caract)*/

#include <iostream>
using namespace std;

void leer(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void leerS(string mensaje, string &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
int main () {
    int nLegajo;
    int cMateria;
    int dExamen;
    int mExamen;
    int aExamen;
    string apellido;

    leer("Ingrese numero de legajo (8 digitos) ", nLegajo);
    while (nLegajo != 0){
        leer("Ingrese el codigo de la materia (6 digitos) ", cMateria);
        leer("Ingrese el dia del examen ", dExamen);
        leer("Ingrese el mes del examen ", mExamen);
        leer("Ingrese el año del examen (4 digitos) ", aExamen);
        leerS("Ingrese el apellido del alumno (25 caracteres) ", apellido);





        leer("Ingrese numero de legajo (8 digitos) ", nLegajo);
    }
    



 return 0;
}
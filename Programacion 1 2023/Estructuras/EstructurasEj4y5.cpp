/*Ej. 4: Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo) a examen en el mes de
mayo. Cada boleta tiene los siguientes datos: apellido, número de legajo, código de materia, día, mes y año del
examen. Los datos finalizan con un legajo igual a 0.
Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un vector de
inscripción de alumnos a exámenes finales según el siguiente diseño:
a.1 Nro. de legajo (8 dígitos) a.2 Código de materia (6 dígitos)
a.3 Día del examen (1..31) a.4 Mes del examen (1..12)
a.5 Año del examen (4 dígitos) a.6 Apellido (25 caract) 

Ej. 5: Desarrolle un procedimiento que dado un código de materia y el vector generado en el ejercicio 4,
seleccione todos los registros que se anotaron para rendir esa materia y los imprima con el diseño

Legajo   | Nombre y Apellido    | Fecha    |Código de materia
99999999 | xxxxxxxxxxxxxxxxxxxx | dd/mm/aa |999999
99999999 | xxxxxxxxxxxxxxxxxxxx | dd/mm/aa |999999

*/

#include <iostream>
using namespace std;

struct InscripcionFinales{
    int nLegajo;
    int cMateria;
    int diaExamen;
    int mesExamen;
    int anioExamen;  
    string apellido;
};
void llenar(InscripcionFinales vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese el numero de legajo " << endl;
        cin  >> vec[i].nLegajo;

        cout << "Ingrese el codigo de materia " << endl;
        cin  >> vec[i].cMateria;

        cout << "Ingrese el dia del examen " << endl;
        cin  >> vec[i].diaExamen;

        cout << "Ingrese el mes del examen " << endl;
        cin  >> vec[i].mesExamen;

        cout << "Ingrese el anio del examen " << endl;
        cin  >> vec[i].anioExamen;

        cout << "Ingrese el apellido del alumno" << endl;
        cin  >> vec[i].apellido;
    }
}
void imprimir(InscripcionFinales vec[]){
    int i = 0;
    cout << "Legajo \t | Nombre y Apellido \t | Fecha \t | Codigo de materia" << endl;

    while(vec[i].nLegajo >= 0){
        cout << vec[i].nLegajo << "\t" << vec[i].apellido << "\t" <<vec[i].diaExamen << "/" << vec[i].mesExamen << "/" << vec[i].anioExamen << "\t" <<vec[i].cMateria << endl;
        i++; 
    }
    
}
int main () {
    int cant;

    cout << "Ingrese cantidad de alumnos " << endl;
    cin >> cant;

    InscripcionFinales vec[cant];

    llenar(vec, cant);
    imprimir(vec);

 return 0;
}
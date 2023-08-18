/* Un establecimiento educativo que se encuentra lanzando una serie de cursos, 
requiere de una aplicación que le permita inscribir a los participantes.

Para ello cuenta con una cantidad M de cursos a brindar a la comunidad.

Desarrollar una aplicación que permita:
* Registrar una cantidad M de cursos. El código de curso, deberá asignarse de manera automática y debe ser un número entero en el rango [1, M].
* Registrar una cantidad de N alumnos/as. Un alumno/a sólo puede inscribirse en un curso.
* Imprimir los datos de un alumno/a y el curso al que se inscribió. Para obtener los datos, se ingresará el dni de la persona.

Restricciones:
* El conjunto de cursos no puede ser recorrido secuencialmente.
* El conjunto de alumnos/as sólo puede ser recorrido secuencialmente 1 vez.*/

#include <iostream>
using namespace std;

struct ST_CURSO{
    string nombre;
    int cantidadDeHoras;
};
struct ST_ALUMNO {
    int dni;
    string nombre;
    int edad;
    string email;
    string telefono;
    int curso; // 1,2,...M
};
void pedirDatos(string mensaje, int &dato){
    cout << mensaje << endl;
    cin  >> dato;
    return;
}
void llenarCurso(ST_CURSO curso[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese el nombre del curso " << i << endl;
        cin  >> curso[i].nombre;
        cout << "Ingrese la cantidad de horas del curso " << i << endl;
        cin  >> curso[i].cantidadDeHoras;
    }
    return;
}
void llenarAlumno(ST_ALUMNO alumno[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese el dni del alumno " << i << endl;
        cin  >> alumno[i].dni;

        cout << "Ingrese el nombre del alumno " << i << endl;
        cin  >> alumno[i].nombre;

        cout << "Ingrese la edad del alumno " << i << endl;
        cin  >> alumno[i].edad;

        cout << "Ingrese el email del alumno " << i << endl;
        cin  >> alumno[i].email;

        cout << "Ingrese el telefono del alumno " << i << endl;
        cin  >> alumno[i].telefono;

        cout << "Ingrese el numero de curso del alumno " << i << endl;
        cin  >> alumno[i].curso;
    }
    return;
}
int main () {
    //Declaro y pido cantidad de cursos
    int cantidadCursos;
    pedirDatos("Ingrese la cantidad de cursos ", cantidadCursos);
    ST_CURSO cursos[cantidadCursos];

    //Lleno el vector de curso
    llenarCurso(cursos, cantidadCursos);

    //Declaro y pido cantidad de alumnos
    int cantidadAlumnos;
    pedirDatos("Ingrese la cantidad de alumnos ", cantidadAlumnos);    
    ST_ALUMNO alumno[cantidadAlumnos];
    
    //Lleno el vector de alumnos
    llenarAlumno(alumno, cantidadAlumnos);

 return 0;
}
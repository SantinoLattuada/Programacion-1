#include <iostream>
using namespace std;

struct Alumno{
    string nombre;
    int edad;
    int cantAprobadas;
};

void leer(string msg, int &val){
    cout << msg << endl;
    cin  >> val;
    return;
}

int main () {
    
    Alumno alumno;
    alumno.nombre = "Pepe";
    alumno.edad = 20;
    alumno.cantAprobadas = 0;

    Alumno alumno2;

    leer("Nombre: ",alumno.nombre);
    leer("Edad: ", alumno.edad);
    leer("Aprobadas: ", alumno.cantAprobadas);
    
    leer("Nombre: ",alumno2.nombre);
    leer("Edad: ", alumno2.edad);
    leer("Aprobadas: ", alumno2.cantAprobadas);

    cout << "Alumno: " << alumno.nombre << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Aprobadas: " << alumno.cantAprobadas << endl;

    cout << "Alumno: " << alumno2.nombre << endl;
    cout << "Edad: " << alumno2.edad << endl;
    cout << "Aprobadas: " << alumno2.cantAprobadas << endl;

 system("pause");
 return 0;
}
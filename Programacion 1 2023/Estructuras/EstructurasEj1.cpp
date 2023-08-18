/*Ej. 1: Dado el siguiente dibujo de un registro, especifique la nomenclatura para acceder al registro y cada uno
de sus campos, y las operaciones que se pueden realizar a nivel registro y a nivel campos. Defina otro registro
del mismo tipo de datos.*/

#include <iostream>
using namespace std;

struct datos{
    int legajo;
    string apellidonombre;
    float nota;
};
void llenar(datos vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese numero de legajo " << endl;
        cin  >> vec[i].legajo;

        cout << "Ingrese apellido y nombre " << endl;
        cin  >> vec[i].apellidonombre;

        cout << "Ingrese nota " << endl;
        cin  >> vec[i].nota;
    }
    
};
void imprimir(datos vec[], int cant){
    cout << "Legajo \t ApellidoNombre \t Nota " << endl;
    for (int i = 0; i < cant; i++){
        cout << vec[i].legajo << "\t" << vec[i].apellidonombre << "\t" << vec[i].nota << endl;
    }
    
};
int main () {
 
    int cant;
    cout << "Defina la cantidad de datos a ingresar " << endl;
    cin  >> cant;

    datos vec[cant];


    llenar(vec, cant);

    imprimir(vec, cant);


 return 0;
}
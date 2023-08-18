/*Ej. 9: Se dispone un vector de inscripción de alumnos a exámenes finales MAESTROFINALES y otro con
las inscripciones del día de hoy DIAFINALES, ambos ordenados ascendente por código de materia y con el
siguiente diseño:
Nro de legajo (8 dígitos) Código de materia (6 dígitos) ApellidoNombre(cadena)
Se pide desarrollar un procedimiento que complete un nuevo vector de inscripciones a finales
FINALESACT resultante del apareo de los dos vectores anteriores, con el mismo orden y diseño.*/

#include <iostream>
using namespace std;

struct Inscripcion{
    int codMateria;
    int codLegajo;
    string nombreApellido;
};
void apareo(Inscripcion vec1[], int n, Inscripcion vec2[], int m, Inscripcion vec3[], int &k){
    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if (vec1[i].codMateria < vec2[j].codMateria){
            vec3[k].codMateria = vec1[i].codMateria;
            vec3[k].codLegajo = vec1[i].codLegajo;
            vec3[k].nombreApellido = vec1[i].nombreApellido;
            i++;
        }
        else{
            vec3[k].codMateria = vec2[j].codMateria;
            vec3[k].codLegajo = vec2[j].codLegajo;
            vec3[k].nombreApellido = vec2[j].nombreApellido;
            j++;
        }
        k++;
    }
    
    while(i < n){
        vec3[k].codMateria = vec1[i].codMateria;
        vec3[k].codLegajo = vec1[i].codLegajo;
        vec3[k].nombreApellido = vec1[i].nombreApellido;
        i++;
        k++;
    }
    
    while(j < m){
        vec3[k].codMateria = vec2[j].codMateria;
        vec3[k].codLegajo = vec2[j].codLegajo;
        vec3[k].nombreApellido = vec2[j].nombreApellido;
        j++;
        k++;
    }
    return;
}
void imprimirVector(Inscripcion vec[], int k){
    cout << "LISTA " << endl;
    cout << "Nro de legajo (8 digitos)\t\t Codigo de materia (6 digitos)\t\t ApellidoNombre(cadena)" << endl;
    for (int i = 0; i < k; i++){
        cout << vec[i].codLegajo << "\t\t" << vec[i].codMateria << "\t\t" << vec[i].nombreApellido << endl;
    }
    return;
}
void llenar(Inscripcion vec[], int n, Inscripcion vec2[], int m){
    cout << "Datos del local" << endl;
    for (int i = 0; i < n; i++){
        cout << "Ingrese el nro de legajo " << endl;
        cin  >> vec[i].codLegajo;
        cout << "Ingrese el codigo de materia " << endl;
        cin  >> vec[i].codMateria;
        cout << "Ingrese el nombre y apellido " << endl;
        cin  >> vec[i].nombreApellido;
    }
    for (int i = 0; i < m; i++){
        cout << "Ingrese el nro de legajo " << endl;
        cin  >> vec2[i].codLegajo;
        cout << "Ingrese el codigo de materia " << endl;
        cin  >> vec2[i].codMateria;
        cout << "Ingrese el nombre y apellido " << endl;
        cin  >> vec2[i].nombreApellido;
    }
    
    return;
}
int main () {
    
    int n = 2;
    int m = 3;
    int MAX = n + m;
    Inscripcion finalesAct[MAX];
    
    Inscripcion maestroFinales[n];
    Inscripcion diaFinales[m];

    int k = 0;
    llenar(maestroFinales, n, diaFinales, m);

    apareo(maestroFinales, n, diaFinales, m, finalesAct, k);

    imprimirVector(finalesAct, k);
 return 0;
}
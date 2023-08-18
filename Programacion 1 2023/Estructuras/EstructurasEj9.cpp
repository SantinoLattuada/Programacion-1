/*Ej. 9: Se dispone un vector de inscripción de alumnos a exámenes finales MAESTROFINALES y otro con
las inscripciones del día de hoy DIAFINALES, ambos ordenados ascendente por código de materia y con el
siguiente diseño:
Nro de legajo (8 dígitos) Código de materia (6 dígitos) ApellidoNombre(cadena)

Se pide desarrollar un procedimiento que complete un nuevo vector de inscripciones a finales
FINALESACT resultante del apareo de los dos vectores anteriores, con el mismo orden y diseño.*/

#include <iostream>
using namespace std;

struct MaestroFinales{
    int legajo;
    int codigoMateria;
    string apellidoNombre;
};
struct DiaFinales{
    int nLegajo;
    int cMateria;
    string aNombre;   
};
struct FinalesAct{
    int numLegajo;
    int codMateria;
    string ApellNombre;
};
void preguntas(int &finales, int &finalesHoy){
    cout << "Ingrese la cant de alumnos que van a finales " << endl;
    cin  >>  finales; 
    cout << "Ingrese la cant de inscripciones a finales de hoy" << endl;
    cin  >>  finalesHoy;
}
void apareo(MaestroFinales vec1[], int finales, DiaFinales vec2[], int finalesHoy, FinalesAct vec3[], int sumaFinales){
    int i = 0;
    int j = 0;

    int k = 0;
    while(i < finales && j < finalesHoy){
        if (vec1[i].codigoMateria < vec2[j].cMateria){
            vec3[k].codMateria = vec1[i].codigoMateria;
            vec3[k].numLegajo = vec1[i].legajo;
            vec3[k].ApellNombre = vec1[i].apellidoNombre;
            i++;
        }
        else{
            vec3[k].codMateria = vec2[j].cMateria;
            vec3[k].numLegajo = vec2[j].nLegajo;
            vec3[k].ApellNombre = vec2[j].aNombre;
            j++;
        }
        k++;
    }
    
    while(i < finales){
        vec3[k].codMateria = vec1[i].codigoMateria;
        vec3[k].numLegajo = vec1[i].legajo;
        vec3[k].ApellNombre = vec1[i].apellidoNombre;
        i++;
        k++;
    }
    
    while(j < finalesHoy){
        vec3[k].codMateria = vec2[j].cMateria;
        vec3[k].numLegajo = vec2[j].nLegajo;
        vec3[k].ApellNombre = vec2[j].aNombre;
        j++;
        k++;
    }
    return;
}
void imprimirVector(FinalesAct vector[], int sumaFinales){
    cout << "Numero de legajo \t Codigo de materia \t Apellido y nombre " << endl;
    for (int i = 0; i < sumaFinales; i++){
        cout << vector[i].numLegajo << "\t" << vector[i].codMateria << "\t" << vector[i].ApellNombre << endl;
    }
    
}
int main () {
    int finales;
    int finalesHoy;

    preguntas(finales, finalesHoy);
    MaestroFinales vec[finales];
    DiaFinales vector[finalesHoy];

    int sumaFinales;
    sumaFinales = finales + finalesHoy;
    FinalesAct finalesActualizado[sumaFinales];
    apareo(vec, finales, vector, finalesHoy, finalesActualizado, sumaFinales);

    imprimirVector(finalesActualizado, sumaFinales);
 return 0;
}
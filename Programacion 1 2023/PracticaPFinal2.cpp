#include <iostream>
using namespace std;

struct Cursada{
    int legajo;
    float nota1;
    float nota2;
    int notaRecup;
};
struct Alumnos{
    int legajo;
    string nombre;
    string apellido;
    int dni;
};

bool aproboCursada(Cursada vec[], int cant){
    if ((nota1 >= 6 && nota2 >= 6) || (nota1 < 6 && nota2 >= 6 && notaRecup >= 6) || (nota1 >=6 && nota2 < 6 && notaRecup >= 6) || nota1 < 6 && nota2 < 6 && notaRecup >= 6){
        return true;
    }
    else{
        return false;
    }
    return;
}
void alumnosAprobados(Cursada programacion[], int cantProg, Cursada laboratorio[], int cantLabo, Alumnos alumno[], int cantAlumnos, Alumnos alumnosAprobados){
    int i, j = 0;

    int k = 0;
    while (i < cantProg && j < cantLabo){
        if (programacion[i].legajo == laboratorio[j].legajo){
            bool prog1 = aproboCursada(programacion, i);
            bool labo1 = aproboCursada(laboratorio, j);
            if (prog1 == true && labo1 == true){
                int legajo = programacion[i].legajo;
                int valor = busquedaBinaria(alumno, cantAlumnos, legajo);
                alumnosAprobados[k] = alumnos[valor];
                k++;
            }
            i++;
            j++;
        }
        else if (programacion[i].legajo < laboratorio[j].legajo){
            i++;
        }
        else{
            j++;
        }
    }
    
}
int main () {
    int cantProg, cantLabo;
    cout << "Ingrese cantidad de alumnos de programacion " << endl;
    cin  >> cantProg;
    Cursada programacion[cantProg];

    cout << "Ingrese cantidad de alumnos de laboratorio " << endl;
    cin  >> cantLabo;
    Cursada laboratorio[cantLabo];

    //Verificamos quienes aprobaron la cursada de programacion
    int i = 0;
    bool aproboProg;
    for (i = 0; i < cantProg; i++){
        aproboProg = aproboCursada(programacion, cantProg);
    }
    //Lo mismo para Laboratorio
    bool aproboLabo;
    for (i = 0; i < cantLabo; i++){
        aproboLabo = aproboCursada(laboratorio, cantLabo);
    }
    int cantAlumnos;
    Alumnos alumno[cantAlumnos];
    Alumnos alumnosAprobadosg[cantAlumnos];
    alumnosAprobados(programacion, cantProg, laboratorio, cantLabo, alumno, cantAlumnos, alumnosAprobadosg)

 return 0;
}
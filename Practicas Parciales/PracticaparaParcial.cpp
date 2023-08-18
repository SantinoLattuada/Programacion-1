/* Un establecimiento educativo que se encuentra lanzando una serie de cursos,
requiere de una aplicación que le permita inscribir a los participantes.

Para ello cuenta con una cantidad M de cursos a brindar a la comunidad.

Desarrollar una aplicación que permita:
   
/* a. Registrar una cantidad M de cursos. 
El código de curso, deberá asignarse de manera automática y debe ser un número entero en el rango [1, M]. 

/* b. Registrar una cantidad de N alumnos/as. Un alumno/a sólo puede inscribirse en un curso. 

/* c. Imprimir los datos de un alumno/a y el curso al que se inscribió. Para obtener los datos, se ingresará el dni de la persona.

/* d. Dados 2 vectores de alumnos, ordenados por código de curso y dni, uno con los datos de los alumnos del turno mañana 
y otro con los datos del turno tarde, imprimir por pantalla un listado con las siguientes características: 

Restricciones:
* El conjunto de cursos no puede ser recorrido secuencialmente.
* Para los puntos a, b y c, el conjunto de alumnos/as sólo puede ser recorrido secuencialmente 1 vez */
#include <iostream>
using namespace std;

struct CURSO{
    string nombre;
    int cantidadHoras;
    int nCurso;
};
struct ALUMNO{
    int dni;
    string nombre;
    int edad;
    int curso;
};
void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenarCurso(CURSO vec[], int cant){
    cout << "Ingrese los datos para los cursos " << endl;
    for (int i = 0; i < cant; i++){
        cout << "Ingrese nombre del curso " << endl;
        cin  >> vec[i].nombre;
        cout << "Ingrese cantidad de horas " << endl;
        cin  >> vec[i].cantidadHoras;
    }
    cout << endl;
    return;
}
void llenarAlumno(ALUMNO vec[], int cant){
    cout << "Ingrese los datos para los alumnos " << endl;
    for (int i = 0; i < cant; i++){
        cout << "Ingrese numero de dni " << endl;
        cin  >> vec[i].dni;
        cout << "Ingrese nombre del alumno " << endl;
        cin  >> vec[i].nombre;
        cout << "Ingrese edad del alumno " << endl;
        cin  >> vec[i].edad;
        cout << "Ingrese edad del alumno" << endl;
        cin  >> vec[i].edad
    }
    
}
void burbujeoCurso(CURSO vec[], int cant){
    int aux;
    int i = 0;
    bool ordenado = false;

    while (i < cant && ordenado == false){
        ordenado = true;

        for (int j = 0; j < cant - i - 1; i++){
            if (vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j] = aux;
                ordenado = false; 
            }
        }
        i++;
    }
}
void burbujeoAlumnos(ALUMNO vec[], int cant){
    int aux;
    int i = 0;
    bool ordenado = false;

    while (i < cant && ordenado == false){
        ordenado = true;

        for (int j = 0; j < cant - i - 1; i++){
            if (vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j] = aux;
                ordenado = false; 
            }
        }
        i++;
    }
}
void apareo(CURSO cursos[], int m, ALUMNO alumnos[], int n, int vector, int &k){
    int i = 0;
    int j = 0;
    while(i < m && j < n){
        if(cursos[i].nCurso > alumnos[j].curso){
            vector[k] = alumnos[]
        }
        
    }
    

    while(i < m){
        /* code */
    }
    while (j < n){
        /* code */
    }
    
}
int main () {
    //Declaro y pido cantidad de cursos
    int m;
    pedirDatos("Ingrese cantidad de cursos ", m);

    //Declaro y pido cantidad de Alumnos
    int n;
    pedirDatos("Ingrese cantidad de alumnos ", n);

    //Declaro vector de curso y lo lleno
    CURSO cursos[m];
    llenarCurso(cursos, m);

    //Declaro vector de alumno y lo lleno
    ALUMNO alumnos[n];
    llenarAlumno(alumnos, n);

    //Ordeno los vectores con burbujeo
    burbujeoCurso(cursos, m);
    burbujeoAlumnos(alumnos, n);

    //Creo el tercer vector
    int vector[n + m];
    int k = 0;
    //Hago el apareo de vectores
    apareo(cursos, m, alumnos, n, vector, k);
 return 0;
}
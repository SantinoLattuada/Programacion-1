//1- Cargar un vector de alumnos ordenado por Legajo
//2- Cargar un segundo vector de alumnos ordenado por legajo.
//3- Realizar el apareo de Vectores

#include <iostream>
using namespace std;

struct Alumno{
    int legajo;
    string nombre;
    int mejorNota;
};
void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
}
int busquedaBinaria(Alumno vecA[], int cant, int dato){
    int inicio = 0;
    int fin = cant - 1;
    int mitad;
    while (fin >= inicio){
        mitad = inicio + (fin - inicio) / 2;
        if (vecA[mitad] == dato){
            return mitad;
        }
        else{
            if (vecA[mitad] > dato){
                fin = mitad - 1;
            }
            else{
                inicio = mitad + 1;
            }
        }
    }
    return -1;
}
void burbujeoMejorado(Alumno vecA[], int cant){
    int i = 0;
    int aux;
    bool ordenado = false;

    while (i < cant && ordenado == false){
        ordenado = true;

        for (int j = 0; j < cant - i - 1; j++){
            if (vecA[j] > vecA[j + 1]){
                aux = vecA[j];
                vecA[j] = vecA[j + 1];
                vecA[j + 1] = aux;
                ordenado = false;
            }
            
        }
        i++;
    }
    
}
void apareo(Alumno vec1[], int n, Alumno vec2[], int m, Alumno vec3[], int &k){
    int i = 0;
    int j = 0;

    while (i < n && j < m){
        if (vec1[i].legajo < vec2[j].legajo){
            vec3[k] = vec1[i];
            i++;
        }
        else{
            vec3[k] = vec2[j];
            j++;
        }
        k++;
    }
    
    while (i < n){
        vec3[k] = vec1[i];
        i++;
        k++;
    }
    
    while (j < m){
        vec3[k] = vec2[j];
        j++;
        k++;
    }
    
}
int main () {
    //Declaro variables
    int n;
    int m;
    //Pido las posiciones de los vectores
    pedirDatos("Ingrese el numero de posiciones del Vector A ", n);
    pedirDatos("Ingrese el numero de posiciones del Vector B ", m);

    //Creo los vectores
    Alumno vectorA[n];
    Alumno vectorB[m];
    Alumno vectorC[n + m];

    //Cargo los vectores
    //VectorA
    cout << "Comience ingresando datos para el Vector A " << endl;
    for (int i = 0; i < n; i++){
        cout << "Ingrese numero de legajo " << endl;
        cin  >> vectorA[i].legajo;
        /*cout << "Ingrese el nombre del alumno " << endl;
        cin  >> vectorA[i].nombre;
        cout << "Ingrese la mejor nota del alumno " << endl;
        cin  >> vectorA[i].mejorNota;*/
    }

    //VectorB
    cout << "Comience ingresando datos para el Vector B " << endl;
    for (int j = 0; j < n; j++){
        cout << "Ingrese numero de legajo " << endl;
        cin  >> vectorB[j].legajo;
        /*cout << "Ingrese el nombre del alumno " << endl;
        cin  >> vectorB[j].nombre;
        cout << "Ingrese la mejor nota del alumno " << endl;
        cin  >> vectorB[j].mejorNota;*/
    }
    
    //Empiezo a llenar el vectorC
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m){
        if (vectorA[i].legajo < vectorB[j].legajo){
            vectorC[k] = vectorA[i];
            i++;
        }
        else{
            vectorC[k] = vectorB[j];
            j++;
        }
        k++;
    }
    while (i < n){
        vectorC[k] = vectorA[i];
        i++;
        k++;
    }
    while (j < n){
        vectorC[k] = vectorB[j];
        j++;
        k++;
    }

    //Imprimo los datos del ultimo vector
    cout << "Los numeros que conforman el Vector C son: ";
    for (int h = 0; h < k; h++){
        cout << vectorC[h].legajo << " || ";
    }
    
 return 0;
}
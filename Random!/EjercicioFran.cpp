//Crear una funcion que devuelva un vector de n elementos enteros 
//Crear para cada metodo de ordenamiento, una funcion.

/*#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(int vec[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingrese un entero " << endl;
        cin  >> n;
    }
    return;
}
// Vector = {3 2 17 20 -5 -19 49 47}
void burbujeoMejorado(int vec[], int n){
    int i = 0;
    int aux;
    bool ordenado = false;
    while (i < n && ordenado == false){
        ordenado = true;

        for (int j = 0; j < n - i - 1; j++){
            if (vec[j] > vec[j + 1]){
                //Guardo el dato mas grande en aux
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
                ordenado = false;
                // Vector = {-19 -5 2 3 17 20 47 49} i = 4 j = 2
            }
        }
        i++;
    }
    
}
int main () {
 
    int n;
    pedirDatos("Ingrese n ", n);

    //A
    int vector[n];
    llenar(vector, n);

    //B
    burbujeoMejorado(vector, n);

 return 0;
}*/

#include <iostream>
using namespace std;

struct Alumno {
    int legajo;
    string nombre;
    int edad;
};

void imprimirAlumno(Alumno alumno) {
    cout << " Alumno: " << alumno.nombre << endl;
    cout << "Legajo: " << alumno.legajo << endl;
    cout << "Edad: " << alumno.edad << endl;
}

int buscarPorPUP(int dia) {
    return dia - 1;
}
void burbujeoMejorado(int vec[], int dimension){
    //Declaro contador
    int i = 0;
    //Declaro auxiliar
    int aux;
    //Declaro el booleano en negativo
    bool ordenado = false;

    //Empiezo el while con contador menor a dimension y bool = false
    while(i < dimension && ordenado == false){
        //Una vez adentro paso el bool a verdadero
        ordenado = true;
        //Inicio el ciclo for
        for (int j = 0; j < dimension - i - 1; j++){
            //Inicio la condicion para comparar cual es mayor
            if (vec[j] > vec[j + 1]){
                //Si se cumple guardo el mayor en aux
                aux = vec[j];
                //Guardo el menor en donde estaba el mayor
                vec[j] = vec[j + 1];
                //Guardo el auxiliar en donde estaba el menor
                vec[j + 1] = aux;
                //Si estoy aca adentro es que no esta ordenado
                ordenado = false;
            }
            
        }
        //Recien afuera del ciclo for i se aumenta 
        i++;
    }
    
}
int busquedaBinaria(int vec[], int dimension, int dato){
    //Primero que nada declaro el inicio y el fin
    int inicio = 0;
    int fin = dimension - 1;
    //inicio el while con condicion de que fin sea mayor o igual a inicio
    while(fin >= inicio){
        //Declaro la mitad
        int mitad = inicio + (fin - inicio) / 2;
        if (vec[mitad] == dato){
            return mitad;
        }
        if (vec[mitad] > dato){
            fin = mitad - 1;
        }
        else{
            inicio = mitad + 1;
        }
    }
    return -1;
}
void apareo(int vec[], int n, int vec2[], int m, int vecRes[], int &k){
    int i = 0;
    int j = 0;
    while (i < n && j < m){
        if (vec[i] > vec2[j]){
            vecRes[k] = vec2[j];
            j++;
        }
        else{
            vecRes[k] = vec[i];
            i++;
        }
        k++;
    }
    while (i < n){
        vecRes[k] = vec[i];
        i++;
        k++;
    }
    while (j < m){
        vecRes[k] = vec[j];
        j++;
        k++;
    }
    
}
int main () {
    Alumno alumnos[] = {
        {12345, "Pepe", 32},
        {6789, "Juan", 33},
        {01212, "Maria", 23}
    };


    // Dia de la venta y posicion -> pos = Dia - 1
    float ventasDiarias[31] = {111, 222, 333, 6, 7, 8, 6, 12};
    int x = 1;

    int diaBuscado;
    cout << "Ingrese el dia para el que quiere ver la venta ( < 31):";
    cin >> diaBuscado;

    cout << "La venta del dia " << diaBuscado << " es " << ventasDiarias[(diaBuscado - 1)] << endl;

    int dimension = 10;
    int burbuja[dimension] = {9,1,3,15,10,8,13,2,10,12};

    burbujeoMejorado(burbuja, dimension);
    for (int i = 0; i < dimension; i++){
        cout << burbuja[i] << "\t";
    }
    
    cout << endl;
    int dimensionVec2 = 10;
    int dato = 7;
    int binario[dimensionVec2] = {1,2,3,4,5,6,7,8,9,10};

    int busqueda = busquedaBinaria(binario, dimensionVec2, dato);
    if(busqueda >= 0){
        cout << "El dato buscado se encuentra en la posicion: " << busqueda << endl;
    }
    else{
        cout << "El dato no estaba " << endl;
    }

    
 system("pause");
 return 0;
}
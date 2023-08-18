/*23.Dado un arreglo de enteros (Max = 1000) y otro entero (DATO) se pide desarrollar:
a) Una rutina que indique si DATO es o no un elemento del arreglo.
b) Una rutina que indique si DATO es o no un elemento del arreglo y si lo es devuelva la posición
de la primera aparición del mismo (Búsqueda Secuencial).
c) Una rutina que devuelva todas las posiciones en las cuales aparece DATO en el arreglo.
d) Una rutina que devuelva la posición de la primera y de la última aparición de DATO en el arreglo.*/

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(int vec[], int cant){
    cout << "Comience a llenar el vector de " << cant << " de numeros " << endl;
    for (int i = 0; i < cant; i++){
        cout << "Pos: " << i << endl;
        cin  >> vec[i];
    }
    return;
}
bool esONo(int vec[], int dato, int cant){
    for (int i = 0; i < cant; i++){
        if (vec[i] == dato){
            return true;
        } 
    }
    return false;
}
int busquedaSecuencial(int vec[], int dato, int cant){
    for (int i = 0; i < cant; i++){
        if (vec[i] == dato){
            return i;
        }
    }
}
void todasLasPosiciones(int vec[], int dato, int cant, int &x, int vecPosiciones[]){
    for (int i = 0; i < cant; i++){
        if (vec[i] == dato){
            vecPosiciones[x] = i;
            x++;
        }
    }
}
/*int primerYUltimaPosicion(int vec[], int dato, int cant){
    posPrimeraYUltima[2];
    for (int i = 0; i < cant; i++){
        if (){
            /* code 
        }  
    }
    
}*/
int main () {
    //Declaro y pido cantidad de n
    int cantidad;
    pedirDatos("Ingrese cantidad de numeros del arreglo (max 1000) ", cantidad);

    //Declaro y pido dato
    int dato;
    pedirDatos("Ingrese el valor de dato ", dato);

    //Declaro vector y lo lleno
    int vector[cantidad];
    llenar(vector, cantidad);

    //A- Analizo si dato es parte del arreglo
    bool formaParte;
    formaParte = esONo(vector, dato, cantidad);
    
    //B- Si dato es parte del arreglo, devuelvo la posicion de su primera aparición
    if (formaParte == true){
        int primeraAparicion;
        primeraAparicion = busquedaSecuencial(vector, dato, cantidad);
    }
    
    //C- Si dato es parte del arreglo, devuelvo todas las posiciones donde aparece.
    if (formaParte == true){
        int x = 0;
        int vecPosiciones[x];
        todasLasPosiciones(vector, dato, cantidad, x, vecPosiciones);
        cout << "Las posiciones donde se encuentra son: ";
        for (int i = 0; i < x; i++){
            if (vecPosiciones[i] == dato){
                cout << vecPosiciones[i] << " || ";
            }
        }
    }
    
    //D- Si dato es parte del arreglo, devuelvo la primera y la ultima posición donde aparece
    /*if (formaParte == true){
        int posPrimeraYUltima;
        posPrimeraYUltima = primerYUltimaPosicion(vector, dato, cantidad);
    }*/
    



 return 0;
}
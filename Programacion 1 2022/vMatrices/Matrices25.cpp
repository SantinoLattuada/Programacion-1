/*25. Dado un arreglo de enteros (Max = 1000) ordenado en forma ascendente y otro entero (DATO)
se pide desarrollar:
a) Una rutina que indique si DATO es o no elemento del arreglo y si lo es devuelva la posición de
la primera aparición del mismo (Búsqueda Secuencial en Arreglo Ordenado)
b) Una rutina que indique si DATO es o no elemento del arreglo y si lo es devuelva su posición
(Búsqueda Binaria o Dicotómica)*/

#include <iostream>
using namespace std;
void pedirDatos(string mensaje, int &dato){
    cout << mensaje << endl;
    cin  >> dato;
    return;
}
void llenar(int vec[], int cantidad){
    cout << "Ingrese numeros ordenados de forma ascendente " << endl;
    for (int i = 0; i < cantidad; i++){
        cin >> vec[i];
    }
    return;
}
bool estaONo(int dato, int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++){
        if (vec[i] == dato){
            return true;
        }
        
    }
    return false;
}
int buscar(int dato, int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++)
    {
        if(vec[i] == dato) {
            return i;
        }
    }
    return -1;
}
int busquedaBinaria(int arr[], int cant, int dato)
{
    // Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = cant - 1;
    int mitad;
    while (fin >= inicio)
    {   //VectorDias[10] = {1 7 14 15 23 30 40 41 50 52}
                    //DATO = 50
        mitad = inicio + (fin - inicio) / 2; //2
        // Si el elemento es el del medio, devolvemos la posicion
        if (arr[mitad] == dato) {
            return mitad;
        }
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (arr[mitad] > dato){
            fin = mitad - 1; // Cambio el limite superior fin = 9
        }
        else{
            inicio = mitad + 1; // Cambio el limite inferior inicio = 6
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}
int main () {
    //Declaro variable y pido cantidad
    int cantidad;
    pedirDatos("Ingrese la cantidad de enteros ", cantidad);

    //Declaro el vector y lo lleno
    int vector[cantidad];
    llenar(vector, cantidad);

    //Declaro y pido dato
    int dato;
    pedirDatos("Ingrese el dato ", dato);

    //1- Realizo busqueda secuencial para saber si el dato esta o no
    bool esta;
    int posicion;

    esta = estaONo(dato, vector ,cantidad);
    if (esta == true){
        posicion = buscar(dato, vector, cantidad);
    }
    
    //2- Realizo busqueda binaria para saber si dato esta o no
    int pos;
    pos = busquedaBinaria(vector, cantidad, dato);


    //Devuelvo resultados
    //1- Por secuencial
    cout << "Por busqueda secuencial " ; if (esta == true){
        cout << "dato se encontraba en el arreglo, en la posicion: " << posicion << endl;
    }
    else{
        cout << "dato no se encontraba en el arreglo " << endl;
    }

    //2- Por binaria
    cout << "Por busqueda binaria " ; if (pos >= 0){
        cout << "dato se encontraba en el arreglo, en la posicion: " << pos << endl;
    }
    else{
        cout << "dato no se encontraba en el arreglo " << endl;
    }
    
 return 0;
}
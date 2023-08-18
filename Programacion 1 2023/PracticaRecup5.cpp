/*a. Realizar una funcion sumatoria que dado un numero natural N, devuelva la sumatoria de 1 a N
b. Realizar un programa que permita ingresar X numeros naturales al usuario e imprimir por pantalla el promedio de sus sumatorias
c. realizar la funcion del punto a pero con recursividad */

#include <iostream>
using namespace std;

int funcionSumatoria(int n){
    int resultado = 0;
    for (int i = 1; i <= n; i++){
        resultado += i;
    }
    return resultado;
}
int sumatoriaXNaturales(){
    int cantNumeros;
    cout << "Informe la cantidad de numeros a ingresar " << endl;
    cin  >> cantNumeros;

    int sumatoriaDeNumeros = 0;
    int numero;
    for (int i = 0; i < cantNumeros; i++){
        cout << "Ingrese un num " << endl;
        cin  >> numero;
        sumatoriaDeNumeros += funcionSumatoria(numero);
    }
    cout << "El promedio de sus sumatorias es: " << sumatoriaDeNumeros / cantNumeros << endl;
    return;
}
int recursividadSumatoria(int numero){
    if (numero == 0 || numero == 1){
        return numero;
    }
    
    return numero + recursividadSumatoria(numero - 1);
}

// 5! = 5 * 4 * 3 * 2 * 1
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
int promedioFactoriales(){
    int cantNumeros;
    cout << "Cant numeros " << endl;
    cin  >> cantNumeros;
    int num;
    int totalFact = 0;
    for (int i = 0; i < cantNumeros; i++){
        cout << "Ingrese numero " << endl;
        cin  >> num;

        totalFact += factorial(num);
    }
    if (cantNumeros > 0){
        cout << totalFact / cantNumeros;
    }
    
}
int recursividad(int num){
    if (num == 0 || num == 1){
        return 1;
    }
    
    return num * recursividad(num--)
}
/*4) Realizar la codificación de una función que reciba dos valores enteros positivos y devuelva la multiplicación de ambos por sumas sucesivas (sin usar la multiplicación!):
a. Realizar la función utilizando ciclos de iteración
b. Realizar la función utilizando una función recursiva*/
int ciclosIteracion(int valorA, int valorB){
    int resultado = 0;
    for (int i = 0; i < valorB; i++){
        resultado += valorA;
    }
    return resultado;
}
int funcionRecursiva(int valorA, int valorB){
    if (valorA == 0 || valorB == 0){
        return 0;
    }
    if (valorB == 1){
        return valorA;
    }
    
    return valorA + funcionRecursiva(valorA, valorB--);

}
int main () {
    int n;
    cout << "Ingrese un numero " << endl;
    cin  >> n;

    cout << recursividad(n); << endl;

    int sumatoria = funcionSumatoria(n);
    // cout << sumatoria;


 return 0;
}
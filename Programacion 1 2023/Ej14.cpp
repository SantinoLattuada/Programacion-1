/*Ej. MI-14: Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10.*/

#include <iostream>
using namespace std;

void pedirNumero(int &numeros[], int enteros){
    for (int i = 0; i < enteros; i++){
        cout << "Ingrese un numero " << endl;
        cin  >> numeros[i];
    }
    
}

int promedioMayores100(int numeros[], int enteros){
    int promedio = 0;
    int cant = 0;

    for (int i = 0; i < enteros; i++){
        if (numeros[i] > 100){
            promedio += numeros[i];
            cant++;
        }
        
    }

    if (cant > 0){
        promedio = promedio / cant;    
    }
    
    return promedio;
}

int promedioMenos10(int numeros[], int enteros){
    int sumaMenos10 = 0;

    for (int i = 0; i < enteros; i++){
        if (numeros[i] < -10 ){
            sumaMenos10 += numeros[i];
        }
        
    }
    return sumaMenos10;
}

int main () {
    int enteros = 50;
    int numeros[enteros];

    int sumaMenos10;
    int promedioMas100;

    pedirNumero(numeros, enteros);

    promedioMas100 = promedioMayores100(numeros, enteros);
    sumaMenos10 = promedioMenos10(numeros, enteros);

    cout << "El promedio de los mayores a 100 es: " << promedioMas100 << " y la sumatoria de los menores a -10 es: " << sumaMenos10 << endl;

 system("pause");
 return 0;
}
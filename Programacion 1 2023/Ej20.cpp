//Ej. MI-20: Dados 10 valores informar el mayor

#include <iostream>
using namespace std;

void pedirDatos(int numeros[]){
    int i = 0;
    while (i < 10){
        cout << "Ingrese un numero: " << endl;
        cin  >> numeros[i];
        i++;
    }
    return;
}
int calculoMayor(int numeros[]){
    int i = 1;
    int numeroMayor = numeros[0];

    while (i < 10){
        if (numeroMayor < numeros[i]){
            numeroMayor = numeros[i];
        }
        i++;
    }
    return numeroMayor;
}
void imprimirDato(int numeroMayor){
    cout << "El numero mayor es: " << numeroMayor << endl;
}
int main (){
    int cant = 10;
    int numeros[cant];
    int numeroMayor = 0;

    pedirDatos(numeros);

    numeroMayor = calculoMayor(numeros);

    imprimirDato(numeroMayor);
 return 0;
}
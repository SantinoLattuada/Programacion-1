//Ej. MI-21: Dados N valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.

#include <iostream>
using namespace std;

void pedirDatos(int &variable){
    cout << "Ingrese la cantidad de numeros a evaluar " << endl;
    cin  >> variable;
};

void imprimirResultado(int numeroMayor, int lugarMayor, int numeroMenor, int lugarMenor){
    cout << "El numero mayor es: " << numeroMayor << " y estaba en la posicion: " << lugarMayor << endl;
    cout << "El numero menor es: " << numeroMenor << " y estaba en la posicion: " << lugarMenor << endl;
};
int main () {

    int cantNumeros;
    int contador = 0;
    int numero;

    pedirDatos(cantNumeros);

    int numeroMayor;
    int numeroMenor;
    int lugarMayor;
    int lugarMenor;

    while (contador < cantNumeros){
        cout << "Ingrese el numero " << endl;
        cin  >> numero;

        if (contador == 0){
            numeroMayor = numeroMenor = numero; 
            lugarMayor = lugarMenor = numero;
        }
        else if (numeroMayor < numero){
            numeroMayor = numero;
            lugarMayor = contador;
        }
        else if (numeroMenor > numero){
            numeroMenor = numero;
            lugarMenor = contador;
        }
        contador++;
    }
    imprimirResultado(numeroMayor, lugarMayor, numeroMenor, lugarMenor);


 return 0;
}
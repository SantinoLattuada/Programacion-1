/*Ej. MI-17: Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.*/

#include <iostream>
using namespace std;

void calculoContador(float valores, int &empleadosA, int &empleadosB, int &empleadosC, int &empleadosD){
    while (valores >= 0){
        if (valores < 1520){
            empleadosA++;
        }
        else if (valores >= 1520 && valores < 2780){
            empleadosB++;
        }
        else if (valores >= 2780 && valores < 5999){
            empleadosC++;
        }
        else{
            empleadosD++;
        }        

        cout << "Ingrese el sueldo del empleado " << endl;
        cin  >> valores;
    }
    
}
void imprimirResultados(int empleadosA, int empleadosB, int empleadosC, int empleadosD){
    cout << "La cantidad de empleados que ganan menos de $1520 es: " << empleadosA << endl;;
    cout << "La cantidad de empleados que ganan $1520 o más pero menos de $2780 es: " << empleadosB << endl;
    cout << "La cantidad de empleados que ganan $2780 o más pero menos de $5999 es: " << empleadosC << endl;
    cout << "La cantidad de empleados que ganan más de $5999 es: " << empleadosD << endl;
}
int main () {
    //Declaro la variable que guarda el sueldo
    float valores;

    //Declaro e inicializo los contadores
    int empleadosA = 0;
    int empleadosB = 0;
    int empleadosC = 0;
    int empleadosD = 0;

    cout << "Ingrese el sueldo del empleado " << endl;
    cin  >> valores;

    if (valores >= 0){
        calculoContador(valores, empleadosA , empleadosB, empleadosC, empleadosD);
        imprimirResultados(empleadosA , empleadosB, empleadosC, empleadosD);
    }
    else{
        cout << "Valor agregado no valido " << endl;
    }    


 return 0;
}
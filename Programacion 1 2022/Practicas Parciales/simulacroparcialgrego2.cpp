/*(2.5 puntos)
2 Realizar un programa que pida número por consola, hasta que el usuario ingrese el
número 0.
1. En cada ingreso, antes de pedir otro número debe informar cuántos números lleva
ingresando el usuario.
2. Al finalizar (cuando el usuario ingresó 0), debe informar:
a. Cantidad de números ingresados.
b. Promedio.
c. Mayor.
d. Menor.*/

#include <iostream>
using namespace std;

void mayorYMenor(int &mayor, int &menor, int num, int contador)
{
    if (contador == 1)
    {
        mayor = menor = num;
    }
    if (mayor < num)
    {
        mayor = num;
    }
    if (menor > num)
    {
        menor = num;
    }
}
void pedirDatos(string mensaje, int &num)
{
    cout << mensaje << endl;
    cin  >> num;
    return;
}

int main () {
 int numero;
 int contadorNumeros = 0;
 int numMayor, numMenor;
 int acumuladorNumeros = 0;
 pedirDatos("Ingrese un numero", numero);


 while (numero != 0)
 {
    contadorNumeros++;
    mayorYMenor(numMayor, numMenor, numero, contadorNumeros);
    acumuladorNumeros = acumuladorNumeros + numero;


    cout << "El usuario lleva ingresados " << contadorNumeros << " numeros " << endl;
    pedirDatos("Ingrese un numero", numero);
 }
 
 //a. Cantidad de números ingresados.
 cout << "La cantidad total de numeros ingresados son: " << contadorNumeros << endl;
 //b. Promedio.
 cout << "El promedio de los numeros ingresados es: " << acumuladorNumeros / contadorNumeros << endl;
 //c. Mayor.
 cout << "El numero mayor es: " << numMayor << endl;
 //d. Menor.
 cout << "El numero menor es: " << numMenor << endl;


 system("pause"); 
 return 0;
}
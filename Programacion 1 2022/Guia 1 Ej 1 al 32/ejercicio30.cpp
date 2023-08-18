/*Ej. MI-30: Dado un conjunto de valores enteros, calcular e informar a) cuántos valores cero hubo, b) promedio de
valores positivos, c) sumatoria de valores negativos.
Resolver el ejercicio para los siguientes lotes de datos:
1) 167 valores enteros
2) N valores, donde el valor de N debe ser leído previamente
3) El conjunto de valores termina con un valor igual al anterior
4) Se dan N valores, pero el proceso deberá finalizar si se procesan todos los valores o si la cantidad de ceros
supera a cuatro Se dan N valo
5)res, pero el proceso deberá finalizar si se cumple alguna de las condiciones de 4) o si el
promedio de positivos resulta mayor que seis. */

// datos de salida: 
//a) cuántos valores cero hubo, 
//b) promedio de valores positivos, 
//c) sumatoria de valores negativos.

#include <iostream>
using namespace std;

void ingresoNumeros(string mensaje, int &a)
{
    cout << mensaje << endl;
    cin  >> a;
}

int main () {
 int numero;
 for (int i = 0; i < 167; i++)
 {
    ingresoNumeros("Ingrese un numero ", numero);

 }
 






 system("pause");
 return 0;
}
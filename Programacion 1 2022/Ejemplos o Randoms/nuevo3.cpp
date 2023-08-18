/*1 Realizar un programa que reciba un número, y que muestre por pantalla, saltando de línea
en cada número, todos los números del 1 hasta el ingresado por el usuario, excepto: Los
múltiplos de 3, aunque si son también múltiplos de 10 los debe mostrar.*/

/*#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &num){

    cout << mensaje << endl;
    cin  >> num;
    return;
}

int main () {
    int numero;
 pedirDatos("Ingrese un numero", numero);
 
 for (int i = 1; i <= numero; i++)
 {
    if (i % 3 != 0)
    {
        cout << i << endl;
    }
    else if (i % 3 == 0)
    {
        if (i % 10 == 0)
        {
            cout << i << endl;
        }
        
    }
    
 }
 system("pause");
 return 0;
}*/

/*Realizar un programa que pida número por consola, hasta que el usuario ingrese el
número 0.
1. En cada ingreso, antes de pedir otro número debe informar cuántos números lleva
ingresando el usuario.
2. Al finalizar (cuando el usuario ingresó 0), debe informar:
a. Cantidad de números ingresados.
b. Promedio.
c. Mayor.
d. Menor.*/

/*#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &num){

    cout << mensaje << endl;
    cin  >> num;
    return;
}

int main () {
 int numero;
 int contador = 0;
 int acumulador = 0;
 int numMayor, numMenor;
 pedirDatos("Ingrese un numero", numero);

 while (numero != 0)
 {
    contador++;
    acumulador = acumulador + numero;
    if (contador == 1)
    {
        numMayor = numero;
        numMenor = numero;
    }
    if (numero > numMayor)
    {
        numMayor = numero;
    }
    if (numero < numMenor)
    {
        numMenor = numero;
    }
    
    

    cout << "El usuario lleva ingresados " << contador << " numeros " << endl;
    pedirDatos("Ingrese un numero", numero);
 }
    //A
    cout << "La cantidad de numeros ingresados es: " << contador << endl;
    
    //B
    cout << "El promedio de los numeros ingresados es:" << acumulador / contador << endl;

    //C
    cout << "El mayor numero es: " << numMayor << endl;

    //D
    cout << "El menor numero es: " << numMenor << endl;
 return 0;
}*/

/*3 Realizar un programa que reciba un número entero del usuario, y que devuelva:
a- su factorial. Este cálculo debe ser solucionado en una función.
b- que informe si es múltiplo de 2. Este cálculo deberá ser resuelto en otra función.*/

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &num){

    cout << mensaje << endl;
    cin  >> num;
    return;
}
int funcionFactorial(int num){
    int fact = 1;
    for (int i = 1; i < num; i++)
    {   
        fact = fact * (i + 1);
    }
    return fact;
}
bool funcionMultiplo(int num){
    bool multiplo;
    if (num % 2 == 0)
    {
        return multiplo = true;
    }
    else if (num % 2 != 0)
    {
        return multiplo = false;
    }
    
    
}
int main () {
 int numero;
 int factorial;
 bool multiplo;
 pedirDatos("Ingrese un numero entero",numero);
 factorial = funcionFactorial(numero);
 multiplo = funcionMultiplo(numero);

 cout << "El factorial del numero ingresado es: " << factorial << endl;
 if (multiplo == true)
 {
    cout << "Es multiplo de 2" << endl;
 }
 else if (multiplo == false)
 {
    cout << "No es multiplo de 2" << endl;
 }
 

 system("pause");
 return 0;
}
/* Desarrollar una aplicacion que permita ingresar numeros enteros. Se deben procesar
todos los numeros hasta que se ingrese un 0. Solo contemplando aquellos numeros
que sean primos, informar si la secuencia de numeros esta ordenada, y en tal caso,
informar si es ascendente o descendente.

Nota: recuerde que un numero primo es aquel que solo es divisible por 1 y por si mismo.

Punto minimos que debe contener este ejercicio:
    a. Desarrollar la funcion bool esNumeroPrimo(int) utilizando lenguaje C/C++
    b. Desarrollar el diagrama de flujo del programa principal. */

#include <iostream>
using namespace std;

// Averiguar si es primo o no

bool esNumeroPrimo(int numero)
{
    for (int i = 2; i < (numero / 2); i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Pedir los numeros

void ingreseNumero(string mensaje, int &numero)
{
    cout << mensaje;
    cin >> numero;
    
    return;
}

// Algoritmo

int main ()
{
    int numero = 0, numeroAnterior = 0, contadorPrimos = 0;
    bool consecutivo = true, ascendente = true;
    
    ingreseNumero("Ingrese un número entero: ", numero);
    
    while (numero != 0)
    {
        numeroAnterior = numero;
        
        ingreseNumero("Ingrese otro número entero (para parar ingrese 0): ", numero);
        
        // Verificar que sea primo
        
        if (esNumeroPrimo(numero) == true)
        {
            contadorPrimos++;
            
            // Es el primer primo ingresado?
            
            if (contadorPrimos > 1)
            {
                // Es el segundo primo ingresado?
                
                if (contadorPrimos == 2)
                {
                    // Es ascendente?
                    
                    if (numero > numeroAnterior)
                    {
                        ascendente = true;
                    }
                    else
                    {
                        ascendente = false;
                    }
                }
                else
                {
                    // Es consecutivo y, por lo tanto, ascendente o descendente?
                    
                    if (consecutivo == true)
                    {
                        if (numero > numeroAnterior)
                        {
                            if (ascendente == true)
                            {
                                consecutivo == true;
                            }
                            else
                            {
                                consecutivo == false;
                            }
                        }
                        else
                        {
                            if (ascendente == true)
                            {
                                consecutivo == true;
                            }
                            else
                            {
                                consecutivo == false;
                            }
                        }
                    }
                }
            }
            else
            {
                numeroAnterior = numero;
            }
        }
    }
    
    // Si toda la secuencia era consecutiva, comunicarlo junto con ascendencia o descendencia
    
    if (consecutivo == true)
    {
        if (ascendente == true)
        {
            cout << "La secuencia de números primos ingresados era consecutiva y ascendente.";
        }
        else
        {
            cout << "La secuencia de números primos ingresados era consecutiva y descendente.";
        }
    }
    else
    {
        cout << "La secuencia de números primos ingresados no era consecutiva.";
    }
    
    return 0;
}



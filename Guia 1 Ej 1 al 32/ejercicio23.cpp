//Ej. MI-23. Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):
//a) El valor máximo negativo
//b) El valor mínimo positivo
//c) El valor mínimo dentro del rango -17.3 y 26.9
//d) El promedio de todos los valores.

#include <iostream>
using namespace std;

void mensaje()
{
    cout << "No se ingresaron valores" << endl;
    return;
}


int main()
{   
    system("cls");
    
    float numero, minimoRango = 0;
    float maximoNegativo = 0, minimoPositivo = 0;
    float sumaNumeros = 0;
    int cantNumeros = 0;
    
    cout << "Ingrese un numero: " << endl;
    cin  >> numero;

    while (numero != 0)
    { 
        if (numero < 0 && (numero > maximoNegativo || maximoNegativo == 0))
        {
          maximoNegativo = numero;
        }
        if (numero > 0 && (numero < minimoPositivo || minimoPositivo == 0))
        {
            minimoPositivo = numero;
        }
        if (numero > -17.3 && numero < 26.9) 
        {
            if (minimoRango == 0)
            {
                minimoRango = numero;
            }
            else if (minimoRango > numero)
            {
                minimoRango = numero;
            }
            
        }
        sumaNumeros = sumaNumeros + numero;
        cantNumeros++;

        cout << "Ingrese un numero: " << endl;
        cin  >> numero;
    }


    //A 
    if (maximoNegativo == 0)
    {
        mensaje();
    }
    else 
    {
        cout << "El valor maximo negativo es: " << maximoNegativo << endl;
    }

    //B
    if (minimoPositivo == 0 )
    {
        mensaje();
    }
    else
    {
        cout << "El valor minimo positivo es: " << minimoPositivo << endl;
    }

    //C
    if (minimoRango == 0)
    {
        mensaje();
    }
    else 
    {
        cout << "El valor minimo dentro del rango es: " << minimoRango << endl;
    }

    //D
    if (cantNumeros == 0)
    {
        mensaje();
    }
    else
    {
        cout << "El promedio de todos los valores es: " << sumaNumeros/cantNumeros << endl;
    }
    


    system("pause");
    return 0;
}

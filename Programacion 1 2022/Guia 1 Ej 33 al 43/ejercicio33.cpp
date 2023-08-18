//Desarrollar una función que calcule el máximo común divisor de dos números enteros A, B con el siguiente
//algoritmo:
//1) Dividir A por B, y calcular el resto (0 < R < B)
//2) Si R = 0, en el MCD es B, si no seguir  3)
//3) Reemplazar A por B, B por R, y volver al paso 1)

#include <iostream>
using namespace std;

int divisionAYB (int &a, int &b)
{   
    int mcd;
    int resto = a % b;

    while (resto != 0)
    {
        resto = a % b;

        if (resto == 0)
        {
            mcd = b;
        }
        else if (resto != 0)
        {
            a = b;
            b = resto;
        }
        
       
    }
    mcd = b;
    return mcd;
}

void leer (int &val1, int &val2)
{
    cout << "Ingrese la primer nota" << endl;
    cin  >> val1;
    cout << "Ingrese la segunda nota" << endl;
    cin  >> val2;
    return;
}


int main () 
{
    system("cls");
    int valor1,valor2;

    leer(valor1, valor2);

    cout << "El maximo comun denominador de a y b es: " << divisionAYB(valor1, valor2) << endl;



 system("pause");
 return 0;
}
#include <iostream>
using namespace std;

int maximo(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}



void leer (int &valor1, int &valor2)
{
    cout << "Ingrese el primer valor";
    cin  >> valor1;
    cout << "Ingrese el segundo valor";
    cin  >> valor2;

    return;
}

int 


void obtenerNotas(int &val1, int &val2)
{
    cout << "Ingrese primer nota:";
    cin >> val1;
    cout << "Ingese segunda nota:";
    cin >> val2;
    return;
}

int main()
{

    int max = 0;
    int nota1 = 0;
    int nota2 = 0;
    leer(nota1, nota2);
    string resultadoBien = bien()
    //max = maximo(valor1, valor2);
    cout << max << endl;

    //obtenerNotas(valor1, valor2);
    //max = maximo(valor1, valor2);
    cout << max << endl;

    system("pause");
    return 0;
}


#include <iostream>
using namespace std;

int quintaParte(int dato)
{
    int resultado = dato/5;
    return resultado;
}

int main()
{   
    int numero = 100;

    int quintaParteNumero;
    quintaParteNumero = quintaParte(numero);
    cout << quintaParte(numero) << endl;




    system("pause");
    return 0;
}

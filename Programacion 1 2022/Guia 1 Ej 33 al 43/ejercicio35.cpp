#include <iostream>
using namespace std;

int factorial(int numero) 
{
    // 6! = 6*5*4*3*2*1
    // 3! = 3*2*1 = 6
    int fact = 1; 
    for (int i = 1; i < numero ; i++) {
        fact = fact * (i + 1);
    }
    return fact;


}

int main()
{   
    system("cls");
    int num = 0;
    int numUsuario;

    int cantMultiplos3 = 0;
    int cantMultiplos5 = 0;
    int cantMultiplos3y5 = 0;

    

 while (num >= 0)
 {
    cout << "Ingrese un numero";
    cin  >> numUsuario;
    
    if (numUsuario %3 == 0 && numUsuario % 3 != 0)
    {
        cantMultiplos3++;
    }
    else if (numUsuario % 5 == 0 && numUsuario % 5 !=0)
    {
        cantMultiplos5++;
    }
    else if (numUsuario % 3 == 0 && numUsuario % 5 ==0)
    {
        cantMultiplos3y5++;
    }
    
   cout << "En la serie de numero hubo: " << cantMultiplos3 << " Multiplos de 3";
   cout << "En la serie de numero hubo: " << cantMultiplos5 << " Multiplos de 5";
   cout << "En la serie de numero hubo: " << cantMultiplos3y5 << " Multiplos de 3 y 5";

    
    return 0;
 }

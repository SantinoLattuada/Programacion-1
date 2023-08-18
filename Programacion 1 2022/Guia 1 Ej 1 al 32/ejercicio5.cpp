#include <iostream>
using namespace std;

int main()
{   system("cls");

   int num1, num2;
   cout << "Ingrese el primer numero";
   cin  >> num1;

   cout << "Ingrese el segundo numero";
   cin  >> num2;

   if (num1 > num2)
   {
       cout << "El primer numero es mayor que el segundo";
    }
    else  
    {   
        cout << "El segundo numero es mayor que el primero";
    }    

 return 0;
}
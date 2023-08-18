#include <iostream>
using namespace std;

int main () 
{
 system("cls");

 int num, cantMayores100, sumaMayores100, sumatoriaMenos10, cant;

 cant = 5;
 cantMayores100 = 0;
 sumaMayores100 = 0;
 sumatoriaMenos10 = 0;
 
 for (int i = 0; i < cant; i++)
   {
      cout << "Ingrese un numero";
      cin  >> num;

        if (num > 100)
       {
          sumaMayores100 = sumaMayores100 + num;
          cantMayores100 = cantMayores100 + 1;
        
        }
       else if (num < -10)
       {   
          sumatoriaMenos10 = sumatoriaMenos10 + num;
       }
       
       
    }
  
  if (cantMayores100 > 0)
  {
      cout << "El promedio de los mayores que 100 es: " << sumaMayores100/ cantMayores100;
  }
  
    cout << "La sumatoria de menos que -10 es: " << sumatoriaMenos10;



 return 0;
}
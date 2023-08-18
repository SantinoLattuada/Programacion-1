#include <iostream>
using namespace std;

int main()
{   system("cls");
    
   int AAAAMMDD, dia, mes, anio;
   cout << "Ingrese la fecha en formato AAAAMMDD";
   cin  >> AAAAMMDD;

   dia = AAAAMMDD % 100;
   mes = (AAAAMMDD - dia) / 100 % 100;
   anio = (AAAAMMDD - mes * 100 - dia) / 10000;

   cout << "El dia es: " << dia << " El mes es:" << mes << " El anio es: " << anio;

   return 0;
}
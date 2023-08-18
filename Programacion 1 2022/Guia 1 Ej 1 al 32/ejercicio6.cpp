#include <iostream>
using namespace std;

int main () 
{
    system("cls");
 int fecha1 = 19900321;
 int fecha2 = 20000507;
 
 if (fecha1 < fecha2)
 {
     cout << "La fecha: "<< fecha2 << " Es mas reciente" << endl;
 }
 else if (fecha2 < fecha1)
 {
     cout << "La fecha: "<< fecha1 << " Es mas reciente" << endl;
 }

 return 0;
}
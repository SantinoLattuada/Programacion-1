#include <iostream>
using namespace std;

int edadAGrupoEtario (int &edad)
{
    if (edad <= 14)
    {
        edad = 1;
    }
    else if (edad >= 15 && edad <= 21)
    {
        edad = 2;
    }
    else if (edad >= 22 && edad <= 28)
    {
        edad = 3;
    }
    else if (edad >=29 && edad <= 35)
    {
        edad = 4;
    }
    else if (edad >= 36 && edad <= 42)
    {
        edad = 5;
    }
    else if (edad >= 43 && edad <= 49)
    {
        edad = 6;
    }
    else if (edad >= 50 && edad <= 63)
    {
        edad = 7;
    }
    else if (edad > 63)
    {
        edad = 8;
    }
    
    return edad;
}

void mensaje()
{
    cout << "Ingrese su edad ";
    return;
}

int main () {
 
 int edad;
 mensaje();
 cin >> edad;
 edadAGrupoEtario(edad);

 cout << "El programa retorna: " << edad << endl;








 system("pause");
 return 0;
}
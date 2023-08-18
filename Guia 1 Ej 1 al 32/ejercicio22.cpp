//Ej. MI-22: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre =
//‘FIN’, informar el nombre de la persona con mayor edad y el de la más joven.
#include <iostream>
using namespace std;

int main()
{   
    system("cls");
    
    string nombre, nombreMayor, nombreMenor;
    int AAAAMMDD, edadMayor, edadMenor;
    int contador = 0;
    cout << "Ingrese su nombre";
        cin  >>  nombre;
        cout << "Ingrese una fecha de nacimiento en formato AAAAMMDD";
        cin  >>  AAAAMMDD;

    while (nombre != "fin")
    {   
        contador++;

        if (contador == 1)
        {
            edadMayor = edadMenor = AAAAMMDD;
            nombreMayor = nombreMenor = nombre;
        }
        
        if (edadMayor > AAAAMMDD)
        {
            edadMayor = AAAAMMDD;
            nombreMayor = nombre;
        }
        if (edadMenor < AAAAMMDD)
        {
            edadMenor = AAAAMMDD;
            nombreMenor = nombre;
        }
        
        cout << "Ingrese su nombre";
        cin  >>  nombre;
        cout << "Ingrese una fecha de nacimiento en formato AAAAMMDD";
        cin  >>  AAAAMMDD;
    }


    cout << "El nombre de la persona mayor es: " << nombreMayor << endl;
    cout << "El nombre de la persona menor es: " << nombreMenor << endl;

    system("pause");
    return 0;
}

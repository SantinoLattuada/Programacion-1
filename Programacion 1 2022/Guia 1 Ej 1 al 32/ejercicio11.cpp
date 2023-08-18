#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    system("cls");

    int edad;
    cout << "Ingrese una edad";
    cin  >> edad;

    if (edad <= 12)
    {
        cout << "Menor" << endl;
    }
    else if (edad <=18)
    {
        cout << "Cadete" << endl;
    }
    else if (edad < 26)
    {
        cout << "Juvenil" << endl;
    }
    else if (edad >= 26)
    {
        cout << "Mayor" << endl;
    }
    
    
 
    return 0;
}

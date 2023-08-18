#include <iostream>
using namespace std;

int main()
{
    system("cls");
    
    int m;
    int contM = 0;
    int num = 0;
    cout << "Ingrese la cantidad de multiplos";
    cin  >> m;

    while (contM < m)
    {
        if (num % 3 == 0 && num % 5 != 0)
        {
            contM++;
            cout << num;
        }
        num++;
    }
    
    return 0;
}

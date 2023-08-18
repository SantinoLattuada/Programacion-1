#include <iostream>
using namespace std;

int main()
{   
    system("cls");
    
    float sueldo;

    int menos1520 = 0; 
    int menos2780 = 0;
    int menos5999 = 0;
    int mas5999 = 0;
    cout << "Indique su sueldo";
    cin  >> sueldo;

    while (sueldo > 0)
    {
        cout << "Indique su sueldo";
        cin  >> sueldo;

        if (sueldo < 1520)
        {
            menos1520++;
        }
        else if (sueldo >= 1520 && sueldo<2780)
        {
            menos2780++;
        }
        else if (sueldo >= 2780 && sueldo < 5999)
        {
            menos5999++;
        }
        else if (sueldo >= 5999)
        {
            mas5999++;
        }
        
    }
    cout << menos1520 << "Cobran menos de 1520" << endl;
    cout << menos2780 << "Cobran menos de 2780" << endl;
    cout << menos5999 << "Cobran menos de 5999" << endl;
    cout << mas5999 << "Cobran mas de 5999" << endl;
    return 0;
}

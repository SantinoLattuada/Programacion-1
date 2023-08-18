#include <iostream>
using namespace std;

int main()
{
    int sumatoria;
    sumatoria = 0;
    for (int i=0 ; i < 100; i++)
    {
        cout <<i << endl;
        sumatoria = sumatoria + i; 
     }   
    cout << sumatoria;

    return 0;
}

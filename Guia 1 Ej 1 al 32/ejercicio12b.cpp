#include <iostream>
using namespace std;

int main()
{
    int sumatoria;
    sumatoria = 0;
    for (int i=100 ; i >= 0; i--)
    {
        if (i % 3 !=0)
        
        cout <<i << endl;
        sumatoria = sumatoria + i; 
     }   
    cout << sumatoria;

    return 0;
}
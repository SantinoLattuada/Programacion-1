#include <iostream>
using namespace std;

void burbujeo(int arr[], int n)
{
    int aux = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // Los ultimos i elementos ya estan ordenados
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}
//     int vec[] = {3, 1,  0, -2, 5, 2, 1, 0, 6, 23};


int main()
{

    int vec[] = {3, 5, 6, 1, 0, -2, 23, 2, 1, 0};

    burbujeo(vec, 10);

    for(int i = 0; i < 10; i++) {
        cout << vec[i] << endl;
    }


 return 0;
}
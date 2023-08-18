#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int l1, l2, l3;

    cout << "Indique la longitud del primer lado: ";
    cin  >> l1;

    cout << "Indique la longitud del segundo lado: ";
    cin  >> l2;

    cout << "Indique la longitud del tercer lado: ";
    cin  >> l3;

    if (l1 = l2 && l1 = l3)
    {
        cout << "Equilatero" << endl;
    }
    else if (l1 = l2 && l3 != l1 || l2 = l3 && l3 != l1 )
    {
        cout << "Isosceles" << endl;
    }
    else if (l1 != l2 && l1 != l3 && l2 != l3)
    {
        cout << "Escaleno" << endl;
    }
    




    return 0;
}

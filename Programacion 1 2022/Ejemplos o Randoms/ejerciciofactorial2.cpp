#include <iostream>
using namespace std;

int main()
{   system("cls");
    int num, factorial = 1;

    cout << "ingrese el numero";
    cin >> num;

 int i =1;

 while (i<=num)
 {
     factorial *=i;
     i++;
 }    
 cout << "el factorial es: " << factorial ;

 return 0;
}
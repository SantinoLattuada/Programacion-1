#include <iostream>
using namespace std;

//5! = 5 * 4 * 3 * 2 * 1
int factorial(int nro) {
    int fact = 1;
    for (int i = 1; i <= nro; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void promedioDeFactoriales(int cant){
    int totalFactorial = 0;
    int num;
    int fact = 1;

    for (int i = 0; i < cant; i++){
        cout << "Ingrese numero " << endl;
        cin  >> num;
        fact = factorial(num);
        totalFactorial = totalFactorial + fact; 
    }
    if (cant > 0){
        cout << "Promedio de factoriales: " << totalFactorial / cant << endl;
    }
    


}
// fact(n) = n * fact(n - 1)
// fact(0) = 1
// fact(1) = 1

int factorialRecursiva(int nro) {
    if(nro == 0 || nro == 1) {
        return 1;
    }


    return nro * factorialRecursiva(nro - 1);
}


int main () {
    cout << factorial(5);

    
 
system("pause");
 return 0;
}
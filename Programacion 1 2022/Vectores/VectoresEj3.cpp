/*3. Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes. 
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento homólogo de VEC. 
Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón*/
#include <iostream>
using namespace std;

void leer(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++){
        cin >> vec[i];
    }
}
int factorial(int vec[], int cantidad) {
    int fact = 1; 
    for (int i = 1; i < cantidad ; i++) {
        fact = fact * (i + 1);
    }
    return fact;
}
int main () {

  int cantidad = 0;
    leer("Ingrese la cantidad de elementos: ", cantidad);
    int nums[cantidad];
    int fact[cantidad];
    llenar(cantidad);

 for (int i = 1; i <= cantidad; i++)
 {
    fact[i] = factorial(nums[i]);
 }
 for (int i = 0; i < cantidad; i++)
    {
        cout << "El factorial de " << nums[i] << " es " << fact[i];
    }
    return 0;
}

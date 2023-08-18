/*5. Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.*/

#include <iostream>
using namespace std;

void leer(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(string mensaje,int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++){
        cin >> vec[i];
    }
}

int main () {
 int cantidad;

 leer("Ingrese la cantidad de elementos: ", cantidad);

 int nums[cantidad];
 int nums2[cantidad];
 int vector3[cantidad];

 llenar("Ingrese valores para vector 1", nums,cantidad);
 llenar("Ingrese valores para vector 2",nums2,cantidad);

  for (int i = 0; i < (cantidad); i++)
    {
        if (i % 2 == 0)
        {
            vector3[i] = nums[i];
            cout << vector3[i] << endl;
        }
        else
        {
            vector3[i] = nums2[i];
            cout << vector3[i] << endl;
        }
    }



 return 0;

}
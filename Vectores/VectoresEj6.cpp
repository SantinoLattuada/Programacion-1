/*6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo
no es único, imprimir todas las posiciones en que se encuentra.*/

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
    return;
}

int main() {
 int cantidad;
 int numMayor, posMayor;
 leer("Ingrese la cantidad de elementos ", cantidad);

 int vector[cantidad];
 llenar(vector, cantidad);

 for (int i = 0; i < cantidad; i++)
 {
    if (vector [i] == 0)
    {
        numMayor = vector [i];
        posMayor = i;
    }
    else if (vector [i] >= numMayor)
    {
        numMayor = vector [i];
        posMayor = i;
    }
    
 }
    cout << "El numero mayor es: " << numMayor << " y la posicion es: "<< posMayor << endl;
 return 0;
}


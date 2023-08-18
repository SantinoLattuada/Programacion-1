/*Realizar programa que dado un vector de 10 elementos
cuyos valores se encuentran entre el rango [1, 100],
informe el elemento que mas veces se repite*/

#include <iostream>
using namespace std;


int main () {
    int n = 10;

    int vec[n] = {1, 2, 2, 1, 4, 3, 3, 3, 3, 5};

    int maxRepeticiones = 0;
    int elementoMasRepetido = 0;
    for (int i = 0; i < n; i++){
        int repeticiones = 0;
        for (int j = 0; j < n; j++){
            if (vec[i] == vec[j]){
                repeticiones++;
            }
            
        }
        if (repeticiones > maxRepeticiones){
            maxRepeticiones = repeticiones;
            elementoMasRepetido = vec[i];
        }
        
    }
    cout << "Elemento: " << elementoMasRepetido << endl;
 return 0;
}